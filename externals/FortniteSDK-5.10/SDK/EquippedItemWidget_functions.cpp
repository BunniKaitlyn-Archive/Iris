#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CurrentAmmoCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentAmmoText                                                  (Parm, OutParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquippedItemWidget_C::GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "GetCurrentAmmoText");

	Params::UEquippedItemWidget_C_GetCurrentAmmoText_Params Parms;
	Parms.CurrentAmmoCount = CurrentAmmoCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = Parms.CurrentAmmoText;

}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentResourceCount_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UEquippedItemWidget_C::UpdateResourceCount(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetCurrentResourceCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "UpdateResourceCount");

	Params::UEquippedItemWidget_C_UpdateResourceCount_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentResourceCount_ReturnValue = CallFunc_GetCurrentResourceCount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalRemaining                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCurrentAmmoText_CurrentAmmoText                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_GetCurrentAmmoItemDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedItemWidget_C::UpdateCurrentAmmo(int32 LocalCount, int32 LocalRemaining, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue3, class FText CallFunc_GetCurrentAmmoText_CurrentAmmoText, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortWorldItemDefinition* CallFunc_GetCurrentAmmoItemDefinition_ReturnValue, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, class FText K2Node_Select_Default, float Temp_float_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable2, float K2Node_Select1_Default, float Temp_float_Variable3, bool Temp_bool_Variable2, float K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "UpdateCurrentAmmo");

	Params::UEquippedItemWidget_C_UpdateCurrentAmmo_Params Parms;
	Parms.LocalCount = LocalCount;
	Parms.LocalRemaining = LocalRemaining;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_GetCurrentAmmoText_CurrentAmmoText = CallFunc_GetCurrentAmmoText_CurrentAmmoText;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue4 = CallFunc_Greater_IntInt_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue5 = CallFunc_Greater_IntInt_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoItemDefinition_ReturnValue = CallFunc_GetCurrentAmmoItemDefinition_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAmmo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Debuff_Color_Color                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FSlateColor                 K2Node_Select2_Default                                           ()

void UEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Debuff_Color_Color, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "UpdateWidgetColor");

	Params::UEquippedItemWidget_C_UpdateWidgetColor_Params Parms;
	Parms.HasAmmo = HasAmmo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Debuff_Color_Color = CallFunc_Get_Debuff_Color_Color;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeap_BuildingToolBase*  K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDisplayAmmoCounter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquippedItemWidget_C::UpdateVisibility(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ShouldDisplayAmmoCounter_ReturnValue)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "UpdateVisibility");

	Params::UEquippedItemWidget_C_UpdateVisibility_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base = K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_ShouldDisplayAmmoCounter_ReturnValue = CallFunc_ShouldDisplayAmmoCounter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentResourceCount_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UEquippedItemWidget_C::FullUpdateResourceDisplay(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, int32 CallFunc_GetCurrentResourceCount_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "FullUpdateResourceDisplay");

	Params::UEquippedItemWidget_C_FullUpdateResourceDisplay_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentResourceItemDefinition_ReturnValue = CallFunc_GetCurrentResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetCurrentResourceCount_ReturnValue = CallFunc_GetCurrentResourceCount_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalMagazineAmmoCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalRemainingAmmo_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedItemWidget_C::FullUpdateAmmoDisplay(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, int32 CallFunc_GetLocalRemainingAmmo_ReturnValue)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "FullUpdateAmmoDisplay");

	Params::UEquippedItemWidget_C_FullUpdateAmmoDisplay_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.CallFunc_GetLocalMagazineAmmoCount_ReturnValue = CallFunc_GetLocalMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_GetLocalRemainingAmmo_ReturnValue = CallFunc_GetLocalRemainingAmmo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEquippedItemWidget_C::Construct()
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "Construct");

	Params::UEquippedItemWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedItemWidget_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "OnWeaponEquipped");

	Params::UEquippedItemWidget_C_OnWeaponEquipped_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalRemaining                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedItemWidget_C::OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "OnLocalAmmoChanged");

	Params::UEquippedItemWidget_C_OnLocalAmmoChanged_Params Parms;
	Parms.LocalCount = LocalCount;
	Parms.LocalRemaining = LocalRemaining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquippedItemWidget_C::OnWorldItemsChanged()
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "OnWorldItemsChanged");

	Params::UEquippedItemWidget_C_OnWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquippedItemWidget_C::OnBuildingMaterialCycled()
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "OnBuildingMaterialCycled");

	Params::UEquippedItemWidget_C_OnBuildingMaterialCycled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_PrevWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeap_BuildingToolBase*  K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDisplayAmmoCounter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_LocalCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalRemaining                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UEquippedItemWidget_C::ExecuteUbergraph_EquippedItemWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ShouldDisplayAmmoCounter_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 K2Node_CustomEvent_LocalCount, int32 K2Node_CustomEvent_LocalRemaining, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("EquippedItemWidget_C", "ExecuteUbergraph_EquippedItemWidget");

	Params::UEquippedItemWidget_C_ExecuteUbergraph_EquippedItemWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_PrevWeapon = K2Node_CustomEvent_PrevWeapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base = K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_ShouldDisplayAmmoCounter_ReturnValue = CallFunc_ShouldDisplayAmmoCounter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_LocalCount = K2Node_CustomEvent_LocalCount;
	Parms.K2Node_CustomEvent_LocalRemaining = K2Node_CustomEvent_LocalRemaining;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
