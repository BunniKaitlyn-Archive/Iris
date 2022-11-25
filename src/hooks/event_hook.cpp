#include "app.h"
#include "util.h"
#include "sdk_util.h"
#include "ability_util.h"
#include "athena_util.h"
#include <MinHook.h>

SDK::UDataTable* iris::athena_util::LootTierData = nullptr;
SDK::UDataTable* iris::athena_util::LootPackages = nullptr;

void* (*ProcessEvent)(SDK::UObject*, SDK::UFunction*, void*) = nullptr;
void* ProcessEventHook(SDK::UObject* thisptr, SDK::UFunction* Function, void* Parms) {
    if (thisptr && Function) {
        std::string FunctionName = Function->GetName();

        if (FunctionName == "ReadyToStartMatch" && thisptr->IsA(SDK::AFortGameModeAthena::StaticClass())) {
            SDK::AFortGameStateAthena* GameStateAthena = static_cast<SDK::AFortGameStateAthena*>(static_cast<SDK::AGameMode*>(thisptr)->GameState);
            if (GameStateAthena) {
                iris::athena_util::StartMatch(GameStateAthena);
            }
        }
        
        // TODO(kaitlyn~): Figure out how to handle multiple aircrafts.
        else if (FunctionName == "ServerAttemptAircraftJump") {
            iris::athena_util::SpawnPlayer(static_cast<SDK::AFortPlayerControllerAthena*>(thisptr), static_cast<SDK::AFortGameStateAthena*>((*g_App->GWorld)->GameState)->Aircrafts[0]->K2_GetActorLocation(), SDK::FRotator{0.0f, 0.0f, 0.0f});
            return nullptr;
        }

        else if (FunctionName == "ServerUpdatePhysicsParams") {
            auto Params = static_cast<SDK::Params::AFortAthenaVehicle_ServerUpdatePhysicsParams_Params*>(Parms);
            SDK::AFortAthenaVehicle* AthenaVehicle = static_cast<SDK::AFortAthenaVehicle*>(thisptr);
            AthenaVehicle->K2_SetActorLocation(Params->InState.Translation, false, nullptr, true);
            SDK::UPrimitiveComponent* RootComponent = static_cast<SDK::UPrimitiveComponent*>(AthenaVehicle->K2_GetRootComponent());
            if (RootComponent) {
                RootComponent->SetPhysicsLinearVelocity(Params->InState.LinearVelocity, false, SDK::FName());
                RootComponent->SetPhysicsAngularVelocity(Params->InState.AngularVelocity, false, SDK::FName());
            }
            return nullptr;
        }

        else if (FunctionName == "ServerExecuteInventoryItem") {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerExecuteInventoryItem_Params*>(Parms);
            SDK::AFortPlayerController* PlayerController = static_cast<SDK::AFortPlayerController*>(thisptr);
            if (PlayerController->WorldInventory) {
                auto ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;
                for (int32_t i = 0; i < ItemInstances.Num(); i++) {
                    SDK::UFortWorldItem* ItemInstance = ItemInstances[i];
                    if (ItemInstance && iris::sdk_util::CompareGuid(ItemInstance->GetItemGuid(), Params->ItemGuid)) {
                        SDK::UFortItemDefinition* ItemDef = ItemInstance->GetItemDefinitionBP();

                        if (PlayerController->Pawn && ItemDef->IsA(SDK::UFortWeaponItemDefinition::StaticClass())) {
                            static_cast<SDK::AFortPlayerPawn*>(PlayerController->Pawn)->EquipWeaponDefinition(static_cast<SDK::UFortWeaponItemDefinition*>(ItemDef), Params->ItemGuid);
                        }
                    }
                }
            }
            return nullptr;
        }

        // TODO: Fix double build!!
        else if (FunctionName == "ServerCreateBuildingActor" && thisptr->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerCreateBuildingActor_Params*>(Parms);
            SDK::AFortPlayerControllerAthena* PlayerController = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr);
            SDK::AFortPlayerStateAthena* PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(PlayerController->PlayerState);
            if (PlayerState) {
                SDK::ABuildingSMActor* BuildingActor = iris::sdk_util::SpawnActor<SDK::ABuildingSMActor>(Params->BuildingClassData.BuildingClass.Get(), Params->BuildLoc, Params->BuildRot);
                if (BuildingActor) {
                    BuildingActor->Team = PlayerState->TeamIndex;
                    BuildingActor->bPlayerPlaced = true;
                    BuildingActor->ForceNetUpdate();
                    BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
                }
            }
            return nullptr;
        }

        // can't make this generic to all classes inheriting AFortPlayerController until I change how athena_util works.
        else if (FunctionName == "ServerBeginEditingBuildingActor" && thisptr->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerBeginEditingBuildingActor_Params*>(Parms);
            SDK::AFortPlayerControllerAthena* PlayerController = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr);
            SDK::AFortPlayerStateAthena* PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(PlayerController->PlayerState);
            SDK::AFortPlayerPawnAthena* PlayerPawn = static_cast<SDK::AFortPlayerPawnAthena*>(PlayerController->Pawn);
            if (Params->BuildingActorToEdit && PlayerState && PlayerPawn) {
                SDK::UFortWorldItem* EditToolInstance = iris::athena_util::GetPlayerInventoryItem(PlayerController, iris::athena_util::GetEditToolItemDef());
                if (EditToolInstance) {
                    SDK::AFortWeap_EditingTool* EditTool = static_cast<SDK::AFortWeap_EditingTool*>(PlayerPawn->EquipWeaponDefinition(static_cast<SDK::UFortEditToolItemDefinition*>(EditToolInstance->ItemEntry.ItemDefinition), EditToolInstance->ItemEntry.ItemGuid));
                    if (EditTool) {
                        Params->BuildingActorToEdit->EditingPlayer = PlayerState;
                        Params->BuildingActorToEdit->OnRep_EditingPlayer();
                        EditTool->EditActor = Params->BuildingActorToEdit;
                        EditTool->OnRep_EditActor();
                    }
                }
            }
            return nullptr;
        }

        else if (FunctionName == "ServerEditBuildingActor") {
            static SDK::UObject* (*ReplaceBuildingActor_Internal)(SDK::ABuildingSMActor*, uint32_t, SDK::UClass*, uint32_t, int32_t, bool, SDK::AFortPlayerController*) = reinterpret_cast<decltype(ReplaceBuildingActor_Internal)>(iris::util::GetBaseAddress() + iris::offsets::ABuildingSMActor::ReplaceBuildingActor);

            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerEditBuildingActor_Params*>(Parms);
            SDK::AFortPlayerController* PlayerController = static_cast<SDK::AFortPlayerController*>(thisptr);
            if (Params->BuildingActorToEdit && Params->NewBuildingClass.Get()) {
                ReplaceBuildingActor_Internal(Params->BuildingActorToEdit, 1, Params->NewBuildingClass.Get(), 0, Params->RotationIterations, Params->bMirrored, PlayerController);
            }
            return nullptr;
        }

        else if (FunctionName == "ServerEndEditingBuildingActor" && thisptr->IsA(SDK::AFortPlayerControllerAthena::StaticClass())) {
            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerEndEditingBuildingActor_Params*>(Parms);
            SDK::AFortPlayerControllerAthena* PlayerController = static_cast<SDK::AFortPlayerControllerAthena*>(thisptr);
            SDK::AFortPlayerStateAthena* PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(PlayerController->PlayerState);
            SDK::AFortPlayerPawnAthena* PlayerPawn = static_cast<SDK::AFortPlayerPawnAthena*>(PlayerController->Pawn);
            if (Params->BuildingActorToStopEditing && PlayerPawn && PlayerPawn->CurrentWeapon && PlayerPawn->CurrentWeapon->IsA(SDK::AFortWeap_EditingTool::StaticClass())) {
                SDK::AFortWeap_EditingTool* EditTool = static_cast<SDK::AFortWeap_EditingTool*>(PlayerPawn->CurrentWeapon);
                EditTool->bEditConfirmed = true;
                EditTool->EditActor = nullptr;
                EditTool->OnRep_EditActor();
                Params->BuildingActorToStopEditing->EditingPlayer = PlayerState;
                Params->BuildingActorToStopEditing->OnRep_EditingPlayer();
            }
            return nullptr;
        }
        
        else if (FunctionName == "ServerAcknowledgePossession") {
            static_cast<SDK::APlayerController*>(thisptr)->AcknowledgedPawn = *static_cast<SDK::APawn**>(Parms);
        }

        else if (FunctionName == "ServerTryActivateAbility") {
            auto Params = static_cast<SDK::Params::UAbilitySystemComponent_ServerTryActivateAbility_Params*>(Parms);
            iris::ability_util::InternalTryActivateAbility(static_cast<SDK::UAbilitySystemComponent*>(thisptr), Params->AbilityToActivate, Params->PredictionKey);
            return nullptr;
        }

        else if (FunctionName == "ServerAbilityRPCBatch") {
            auto Params = static_cast<SDK::Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params*>(Parms);
            iris::ability_util::InternalTryActivateAbility(static_cast<SDK::UAbilitySystemComponent*>(thisptr), Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.PredictionKey);
        }
        
        // TODO
        else if (FunctionName == "ServerPlayEmoteItem") {
            static SDK::UBlueprintGeneratedClass* EmoteAbilityClass = iris::sdk_util::LoadObject<SDK::UBlueprintGeneratedClass>(L"/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");

            auto Params = static_cast<SDK::Params::AFortPlayerController_ServerPlayEmoteItem_Params*>(Parms);
            SDK::AFortPlayerController* PlayerController = static_cast<SDK::AFortPlayerController*>(thisptr);
            SDK::AFortPlayerPawn* PlayerPawn = static_cast<SDK::AFortPlayerPawn*>(PlayerController->Pawn);
            if (PlayerPawn && PlayerPawn->AbilitySystemComponent) {
                SDK::FGameplayAbilitySpecHandle EmoteAbilityHandle = iris::ability_util::GrantAbility(PlayerPawn->AbilitySystemComponent, EmoteAbilityClass);
                iris::ability_util::TryActivateAbility(PlayerPawn->AbilitySystemComponent, EmoteAbilityHandle, true);
            }
            return nullptr;
        }

        else if (FunctionName == "OnOpenParachute") {
            SDK::AFortPlayerPawn* PlayerPawn = static_cast<SDK::AFortPlayerPawn*>(thisptr);
            PlayerPawn->bIsSkydiving = true;
            PlayerPawn->OnRep_IsSkydiving(false);
            PlayerPawn->bIsParachuteOpen = true;
            PlayerPawn->OnRep_IsParachuteOpen(false);
        }
    }

    return ProcessEvent(thisptr, Function, Parms);
}

void iris::hooks::Event() {
    PBYTE pProcessEventAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + Offsets::ProcessEvent);

    MH_CreateHook(pProcessEventAddress, reinterpret_cast<void*>(ProcessEventHook), reinterpret_cast<PVOID*>(&ProcessEvent));
    MH_EnableHook(pProcessEventAddress);
}
