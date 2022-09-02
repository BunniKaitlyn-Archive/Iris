#include "app.h"
#include "util.h"
#include "offsets.h"
#include "sdk_util.h"
#include "athena_util.h"
#include <MinHook.h>
#include <cinttypes>

namespace EClientLoginState {
    enum Type {
        Invalid = 0,
        LoggingIn = 1,
        Welcomed = 2,
        ReceivedJoin = 3,
        CleanedUp = 4
    };
};

void (*SetClientLoginState)(SDK::UNetConnection*, EClientLoginState::Type) = nullptr;
void SetClientLoginStateHook(SDK::UNetConnection* thisptr, EClientLoginState::Type NewState) {
    if (NewState == EClientLoginState::ReceivedJoin && thisptr->PlayerController->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
        SDK::AFortPlayerControllerAthena* PlayerControllerAthena = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr->PlayerController);
        SDK::AFortPlayerStateAthena* PlayerStateAthena = static_cast<SDK::AFortPlayerStateAthena*>(thisptr->PlayerController->PlayerState);

        PlayerStateAthena->TeamIndex = SDK::EFortTeam::HumanPvP_Team1;

        PlayerControllerAthena->QuickBars = iris::sdk_util::SpawnActor<SDK::AFortQuickBars>(SDK::AFortQuickBars::StaticClass(), SDK::FVector{0.0f, 0.0f, 0.0f}, SDK::FRotator{0.0f, 0.0f, 0.0f});
        PlayerControllerAthena->QuickBars->SetOwner(PlayerControllerAthena);
        PlayerControllerAthena->OnRep_QuickBar();

        iris::athena_util::SpawnPlayer(PlayerControllerAthena, PlayerControllerAthena->K2_GetActorLocation(), PlayerControllerAthena->K2_GetActorRotation(), false);

        static SDK::UFortResourceItemDefinition* WoodItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
        static SDK::UFortResourceItemDefinition* StoneItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
        static SDK::UFortResourceItemDefinition* MetalItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

        iris::athena_util::AddPlayerInventoryItem(PlayerControllerAthena, static_cast<SDK::UFortWorldItem*>(WoodItemDef->CreateTemporaryItemInstanceBP(1000, 0)));
        iris::athena_util::AddPlayerInventoryItem(PlayerControllerAthena, static_cast<SDK::UFortWorldItem*>(StoneItemDef->CreateTemporaryItemInstanceBP(1000, 0)));
        iris::athena_util::AddPlayerInventoryItem(PlayerControllerAthena, static_cast<SDK::UFortWorldItem*>(MetalItemDef->CreateTemporaryItemInstanceBP(1000, 0)));

        static SDK::UFortEditToolItemDefinition* EditToolItemDef = iris::sdk_util::LoadObject<SDK::UFortEditToolItemDefinition>(L"/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
        static SDK::UFortBuildingItemDefinition* WallBuildDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
        static SDK::UFortBuildingItemDefinition* FloorBuildDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
        static SDK::UFortBuildingItemDefinition* StairBuildDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
        static SDK::UFortBuildingItemDefinition* RoofBuildDef = iris::sdk_util::LoadObject<SDK::UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

        iris::athena_util::AddPlayerInventoryItem(PlayerControllerAthena, static_cast<SDK::UFortWorldItem*>(EditToolItemDef->CreateTemporaryItemInstanceBP(1, 0)));

        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, WallBuildDef, SDK::EFortQuickBars::Secondary, 0);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, FloorBuildDef, SDK::EFortQuickBars::Secondary, 1);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, StairBuildDef, SDK::EFortQuickBars::Secondary, 2);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, RoofBuildDef, SDK::EFortQuickBars::Secondary, 2);

        static SDK::UFortWeaponMeleeItemDefinition* PickaxeItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponMeleeItemDefinition>(L"/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
        static SDK::UFortWeaponRangedItemDefinition* SmgItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponRangedItemDefinition>(L"/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_SR_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_SR_Ore_T03");
        static SDK::UFortWeaponRangedItemDefinition* RcRocketItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponRangedItemDefinition>(L"/Game/Athena/Items/Weapons/WID_RC_Rocket_Athena_SR_T03.WID_RC_Rocket_Athena_SR_T03");
        static SDK::UFortWeaponRangedItemDefinition* SlugItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponRangedItemDefinition>(L"/Game/Athena/Items/Weapons/WID_Shotgun_SlugFire_Athena_SR.WID_Shotgun_SlugFire_Athena_SR");
        static SDK::UFortWeaponRangedItemDefinition* TowerGrenadeItemDef = iris::sdk_util::LoadObject<SDK::UFortWeaponRangedItemDefinition>(L"/Game/Athena/Items/Consumables/TowerGrenade/Athena_TowerGrenade.Athena_TowerGrenade");

        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, PickaxeItemDef, SDK::EFortQuickBars::Primary, 0);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, SmgItemDef, SDK::EFortQuickBars::Primary, 1, 1000);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, SlugItemDef, SDK::EFortQuickBars::Primary, 2, 1000);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, SlugItemDef, SDK::EFortQuickBars::Primary, 3, 1000);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, RcRocketItemDef, SDK::EFortQuickBars::Primary, 4, 1000);
        iris::athena_util::GivePlayerWeapon(PlayerControllerAthena, TowerGrenadeItemDef, SDK::EFortQuickBars::Primary, 5, 1000, 1000);

        iris::athena_util::UpdatePlayerInventory(PlayerControllerAthena);

        PlayerControllerAthena->bHasClientFinishedLoading = true;
        PlayerControllerAthena->bHasServerFinishedLoading = true;
        PlayerControllerAthena->OnRep_bHasServerFinishedLoading();

        PlayerStateAthena->bHasFinishedLoading = true;
        PlayerStateAthena->bHasStartedPlaying = true;
        PlayerStateAthena->bIsReadyToContinue = true;
        PlayerStateAthena->OnRep_bHasStartedPlaying();
    }

    SetClientLoginState(thisptr, NewState);
}

void iris::hooks::Login() {
    PBYTE pSetClientLoginStateAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UNetConnection::SetClientLoginState);

    MH_CreateHook(pSetClientLoginStateAddress, reinterpret_cast<void*>(SetClientLoginStateHook), reinterpret_cast<PVOID*>(&SetClientLoginState));
    MH_EnableHook(pSetClientLoginStateAddress);
}
