#pragma once
#include "app.h"
#include "util.h"
#include "offsets.h"
#include "sdk_util.h"
#include "ability_util.h"

namespace iris {

class athena_util {
public:
    static SDK::UDataTable* LootTierData;
    static SDK::UDataTable* LootPackages;

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
        if (playerController && playerController->WorldInventory && item) {
            playerController->WorldInventory->Inventory.ReplicatedEntries.Add(item->ItemEntry);
            playerController->WorldInventory->Inventory.ItemInstances.Add(item);
        }
    }

    static void AddPlayerInventoryItemDef(SDK::AFortPlayerControllerAthena* playerController, SDK::UFortItemDefinition* itemDef, int32_t count = 1) {
        if (itemDef) {
            SDK::UFortWorldItem* ItemInstance = static_cast<SDK::UFortWorldItem*>(itemDef->CreateTemporaryItemInstanceBP(count, 0));
            if (ItemInstance) {
                AddPlayerInventoryItem(playerController, ItemInstance);
            }
        }
    }

    static SDK::UFortWorldItem* GetPlayerInventoryItem(SDK::AFortPlayerControllerAthena* playerController, SDK::UFortItemDefinition* itemDef) {
        if (playerController && playerController->WorldInventory) {
            for (int32_t i = 0; i < playerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
                SDK::UFortWorldItem* ItemInstance = playerController->WorldInventory->Inventory.ItemInstances[i];
                if (!ItemInstance) {
                    continue;
                }
                if (ItemInstance->ItemEntry.ItemDefinition == itemDef) {
                    return ItemInstance;
                }
            }
        }
        return nullptr;
    }

    static void UpdatePlayerInventory(SDK::AFortPlayerControllerAthena* playerController) {
        if (playerController && playerController->WorldInventory) {
            playerController->HandleWorldInventoryLocalUpdate();
            playerController->WorldInventory->HandleInventoryLocalUpdate();
            playerController->WorldInventory->Inventory.MarkArrayDirty();
        }
    }

    static void AddPlayerQuickBarItem(SDK::AFortPlayerControllerAthena* playerController, SDK::EFortQuickBars quickBar, int32_t slot, SDK::UFortWorldItem* item) {
        if (playerController && playerController->QuickBars && item) {
            AddPlayerInventoryItem(playerController, item);
            playerController->QuickBars->ServerAddItemInternal(item->GetItemGuid(), quickBar, slot);
        }
    }

    static void AddPlayerQuickBarItemDef(SDK::AFortPlayerControllerAthena* playerController, SDK::EFortQuickBars quickBar, int32_t slot, SDK::UFortItemDefinition* itemDef, int32_t count = 1) {
        if (itemDef) {
            SDK::UFortWorldItem* ItemInstance = static_cast<SDK::UFortWorldItem*>(itemDef->CreateTemporaryItemInstanceBP(count, 0));
            if (ItemInstance) {
                AddPlayerQuickBarItem(playerController, quickBar, slot, ItemInstance);
            }
        }
    }

