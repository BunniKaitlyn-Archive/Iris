#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x273 (0x2733 - 0x24C0)
// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x24C0(0x8)(Transient, DuplicateTransient)
	float                                        Timeline_0_BlendWeight_A4943458400C3662DB243099F9EAC7E8; // 0x24C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_A4943458400C3662DB243099F9EAC7E8; // 0x24CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AC[0x3];                                     
	class UTimelineComponent*                    Timeline_0;                                        // 0x24D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Storm_Audio_Fader_Volume_8F54E8DB44CB132992E4EBA6F5FAF86B; // 0x24D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Storm_Audio_Fader__Direction_8F54E8DB44CB132992E4EBA6F5FAF86B; // 0x24DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AD[0x3];                                     
	class UTimelineComponent*                    Storm_Audio_Fader;                                 // 0x24E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashTL_LERP_C86EEA494C7B742DC045759B630397B7; // 0x24E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LightningFlashTL__Direction_C86EEA494C7B742DC045759B630397B7; // 0x24EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AE[0x3];                                     
	class UTimelineComponent*                    LightningFlashTL;                                  // 0x24F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TargetHead;                                        // 0x24F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TargetBody;                                        // 0x2500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            PawnHeadMaterials_0;                               // 0x2508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnBodyMaterials_0;                               // 0x2518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_FlakVest;                                       // 0x2528(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                    Event_Data;                                        // 0x2548(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventSpawnEffect;                                  // 0x25F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMale;                                            // 0x25F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AF[0x7];                                     
	class AFortWeapon*                           MenuGoingCommandowWeapon;                          // 0x2600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SafeZonePassThroughSound;                          // 0x2608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBeenOutsideSafeZone;                           // 0x2610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B0[0x3];                                     
	struct FLinearColor                          ThreatColor;                                       // 0x2614(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B1[0x4];                                     
	class USoundBase*                            PlayerKilledSound;                                 // 0x2628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Contrail_A;                                        // 0x2630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContrailReady;                                    // 0x2638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B2[0x7];                                     
	class UParticleSystem*                       ActiveContrail;                                    // 0x2640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLiveContrail;                                     // 0x2648(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B3[0x7];                                     
	class UParticleSystemComponent*              Vapor_Effect;                                      // 0x2650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              WindDebrisParticles;                               // 0x2658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FallingRainParticles;                              // 0x2660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LightningSpawnLocation;                            // 0x2668(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensityMin;                             // 0x2674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensityMax;                             // 0x2678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B4[0x4];                                     
	class AActor*                                SafeZoneActor;                                     // 0x2680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensity;                                // 0x2688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B5[0x4];                                     
	class UPointLightComponent*                  RandomLightningLight;                              // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningTimelinePlaySpeedMin;                     // 0x2698(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningTimelinePlaySpeedMax;                     // 0x269C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashDiameter;                            // 0x26A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashHeight;                              // 0x26A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashRepeatDelayMin;                      // 0x26A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashRepeatDelayMax;                      // 0x26AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*          RainCameraLensParticles;                           // 0x26B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        _ChanceOfLightningMesh;                            // 0x26B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowInvulnerableVisuals;                           // 0x26BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B6[0x3];                                     
	class UAudioComponent*                       StormAudioLoop_Inst;                               // 0x26C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StormAudioVolume;                                  // 0x26C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveAudioGroundVolumeScale;                     // 0x26CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveMovementVolumeScale;                        // 0x26D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B7[0x4];                                     
	class UAudioComponent*                       FallingAudioLoop_Inst;                             // 0x26D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayingFallingSound;                            // 0x26E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B8[0x3];                                     
	float                                        PlayerAttributes_Speed_Walk;                       // 0x26E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayerAttributes_Speed_Run;                        // 0x26E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayerAttributes_Speed_Sprint;                     // 0x26EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrailsLOD;                                      // 0x26F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B9[0x4];                                     
	class UPostProcessComponent*                 MobilePostProcess;                                 // 0x26F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOutsideSafeZoneCached;                          // 0x2700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BA[0x7];                                     
	TArray<class UMaterialInstanceDynamic*>      ResOutMaterials;                                   // 0x2708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ADuplicateResOutMesh_C*                RezInFXActor;                                      // 0x2718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bQueueRezIn;                                       // 0x2720(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BB[0x7];                                     
	class ADuplicateResOutMesh_C*                RezOutFXActor;                                     // 0x2728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bQueueRezOut;                                      // 0x2730(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bWasEverInWarmUp;                                  // 0x2731(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStormAudioCleanedUp;                              // 0x2732(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Athena_C");
		return Clss;
	}

	void QueueTeleportOut();
	void QueueTeleportIn();
	void OnOpenParachute(bool* bConsumeEvent, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsBackpackEquipped_ReturnValue);
	void OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InWarmUp(bool* InWarmUp, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void StopLoopingAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void EnableWaterAudio(bool Is_Entering_Water, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, bool Temp_bool_Variable1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue1, class USoundBase* K2Node_Select1_Default);
	void HandleWaterFX(bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void ApplyParachuteMovementVolumeScale(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetParachuteMovementVolumeScale_Scale, float CallFunc_FInterpTo_ReturnValue);
	void GetParachuteMovementVolumeScale(float* Scale, bool CallFunc_IsParachuteOpen_ReturnValue, float CallFunc_K2_GetModifiedMaxSpeed_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_IsActivelySkydiving_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void GetLocationInCircle_XY(struct FVector* LocationLocalSpace, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_VLerp_ReturnValue);
	void InitAthenaFoleyAudio(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, bool Temp_bool_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, bool Temp_bool_Variable2, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, bool Temp_bool_Variable3, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, bool Temp_bool_Variable4, class USoundBase* Temp_object_Variable8, class USoundBase* Temp_object_Variable9, bool Temp_bool_Variable5, class USoundBase* Temp_object_Variable10, class USoundBase* Temp_object_Variable11, bool Temp_bool_Variable6, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable13, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select1_Default, class USoundBase* K2Node_Select2_Default, class USoundBase* K2Node_Select3_Default, class USoundBase* K2Node_Select4_Default, class USoundBase* K2Node_Select5_Default, class USoundBase* K2Node_Select6_Default);
	void UserConstructionScript(const struct FFortPlayerPawnStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void LightningFlashTL__FinishedFunc();
	void LightningFlashTL__UpdateFunc();
	void Storm_Audio_Fader__FinishedFunc();
	void Storm_Audio_Fader__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void GameplayCue_Athena_OutsideSafeZone(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SafeZoneStatusChanged();
	void GameplayCue_Athena_Equipping(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ContrailCheck();
	void GameplayCue_Athena_Player_BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void AddStormFX();
	void RemoveStormFX();
	void StartRandomLightningFlashes();
	void RandomLightningFlashesRepeat();
	void ZapFX(int32 ZapCount);
	void GameplayCue_Abilities_Activation_DBNOResurrect(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UpdateInvulnerableVisuals();
	void Add_Storm_Audio();
	void Remove_Storm_Audio();
	void Play_Lightning_Flash_Audio(const struct FVector& Location);
	void Start_Storm_Audio_Fader();
	void Update_Parachute_and_Falling_Audio();
	void OnEnteredWaterVolume();
	void OnExitedWaterVolume();
	void NotifyTeammateSkydivedFromBus();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnSignificantTick(float Significance);
	void OnLeftReplayRelevancy();
	void OnEnteredReplayRelevancy();
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void PlayResOut();
	void OnResInDuringWarmup();
	void ExecuteUbergraph_PlayerPawn_Athena(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_Variable1, bool CallFunc_IsValid_ReturnValue2, float Temp_float_Variable, const struct FTransform& Temp_struct_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UAnimMontage* Temp_object_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, bool K2Node_SwitchEnum1_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AController* K2Node_Event_NewController, class UAnimMontage* Temp_object_Variable2, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Variable2, bool CallFunc_IsDedicatedServer_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool CallFunc_IsValid_ReturnValue5, bool K2Node_SwitchEnum2_CmpSuccess, bool Temp_bool_Variable3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsParachuteForcedOpen_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue1, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue3, class UAnimMontage* K2Node_Select_Default, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, const struct FLinearColor& Temp_struct_Variable3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select1_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FLinearColor& Temp_struct_Variable4, bool Temp_bool_Variable4, int32 K2Node_CustomEvent_ZapCount, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_AddCameraLensEffect_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationInCircle_XY_LocationLocalSpace, bool CallFunc_IsValid_ReturnValue6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_RandomFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_SpawnPooledFXActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class ALightningLsystem_C* K2Node_DynamicCast_AsLightning_Lsystem, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue7, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_Greater_FloatFloat_ReturnValue1, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_IsValid_ReturnValue8, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TArray<class AActor*>& Temp_object_Variable3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, float CallFunc_VSize_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_MapRangeClamped_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue1, bool CallFunc_IsValid_ReturnValue9, class UAnimMontage* K2Node_Select4_Default, float CallFunc_PlayLocalAnimMontage_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue4, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue3, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsSkydiving_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& Temp_struct_Variable5, bool CallFunc_IsValid_ReturnValue13, class UPointLightComponent* CallFunc_AddComponent_ReturnValue1, bool CallFunc_IsActive_ReturnValue, class UParticleSystem* CallFunc_GetContrailParticleSystem_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue5, bool CallFunc_IsLocallyControlled_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_InWarmup_InWarmUp, bool CallFunc_InWarmup_InWarmUp1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_InWarmup_InWarmUp2, float K2Node_Event_Significance, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsValid_ReturnValue15, bool CallFunc_IsMobilePlatform_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue3, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue4, const struct FTransform& CallFunc_GetTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue5, bool CallFunc_IsValid_ReturnValue16, bool Temp_bool_IsClosed_Variable3, float CallFunc_TimeFromJumpApex_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, float CallFunc_FInterpTo_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
