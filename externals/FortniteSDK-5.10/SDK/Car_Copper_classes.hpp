#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D4 (0xDFC - 0xC28)
// BlueprintGeneratedClass Car_Copper.Car_Copper_C
class ACar_Copper_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC28(0x8)(Transient, DuplicateTransient)
	float                                        Timeline_2_SirenLightMultiplier_0FF34BB7440D69B151AEB98B69DAACB9; // 0xC30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_0FF34BB7440D69B151AEB98B69DAACB9; // 0xC34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3513[0x3];                                     
	class UTimelineComponent*                    Timeline_2;                                        // 0xC38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BounceCar_Vertical_Bounce_Component_05733C554001D77C015F47B548F45A12; // 0xC40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BounceCar__Direction_05733C554001D77C015F47B548F45A12; // 0xC44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3514[0x3];                                     
	class UTimelineComponent*                    BounceCar;                                         // 0xC48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_AlarmLightMultiplier_0249B75D481A6B889F74E6BC52A3E21B; // 0xC50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_0249B75D481A6B889F74E6BC52A3E21B; // 0xC54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3515[0x3];                                     
	class UTimelineComponent*                    Timeline_0;                                        // 0xC58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverallAlarmCycleFinished;                         // 0xC60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3516[0x3];                                     
	struct FLinearColor                          InitialEmissiveMultiplier;                         // 0xC64(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InitialEmissiveMultiplier2;                        // 0xC74(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AlarmLightCounter;                                 // 0xC84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SoundIsRetriggerable;                              // 0xC88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CurrentFlashAnimationCycleFinished;                // 0xC89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3517[0x2];                                     
	int32                                        NumberOfTimesTheLightsFlashWhenHit;                // 0xC8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SirenLightEmissiveMultiplier;                      // 0xC90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SirenLightOn;                                      // 0xC94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3518[0x3];                                     
	class FName                                  Emissive_Multiplier_2;                             // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Emissive_Multiplier;                               // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound___HitAlarm;                                  // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Emissive_2;                                    // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3519[0x7];                                     
	class USoundBase*                            Sound___Jump_on_Car;                               // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SuspensionMovementAmount;                          // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ParticleEffectHas_NOT_AlreadyBeenTriggered;        // 0xCC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351A[0x3];                                     
	class UParticleSystemComponent*              EngineSteamParticleEffect;                         // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound___Hit_AutoBody;                              // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanMakeJumpingNoiseAgain;                          // 0xCD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CarAlarmIsCurrentlyMakingNoise;                    // 0xCD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CarAlarmEnabled;                                   // 0xCDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RandomlyDisableSomeCarAlarms;                      // 0xCDB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        PercentageChanceOfCarAlarmsBeingDisabled;          // 0xCDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  HLight1;                                           // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HLight1SocketLocation;                             // 0xCE8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HLight2SocketLocation;                             // 0xCF4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      AnimatingMIDArray;                                 // 0xD00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                       AudibleAlarmSound;                                 // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCarBounce;                                      // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseCarAlarm;                                       // 0xD19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351B[0x2];                                     
	float                                        Headlight_Emissive_Brightness;                     // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCarAlarmEnabledInitialized;                      // 0xD20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugWind;                                         // 0xD21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351C[0x6];                                     
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0xD28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            IntenseWindMaterialsForPreview;                    // 0xD38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              Debug_TempMaterial;                                // 0xD48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Debug_Wind_Intensity;                              // 0xD50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351D[0x4];                                     
	class UStaticMeshComponent*                  Wind_Intensity_Debug_Mesh;                         // 0xD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanDropOilDecal;                                   // 0xD60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351E[0x3];                                     
	float                                        Wind_Yaw_Rotation;                                 // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Taillight1;                                        // 0xD68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Taillight2;                                        // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TailLightBrightness;                               // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TailLightsExist;                                   // 0xD7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HeadLightsExist;                                   // 0xD7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351F[0x2];                                     
	class USpotLightComponent*                   HLight2;                                           // 0xD80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadLightLightBrightness;                          // 0xD88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TLight1SocketLocation;                             // 0xD8C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TLight2SocketLocation;                             // 0xD98(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Bounce_Offset;                                     // 0xDA4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hlight2___impact_bounce_light_location;            // 0xDB0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Tlight2___impact_bounce_light_location;            // 0xDBC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Car_Currently_Bouncing_From_Jump;                  // 0xDC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3520[0x3];                                     
	struct FVector                               Hlight1___impact_bounce_light_location;            // 0xDCC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Tlight1___impact_bounce_light_location;            // 0xDD8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Randomly_start_with_some_cars_lights_on;           // 0xDE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3521[0x3];                                     
	float                                        Percentage_chance_of_lights_being_left_off;        // 0xDE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Final_Random_Light_Intensity_Variance;             // 0xDEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         This_Car_s_Lights_Have_Been_Randomly_Enabled;      // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TurnHeadLightsOn;                                  // 0xDF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3522[0x2];                                     
	float                                        TimeSinceLastJumpSound;                            // 0xDF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTimeBetweenJumpSound;                           // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Car_Copper_C");
		return Clss;
	}

	void PlayJumpOnCarSound(const struct FVector& Location, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Toggle_light_visibility(bool bNewVisibility, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void Randomize_the_target_brightness_levels(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue);
	void Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel, int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, const struct FLinearColor& K2Node_Select_Default);
	float MaterialEditorSine(float Look_up_value, float Period, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue);
	float SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam, float Random_Value_5_59614, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_MaterialEditorSine_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_MaterialEditorSine_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_MaterialEditorSine_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Fraction_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Setcanmakebouncingnoisetrue();
	void StopCarAlarmFromPlaying();
	void UserConstructionScript(const TArray<class FName>& ParametersToLerp, class FName Wind_offset_1, class FName Wind_1_Random_Rotation_Influence, class FName Max_Rotation_1, class FName Wind_1_Random_Rotation_Change_Rate, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, TArray<class FName>& K2Node_MakeArray_Array, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, const struct FTransform& Temp_struct_Variable2, const struct FTransform& Temp_struct_Variable3, class USpotLightComponent* CallFunc_AddComponent_ReturnValue2, class USpotLightComponent* CallFunc_AddComponent_ReturnValue3, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, class FName CallFunc_Array_Get_Item1, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& Temp_struct_Variable4, class UMaterialInterface* CallFunc_Array_Get_Item2, class USpotLightComponent* CallFunc_AddComponent_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue1, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue1, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, float CallFunc_K2_GetScalarParameterValue_ReturnValue1, float CallFunc_Lerp_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, bool CallFunc_DoesSocketExist_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue1);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BounceCar__FinishedFunc();
	void BounceCar__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FireOffNoise__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void StartSirenLight();
	void FadeSirenLight();
	void TriggerLowHealthParticleEffect();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void FireOffCarAlarm();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void Hit_Bounce_Finished();
	void Player_jump_based_bounce_();
	void ExecuteUbergraph_Car_Copper(int32 EntryPoint, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue1, float CallFunc_GetScalarParameterValue_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FVector& CallFunc_MakeVector_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_Damage2, const struct FGameplayTagContainer& K2Node_Event_DamageTags2, const struct FVector& K2Node_Event_Momentum2, const struct FHitResult& K2Node_Event_HitInfo2, class AFortPawn* K2Node_Event_InstigatedBy2, class AActor* K2Node_Event_DamageCauser2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext2, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetBuildingHealthPercentage_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_IsClosed_Variable1, bool CallFunc_BooleanAND_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_HasHealthLeft_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool Temp_bool_Variable, const struct FFortBounceData& K2Node_Event_Data, const struct FVector& K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, float CallFunc_BreakColor_R3, float CallFunc_BreakColor_G3, float CallFunc_BreakColor_B3, float CallFunc_BreakColor_A3, float CallFunc_BreakColor_R4, float CallFunc_BreakColor_G4, float CallFunc_BreakColor_B4, float CallFunc_BreakColor_A4, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue4, float CallFunc_BreakColor_R5, float CallFunc_BreakColor_G5, float CallFunc_BreakColor_B5, float CallFunc_BreakColor_A5, float CallFunc_BreakColor_R6, float CallFunc_BreakColor_G6, float CallFunc_BreakColor_B6, float CallFunc_BreakColor_A6, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue6, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, float CallFunc_BreakColor_R7, float CallFunc_BreakColor_G7, float CallFunc_BreakColor_B7, float CallFunc_BreakColor_A7, float CallFunc_BreakColor_R8, float CallFunc_BreakColor_G8, float CallFunc_BreakColor_B8, float CallFunc_BreakColor_A8, const struct FVector& CallFunc_MakeVector_ReturnValue7, const struct FVector& CallFunc_MakeVector_ReturnValue8, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable1, const struct FVector& K2Node_Select1_Default, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_VSize_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_VSize_ReturnValue3, float CallFunc_FClamp_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_SelectFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue6, float CallFunc_SelectFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue9, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue7, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, int32 Temp_int_Variable1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue13, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_RandomBool_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue9, float CallFunc_SelectFloat_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, bool CallFunc_DoesSocketExist_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue8, const struct FVector& CallFunc_TransformLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue4, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 Temp_int_Variable2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_Conv_BoolToFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue9, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam1, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
