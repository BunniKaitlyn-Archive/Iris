#include "app.h"
#include "util.h"
#include "sdk_util.h"
#include "ability_util.h"
#include "athena_util.h"
#include <MinHook.h>

void* (*ProcessEvent)(SDK::UObject*, SDK::UFunction*, void*) = nullptr;
void* ProcessEventHook(SDK::UObject* thisptr, SDK::UFunction* Function, void* Parms) {
    if (thisptr && Function) {
        std::string ObjectName = thisptr->GetName();
        std::string FunctionName = Function->GetName();

        if (FunctionName == "ReadyToStartMatch" && thisptr->IsA(SDK::AFortGameModeAthena::StaticClass())) {
            iris::athena_util::StartMatch(static_cast<SDK::AFortGameStateAthena*>((*g_App->GWorld)->GameState));
        }

        if (FunctionName == "ServerAttemptAircraftJump") {
            iris::athena_util::SpawnPlayer(static_cast<SDK::AFortPlayerControllerAthena*>(thisptr), static_cast<SDK::AFortGameStateAthena*>((*g_App->GWorld)->GameState)->Aircrafts[0]->K2_GetActorLocation(), SDK::FRotator{0.0f, 0.0f, 0.0f});
            return nullptr;
        }

        if (FunctionName == "ServerExecuteInventoryItem") {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerExecuteInventoryItem_Params*>(Parms);
            SDK::AFortPlayerController* PlayerController = static_cast<SDK::AFortPlayerController*>(thisptr);
            if (PlayerController->WorldInventory) {
                auto ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;
                for (int32_t i = 0; i < ItemInstances.Num(); i++) {
                    SDK::UFortWorldItem* ItemInstance = ItemInstances[i];
                    if (iris::sdk_util::CompareGuid(ItemInstance->GetItemGuid(), Params->ItemGuid)) {
                        SDK::UFortItemDefinition* ItemDef = ItemInstance->GetItemDefinitionBP();

                        if (PlayerController->Pawn && ItemDef->IsA(SDK::UFortWeaponItemDefinition::StaticClass())) {
                            static_cast<SDK::AFortPlayerPawn*>(PlayerController->Pawn)->EquipWeaponDefinition(static_cast<SDK::UFortWeaponItemDefinition*>(ItemDef), Params->ItemGuid);
                        }
                    }
                }
            }

            return nullptr;
        }

        if (FunctionName == "ServerAcknowledgePossession") {
            static_cast<SDK::APlayerController*>(thisptr)->AcknowledgedPawn = *static_cast<SDK::APawn**>(Parms);
        }

        /*if (FunctionName == "ServerLoadingScreenDropped" && thisptr->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
            iris::athena_util::GrantPlayerDefaultAbilities(static_cast<SDK::AFortPlayerPawnAthena*>(static_cast<SDK::AFortPlayerControllerAthena*>(thisptr)->Pawn));
            return nullptr;
        }*/

        if (FunctionName == "ServerTryActivateAbility") {
            auto Params = static_cast<SDK::Params::UAbilitySystemComponent_ServerTryActivateAbility_Params*>(Parms);
            iris::ability_util::TryActivateAbility(static_cast<SDK::UAbilitySystemComponent*>(thisptr), Params->AbilityToActivate, Params->PredictionKey);
            return nullptr;
        }

        if (FunctionName == "ServerAbilityRPCBatch") {
            auto Params = static_cast<SDK::Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params*>(Parms);
            iris::ability_util::TryActivateAbility(static_cast<SDK::UAbilitySystemComponent*>(thisptr), Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.PredictionKey);
        }

        if (FunctionName == "ServerCreateBuildingActor" && thisptr->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerCreateBuildingActor_Params*>(Parms);
            SDK::AFortPlayerControllerAthena* PlayerController = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr);
            SDK::AFortPlayerStateAthena* PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(PlayerController->PlayerState);
            SDK::ABuildingActor* BuildingActor = iris::sdk_util::SpawnActor<SDK::ABuildingActor>(Params->BuildingClassData.BuildingClass.Get(), Params->BuildLoc, Params->BuildRot);
            if (BuildingActor) {
                BuildingActor->Team = PlayerState->TeamIndex;
                BuildingActor->bPlayerPlaced = true;
                BuildingActor->ForceNetUpdate();
                BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
            }
            return nullptr;
        }

        if (FunctionName == "OnOpenParachute") {
            SDK::AFortPlayerPawn* PlayerPawn = static_cast<SDK::AFortPlayerPawn*>(thisptr);
            PlayerPawn->bIsSkydiving = true;
            PlayerPawn->OnRep_IsSkydiving(false);
            PlayerPawn->bIsParachuteOpen = true;
            PlayerPawn->OnRep_IsParachuteOpen(false);
        }

        if (ObjectName.find("GA_Athena_RCRocket_C_") != std::string::npos && FunctionName.find("K2_ActivateAbility") != std::string::npos) {
            auto Ability = (SDK::UGameplayAbility*)thisptr;
            auto PlayerState = (SDK::AFortPlayerStateAthena*)Ability->GetOwningActorFromActorInfo();
            auto Pawn = (SDK::AFortPlayerPawnAthena*)PlayerState->GetCurrentPawn();
            auto PC = (SDK::AFortPlayerControllerAthena*)Pawn->GetController();
            static SDK::UBlueprintGeneratedClass* RCPawnClass = iris::sdk_util::LoadObject<SDK::UBlueprintGeneratedClass>(L"/Game/Athena/Items/Weapons/Abilities/RCRocket/B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C");
            SDK::AFortRemoteControlledPawnAthena* RCPawn = iris::sdk_util::SpawnActor<SDK::AFortRemoteControlledPawnAthena>(RCPawnClass, { 0.0f, 0.0f, 10000.0f }, {});

            if (RCPawn)
            {
                RCPawn->SetOwner(PC);
                PC->Possess(RCPawn);
                RCPawn->SetupRemoteControlPawn(PC, Pawn, SDK::EFortCustomMovement::RemoteControl_Flying, {});
            }
       }
    }

    return ProcessEvent(thisptr, Function, Parms);
}

// GUH THIS IS SO BAD
bool (*CanActivateAbility)(SDK::UGameplayAbility*, SDK::FGameplayAbilitySpecHandle, SDK::FGameplayAbilityActorInfo*, SDK::FGameplayTagContainer*, SDK::FGameplayTagContainer*, SDK::FGameplayTagContainer*) = nullptr;
bool CanActivateAbilityHook(SDK::UGameplayAbility* thisptr, SDK::FGameplayAbilitySpecHandle Handle, SDK::FGameplayAbilityActorInfo* ActorInfo, SDK::FGameplayTagContainer* SourceTags, SDK::FGameplayTagContainer* TargetTags, SDK::FGameplayTagContainer* OptionalRelevantTags) {
    return true;
}

void iris::hooks::Event() {
    PBYTE pProcessEventAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + Offsets::ProcessEvent);

    MH_CreateHook(pProcessEventAddress, reinterpret_cast<void*>(ProcessEventHook), reinterpret_cast<PVOID*>(&ProcessEvent));
    MH_EnableHook(pProcessEventAddress);

    PBYTE pCanActivateAbilityAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UGameplayAbility::CanActivateAbility);

    MH_CreateHook(pCanActivateAbilityAddress, reinterpret_cast<void*>(CanActivateAbilityHook), reinterpret_cast<PVOID*>(&CanActivateAbility));
    MH_EnableHook(pCanActivateAbilityAddress);
}
