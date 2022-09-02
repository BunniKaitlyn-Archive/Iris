#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15B (0x20D0 - 0x1F75)
// BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{
public:
	uint8                                        Pad_3EEA[0x3];                                     
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F78(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                ShadowStanceFaceComponent;                         // 0x1F80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceCharmComponent;                        // 0x1F88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceBackpackComponent;                     // 0x1F90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceHatComponent;                          // 0x1F98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceHeadComponent;                         // 0x1FA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceBodyComponent;                         // 0x1FA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DragonSlashImpact;                                 // 0x1FB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_1E481F634B18DA79A1B2FDBCB1091D62; // 0x1FB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_1E481F634B18DA79A1B2FDBCB1091D62; // 0x1FBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Animate_Ninja_ShadowStance_Dissolve__Direction_1E481F634B18DA79A1B2FDBCB1091D62; // 0x1FC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEB[0x7];                                     
	class UTimelineComponent*                    Animate_Ninja_ShadowStance_Dissolve;               // 0x1FC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MI_ShadowStanceDissolve;                           // 0x1FD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TestMacros;                                        // 0x1FD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DimMakActive;                                      // 0x1FD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Shadow_Stance_Active;                              // 0x1FDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEC[0x5];                                     
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceDissolveArray;                     // 0x1FE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    MI_Shadow_Stance_Translucent_Shader;               // 0x1FF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Body;             // 0x1FF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Head;             // 0x2008(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        ShadowStanceVisibility;                            // 0x2018(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EED[0x4];                                     
	class UMaterialInterface*                    MI_Shadow_Stance_Translucent_Shader_Enemy_View;    // 0x2020(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Shadow_Stance_Material;                            // 0x2028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DragonSlashActive;                                 // 0x2030(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WeaponsShadowStanceReversed;                       // 0x2031(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEE[0x6];                                     
	class UClass*                                GE_AssassinationStacks;                            // 0x2038(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SplineVolumeTrail_v1b_C*           TOTD_SplineBP;                                     // 0x2040(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              NinjaStarTrail;                                    // 0x2048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NinjaStarsPiercing;                                // 0x2050(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEF[0x7];                                     
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Hat;              // 0x2058(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Face;             // 0x2068(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Charm;            // 0x2078(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Backpack;         // 0x2088(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MasterMIDShadowStanceTranslucentArray;             // 0x2098(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        Master_Shadow_Stance_Component_Array;              // 0x20A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                               SK_DragonSlashSword;                               // 0x20B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_EnableMantisLeap;                               // 0x20C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               SK_ThrowingStars;                                  // 0x20C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Ninja_C");
		return Clss;
	}

	void SetupShadowMeshAssetsAndMaterials(enum class EFortCustomPartType PartType, class USkeletalMeshComponent*& Shadow_Mesh_Component, TArray<class UMaterialInterface*>& Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>& Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set, bool Set_, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 CallFunc_Min_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CreateAndAttachDuplicateEffectSkeletalMeshes(enum class EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class USceneComponent* K2Node_Select_Default, class UMaterialInterface* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable1, class USkeletalMeshComponent* K2Node_Select1_Default);
	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void GameplayCue_Abilities_Activation_Ninja_ShadowStance(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_DimMak_ActiveFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void UpdateWeaponShadowStance();
	void DragonSlashActivatedOrDeactivated(bool Active_);
	void ReceiveBeginPlay();
	void Toggle_Shadow_Stance();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SetMenuScreenClassName();
	void NinjaStarTrails_On();
	void NinjaStarTrails_Off();
	void SetPiercingForFX(bool NewPierceValue);
	void OnLanded(struct FHitResult& Hit);
	void StopEmittingNewSplines();
	void OnTeleportedClient();
	void TailOfDragonEnd();
	void TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength);
	void ExecuteUbergraph_PlayerPawn_Ninja(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array1, bool CallFunc_BooleanOR_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, int32 Temp_int_Variable, bool CallFunc_BooleanOR_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue7, int32 Temp_int_Variable1, bool CallFunc_BooleanOR_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_Variable, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array2, bool CallFunc_BooleanOR_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue5, int32 Temp_int_Variable6, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array3, int32 CallFunc_Add_IntInt_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue6, int32 Temp_int_Variable7, int32 CallFunc_Add_IntInt_ReturnValue7, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_Array_LastIndex_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, bool CallFunc_IsValid_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue13, int32 CallFunc_Array_LastIndex_ReturnValue3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue4, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, int32 CallFunc_Array_LastIndex_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue7, bool Temp_bool_Variable1, int32 CallFunc_Array_LastIndex_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue7, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Min_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue8, int32 CallFunc_Array_LastIndex_ReturnValue9, int32 CallFunc_Min_ReturnValue2, int32 CallFunc_Min_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue10, int32 CallFunc_Min_ReturnValue4, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue11, bool Temp_bool_Variable2, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_LastIndex_ReturnValue12, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue5, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_IsValid_ReturnValue17, int32 CallFunc_Array_LastIndex_ReturnValue13, int32 CallFunc_Min_ReturnValue5, bool CallFunc_IsValid_ReturnValue18, bool CallFunc_IsValid_ReturnValue19, int32 CallFunc_Array_LastIndex_ReturnValue14, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array4, int32 CallFunc_Min_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue8, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue9, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue7, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_IsValid_ReturnValue21, bool CallFunc_IsValid_ReturnValue22, bool CallFunc_IsValid_ReturnValue23, int32 CallFunc_Array_LastIndex_ReturnValue15, int32 CallFunc_Array_LastIndex_ReturnValue16, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue8, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue9, bool CallFunc_IsValid_ReturnValue24, bool CallFunc_IsValid_ReturnValue25, bool CallFunc_IsValid_ReturnValue26, bool CallFunc_IsValid_ReturnValue27, int32 CallFunc_Array_LastIndex_ReturnValue17, int32 CallFunc_Array_LastIndex_ReturnValue18, int32 Temp_int_Variable8, class UMaterialInterface* CallFunc_Array_Get_Item2, int32 CallFunc_Add_IntInt_ReturnValue10, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInterface* CallFunc_Array_Get_Item4, int32 CallFunc_Array_LastIndex_ReturnValue19, int32 CallFunc_Array_LastIndex_ReturnValue20, int32 CallFunc_Min_ReturnValue7, int32 CallFunc_Min_ReturnValue8, int32 CallFunc_Array_LastIndex_ReturnValue21, int32 CallFunc_Array_LastIndex_ReturnValue22, int32 CallFunc_Min_ReturnValue9, int32 CallFunc_Min_ReturnValue10, int32 CallFunc_Array_LastIndex_ReturnValue23, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array5, int32 CallFunc_Min_ReturnValue11, int32 CallFunc_Array_LastIndex_ReturnValue24, class UMaterialInterface* CallFunc_Array_Get_Item5, int32 CallFunc_Array_LastIndex_ReturnValue25, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue8, bool CallFunc_IsValid_ReturnValue28, bool CallFunc_IsValid_ReturnValue29, int32 CallFunc_Array_LastIndex_ReturnValue26, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue11, int32 CallFunc_Min_ReturnValue12, bool CallFunc_IsValid_ReturnValue30, bool CallFunc_IsValid_ReturnValue31, int32 CallFunc_Array_LastIndex_ReturnValue27, bool Temp_bool_Variable3, int32 CallFunc_Min_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue10, bool CallFunc_IsValid_ReturnValue32, bool CallFunc_IsValid_ReturnValue33, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue11, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12, bool CallFunc_IsValid_ReturnValue34, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue35, int32 CallFunc_Array_Add_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue9, float CallFunc_MakeLiteralFloat_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array6, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable4, int32 K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue11, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue12, int32 Temp_int_Array_Index_Variable3, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array7, bool Temp_bool_Variable5, bool CallFunc_IsValid_ReturnValue36, int32 K2Node_Select1_Default, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue37, bool CallFunc_BooleanOR_ReturnValue10, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Select2_Default, bool CallFunc_LessEqual_IntInt_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue17, bool CallFunc_IsValid_ReturnValue38, int32 CallFunc_Array_Add_ReturnValue15, bool Temp_bool_Variable8, bool CallFunc_IsValid_ReturnValue39, int32 K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue11, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue13, int32 K2Node_Select4_Default, int32 Temp_int_Array_Index_Variable4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue16, bool Temp_bool_Variable9, int32 K2Node_Select5_Default, bool CallFunc_IsValid_ReturnValue40, bool CallFunc_IsValid_ReturnValue41, int32 Temp_int_Variable9, int32 Temp_int_Variable10, class UMaterialInterface* CallFunc_Array_Get_Item6, class UMaterialInterface* CallFunc_Array_Get_Item7, bool CallFunc_LessEqual_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue14, int32 CallFunc_Add_IntInt_ReturnValue15, int32 Temp_int_Loop_Counter_Variable5, int32 CallFunc_Add_IntInt_ReturnValue16, int32 Temp_int_Array_Index_Variable5, bool Temp_bool_Variable10, int32 K2Node_Select6_Default, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, bool Temp_bool_Variable11, bool CallFunc_IsDedicatedServer_ReturnValue4, int32 K2Node_Select7_Default, bool CallFunc_LessEqual_IntInt_ReturnValue5, bool Temp_bool_Variable12, int32 K2Node_Select8_Default, bool CallFunc_LessEqual_IntInt_ReturnValue6, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_IsDedicatedServer_ReturnValue6, bool Temp_bool_Variable13, int32 K2Node_Select9_Default, int32 Temp_int_Loop_Counter_Variable6, bool CallFunc_LessEqual_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue17, int32 Temp_int_Array_Index_Variable6, int32 Temp_int_Variable11, class UMaterialInterface* CallFunc_Array_Get_Item8, bool CallFunc_LessEqual_IntInt_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue18, int32 Temp_int_Loop_Counter_Variable7, int32 CallFunc_Add_IntInt_ReturnValue19, int32 Temp_int_Array_Index_Variable7, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable14, int32 Temp_int_Variable12, bool Temp_bool_Variable15, class UMaterialInterface* CallFunc_Array_Get_Item9, int32 K2Node_Select10_Default, bool CallFunc_LessEqual_IntInt_ReturnValue9, bool CallFunc_LessEqual_IntInt_ReturnValue10, int32 CallFunc_Add_IntInt_ReturnValue20, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool K2Node_SwitchEnum1_CmpSuccess, class AFortWeapon* K2Node_Event_NewWeapon, class AFortWeapon* K2Node_Event_PrevWeapon, int32 CallFunc_Array_Add_ReturnValue17, bool CallFunc_IsValid_ReturnValue42, int32 CallFunc_GetNumMaterials_ReturnValue2, bool CallFunc_IsValid_ReturnValue43, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item10, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool K2Node_CustomEvent_Active_, class UMaterialInterface* K2Node_Select11_Default, bool CallFunc_Not_PreBool_ReturnValue1, int32 Temp_int_Variable13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue19, class UMaterialInterface* CallFunc_Array_Get_Item11, int32 CallFunc_Add_IntInt_ReturnValue21, class UMaterialInterface* CallFunc_Array_Get_Item12, class UMaterialInterface* CallFunc_Array_Get_Item13, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue2, bool Temp_bool_Variable16, int32 K2Node_Select12_Default, bool CallFunc_LessEqual_IntInt_ReturnValue11, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item14, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item15, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue4, class UMaterialInterface* CallFunc_Array_Get_Item16, int32 CallFunc_Array_Add_ReturnValue21, int32 CallFunc_Array_LastIndex_ReturnValue28, int32 CallFunc_Min_ReturnValue14, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue, class FName Temp_name_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue20, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue22, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue21, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue22, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue23, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue24, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue25, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue26, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue28, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue29, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, int32 CallFunc_Array_Add_ReturnValue31, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsValid_ReturnValue44, bool CallFunc_IsValid_ReturnValue45, bool K2Node_CustomEvent_NewPierceValue, int32 Temp_int_Variable14, class UMaterialInterface* CallFunc_Array_Get_Item17, bool CallFunc_LessEqual_IntInt_ReturnValue13, int32 CallFunc_Add_IntInt_ReturnValue22, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set1, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set2, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set3, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set4, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set5, class USkeletalMeshComponent* CallFunc_Array_Get_Item18, int32 CallFunc_Array_Length_ReturnValue6, bool CallFunc_Less_IntInt_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item19, class USkeletalMeshComponent* CallFunc_Array_Get_Item20, int32 CallFunc_Array_Length_ReturnValue7, int32 CallFunc_Array_Length_ReturnValue8, bool CallFunc_Less_IntInt_ReturnValue6, bool CallFunc_Less_IntInt_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 K2Node_Select13_Default, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FHitResult& K2Node_Event_Hit, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue13, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select14_Default, bool CallFunc_LessEqual_IntInt_ReturnValue14, int32 Temp_int_Variable15, class UMaterialInterface* CallFunc_Array_Get_Item21, bool CallFunc_LessEqual_IntInt_ReturnValue15, int32 CallFunc_Add_IntInt_ReturnValue23, bool CallFunc_IsValid_ReturnValue46, int32 Temp_int_Variable16, class UMaterialInterface* CallFunc_Array_Get_Item22, bool CallFunc_IsValid_ReturnValue47, bool CallFunc_LessEqual_IntInt_ReturnValue16, int32 CallFunc_Add_IntInt_ReturnValue24, bool CallFunc_IsValid_ReturnValue48, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_CustomEvent_AoeCloudTimeToLive, float K2Node_CustomEvent_MontageLength, float CallFunc_Add_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
