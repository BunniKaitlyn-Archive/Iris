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
        if (thisptr->PlayerController && thisptr->PlayerController->PlayerState) {
            SDK::AFortPlayerControllerAthena* PlayerControllerAthena = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr->PlayerController);
            SDK::AFortPlayerStateAthena* PlayerStateAthena = static_cast<SDK::AFortPlayerStateAthena*>(thisptr->PlayerController->PlayerState);

            printf("Player \"%s\" joined on team index %i.\n", PlayerStateAthena->PlayerNamePrivate.ToString().c_str(), PlayerStateAthena->TeamIndex);

            //SDK::EFortTeam OldVal = PlayerStateAthena->TeamIndex;
            //PlayerStateAthena->TeamIndex = SDK::EFortTeam::HumanPvP_Team1;
            //PlayerStateAthena->OnRep_TeamIndex(OldVal);

            PlayerControllerAthena->QuickBars = iris::sdk_util::SpawnActor<SDK::AFortQuickBars>(SDK::FVector{0.0f, 0.0f, 0.0f}, SDK::FRotator{0.0f, 0.0f, 0.0f});
            if (PlayerControllerAthena->QuickBars) {
                PlayerControllerAthena->QuickBars->SetOwner(PlayerControllerAthena);
                PlayerControllerAthena->OnRep_QuickBar();
            }

            iris::athena_util::SpawnPlayer(PlayerControllerAthena, PlayerControllerAthena->K2_GetActorLocation(), PlayerControllerAthena->K2_GetActorRotation(), false);
            iris::athena_util::GivePlayerDefaultItems(PlayerControllerAthena);

            // TEMP:
            static SDK::UFortResourceItemDefinition* WoodItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
            static SDK::UFortResourceItemDefinition* StoneItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
            static SDK::UFortResourceItemDefinition* MetalItemDef = iris::sdk_util::LoadObject<SDK::UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

            iris::athena_util::AddPlayerInventoryItemDef(PlayerControllerAthena, WoodItemDef, 1000);
            iris::athena_util::AddPlayerInventoryItemDef(PlayerControllerAthena, StoneItemDef, 1000);
            iris::athena_util::AddPlayerInventoryItemDef(PlayerControllerAthena, MetalItemDef, 1000);

            PlayerControllerAthena->bHasClientFinishedLoading = true;
            PlayerControllerAthena->bHasServerFinishedLoading = true;
            PlayerControllerAthena->OnRep_bHasServerFinishedLoading();

            PlayerStateAthena->bHasFinishedLoading = true;
            PlayerStateAthena->bHasStartedPlaying = true;
            PlayerStateAthena->bIsReadyToContinue = true;
            PlayerStateAthena->OnRep_bHasStartedPlaying();
        }
    }

    SetClientLoginState(thisptr, NewState);
}

void iris::hooks::Login() {
    PBYTE pSetClientLoginStateAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UNetConnection::SetClientLoginState);

    MH_CreateHook(pSetClientLoginStateAddress, reinterpret_cast<void*>(SetClientLoginStateHook), reinterpret_cast<PVOID*>(&SetClientLoginState));
    MH_EnableHook(pSetClientLoginStateAddress);
}
