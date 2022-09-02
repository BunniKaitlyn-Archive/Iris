#pragma once
#include "app.h"
#include "util.h"
#include "offsets.h"
#include "sdk_util.h"
#include "ability_util.h"

namespace iris {

class athena_util {
public:
    static void GrantPlayerDefaultAbilities(SDK::AFortPlayerPawnAthena* playerPawn) {
        static SDK::UFortAbilitySet* DefaultAbilitySet = sdk_util::LoadObject<SDK::UFortAbilitySet>(L"/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

        if (playerPawn && playerPawn->AbilitySystemComponent) {
            for (int32_t i = 0; i < DefaultAbilitySet->GameplayAbilities.Num(); i++) {
                SDK::UClass* AbilityClass = DefaultAbilitySet->GameplayAbilities[i].Get();
                ability_util::GrantAbility(playerPawn->AbilitySystemComponent, AbilityClass);
            }
        }
    }

    static void AddPlayerInventoryItem(SDK::AFortPlayerControllerAthena* playerController, SDK::UFortWorldItem* item) {
        playerController->WorldInventory->Inventory.ReplicatedEntries.Add(item->ItemEntry);
        playerController->WorldInventory->Inventory.ItemInstances.Add(item);
    }

    static void UpdatePlayerInventory(SDK::AFortPlayerControllerAthena* playerController) {
        playerController->HandleWorldInventoryLocalUpdate();
        playerController->WorldInventory->HandleInventoryLocalUpdate();
        playerController->WorldInventory->Inventory.MarkArrayDirty();
    }

    // TODO: Remove this in the future.
    static void GivePlayerWeapon(SDK::AFortPlayerControllerAthena* playerController, SDK::UFortWeaponItemDefinition* itemDef, SDK::EFortQuickBars quickBar, int32_t slot, int32_t ammoCount = 0, int32_t itemCount = 1) {
        auto WeaponInstance = itemDef->CreateTemporaryItemInstanceBP(itemCount, 0);
        AddPlayerInventoryItem(playerController, static_cast<SDK::UFortWorldItem*>(WeaponInstance));
        playerController->QuickBars->ServerAddItemInternal(WeaponInstance->GetItemGuid(), quickBar, slot);

        if (!itemDef->IsA(SDK::UFortWeaponMeleeItemDefinition::StaticClass()) || !itemDef->IsA(SDK::UFortBuildingItemDefinition::StaticClass()) || !itemDef->IsA(SDK::UFortEditToolItemDefinition::StaticClass())) {
            auto AmmoItemDef = itemDef->GetAmmoWorldItemDefinition_BP();
            if (AmmoItemDef) {
                auto WeaponAmmoInstance = AmmoItemDef->CreateTemporaryItemInstanceBP(ammoCount, 0);
                AddPlayerInventoryItem(playerController, static_cast<SDK::UFortWorldItem*>(WeaponAmmoInstance));
            }
        }
    }

    static SDK::AFortPlayerPawnAthena* SpawnPlayer(SDK::AFortPlayerControllerAthena* playerController, SDK::FVector location, SDK::FRotator rotation, bool bCanBeDamaged = true) {
        static SDK::UBlueprintGeneratedClass* PlayerPawnAthenaClass = sdk_util::LoadObject<SDK::UBlueprintGeneratedClass>(L"/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

        SDK::AFortPlayerPawnAthena* PlayerPawnAthena = iris::sdk_util::SpawnActor<SDK::AFortPlayerPawnAthena>(PlayerPawnAthenaClass, location, rotation);

        PlayerPawnAthena->bCanBeDamaged = bCanBeDamaged;
        PlayerPawnAthena->SetOwner(playerController);

        playerController->Possess(PlayerPawnAthena);

        // FIXME(kaitlyn~): Hardcoded parts.
        static SDK::UCustomCharacterPart* CustomHeadPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
        static SDK::UCustomCharacterPart* CustomBodyPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
        static SDK::UCustomCharacterPart* CustomBackpackPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Backpacks/NoBackpack.NoBackpack");

        PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Head, CustomHeadPart);
        PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Body, CustomBodyPart);
        PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Backpack, CustomBackpackPart);

        static_cast<SDK::AFortPlayerStateAthena*>(playerController->PlayerState)->OnRep_CharacterParts();

        GrantPlayerDefaultAbilities(PlayerPawnAthena);

        return PlayerPawnAthena;
    }

    static void StartMatch(SDK::AFortGameStateAthena* gameState) {
        // Ignore starting if match is already in warmup.
        if (gameState->GamePhase < SDK::EAthenaGamePhase::Warmup) {
            static SDK::UFortPlaylistAthena* PlaylistAthena = sdk_util::LoadObject<SDK::UFortPlaylistAthena>(L"/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

            gameState->CurrentPlaylistData = PlaylistAthena;
            gameState->OnRep_CurrentPlaylistData();

            gameState->GamePhase = SDK::EAthenaGamePhase::Warmup;
            gameState->OnRep_GamePhase(SDK::EAthenaGamePhase::None);
        }
    }
};

}