    // THIS IS SO GROSS.
    static SDK::UFortEditToolItemDefinition* GetEditToolItemDef() {
        static SDK::UFortEditToolItemDefinition* EditToolItemDef = iris::sdk_util::LoadObject<SDK::UFortEditToolItemDefinition>(L"/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
        return EditToolItemDef;
    }

    static void GivePlayerDefaultItems(SDK::AFortPlayerControllerAthena* playerController) {
        if (playerController) {
            AddPlayerInventoryItemDef(playerController, GetEditToolItemDef());

            static SDK::UFortBuildingItemDefinition* WallItemDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
            static SDK::UFortBuildingItemDefinition* FloorItemDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
            static SDK::UFortBuildingItemDefinition* StairItemDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
            static SDK::UFortBuildingItemDefinition* RoofItemDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

            AddPlayerQuickBarItemDef(playerController, SDK::EFortQuickBars::Secondary, 0, WallItemDef);
            AddPlayerQuickBarItemDef(playerController, SDK::EFortQuickBars::Secondary, 1, FloorItemDef);
            AddPlayerQuickBarItemDef(playerController, SDK::EFortQuickBars::Secondary, 2, StairItemDef);
            AddPlayerQuickBarItemDef(playerController, SDK::EFortQuickBars::Secondary, 3, RoofItemDef);

            static SDK::UFortWeaponMeleeItemDefinition* PickaxeItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponMeleeItemDefinition>(L"/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

            AddPlayerQuickBarItemDef(playerController, SDK::EFortQuickBars::Primary, 0, PickaxeItemDef);

            UpdatePlayerInventory(playerController);
        }
    }

    static SDK::AFortPlayerPawnAthena* SpawnPlayer(SDK::AFortPlayerControllerAthena* playerController, SDK::FVector location, SDK::FRotator rotation, bool bCanBeDamaged = true) {
        static SDK::UBlueprintGeneratedClass* PlayerPawnAthenaClass = sdk_util::LoadObject<SDK::UBlueprintGeneratedClass>(L"/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

        SDK::AFortPlayerPawnAthena* PlayerPawnAthena = iris::sdk_util::SpawnActor<SDK::AFortPlayerPawnAthena>(PlayerPawnAthenaClass, location, rotation);
        if (playerController && playerController->PlayerState && PlayerPawnAthena) {
            PlayerPawnAthena->bCanBeDamaged = bCanBeDamaged;
            PlayerPawnAthena->SetOwner(playerController);

            playerController->Possess(PlayerPawnAthena);

            // FIXME(kaitlyn~): Hardcoded parts.
            static SDK::UCustomCharacterPart* CustomHeadPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
            static SDK::UCustomCharacterPart* CustomBodyPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
            static SDK::UCustomCharacterPart* CustomBackpackPart = sdk_util::LoadObject<SDK::UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Backpacks/NoBackpack.NoBackpack");

            // TODO(kaitlyn~): Switch to CharacterParts.
            PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Head, CustomHeadPart);
            PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Body, CustomBodyPart);
            PlayerPawnAthena->ServerChoosePart(SDK::EFortCustomPartType::Backpack, CustomBackpackPart);

            static_cast<SDK::AFortPlayerStateAthena*>(playerController->PlayerState)->OnRep_CharacterParts();

            GrantPlayerDefaultAbilities(PlayerPawnAthena);
        }

        return PlayerPawnAthena;
    }

    static void StartMatch(SDK::AFortGameStateAthena* gameState) {
        // Ignore starting if match is already in warmup.
        if (gameState && gameState->GamePhase < SDK::EAthenaGamePhase::Warmup) {
            static SDK::UFortPlaylistAthena* PlaylistAthena = sdk_util::LoadObject<SDK::UFortPlaylistAthena>(L"/Game/Athena/Playlists/Playground/Playlist_Playground.Playlist_Playground");

            LootTierData = PlaylistAthena->LootTierData.Get();
            if (!LootTierData) {
                LootTierData = sdk_util::LoadObject<SDK::UDataTable>(L"/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
            }

            LootPackages = PlaylistAthena->LootPackages.Get();
            if (!LootPackages) {
                LootPackages = sdk_util::LoadObject<SDK::UDataTable>(L"/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
            }

            printf("LootTierData = %s, LootPackages = %s\n", LootTierData->GetFullName().c_str(), LootPackages->GetFullName().c_str());

            gameState->CurrentPlaylistData = PlaylistAthena;
            gameState->OnRep_CurrentPlaylistData();

            SDK::EAthenaGamePhase OldGamePhase = gameState->GamePhase;
            gameState->GamePhase = SDK::EAthenaGamePhase::Warmup;
            gameState->OnRep_GamePhase(OldGamePhase);
        }
    }

    static SDK::UFortResourceItemDefinition* GetResourceItemDef(SDK::EFortResourceType type) {
        static SDK::UFortResourceItemDefinition* WoodItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
        static SDK::UFortResourceItemDefinition* StoneItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
        static SDK::UFortResourceItemDefinition* MetalItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

        switch (type) {
        case SDK::EFortResourceType::Wood:
            return WoodItemDef;
        case SDK::EFortResourceType::Stone:
            return StoneItemDef;
        case SDK::EFortResourceType::Metal:
            return MetalItemDef;
        }

        return nullptr;
    }
};

}
