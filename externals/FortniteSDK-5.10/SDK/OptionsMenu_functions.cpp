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


// Function OptionsMenu.OptionsMenu_C.HandleTabAudioOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::HandleTabAudioOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleTabAudioOptionsActionHandlerStates");

	Params::UOptionsMenu_C_HandleTabAudioOptionsActionHandlerStates_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Update Header Text by Tab ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Update_Header_Text_by_Tab_ID(class FName TabId, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Update Header Text by Tab ID");

	Params::UOptionsMenu_C_Update_Header_Text_by_Tab_ID_Params Parms;
	Parms.TabId = TabId;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::DoResetKBMToDefault()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DoResetKBMToDefault");

	Params::UOptionsMenu_C_DoResetKBMToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleResetCustomGamepadToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::HandleResetCustomGamepadToDefault()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleResetCustomGamepadToDefault");

	Params::UOptionsMenu_C_HandleResetCustomGamepadToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsTab*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::UpdateAllOptionsTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "UpdateAllOptionsTabs");

	Params::UOptionsMenu_C_UpdateAllOptionsTabs_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ResetActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableBack                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::ResetActionHandlerStates(bool DisableBack, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ResetActionHandlerStates");

	Params::UOptionsMenu_C_ResetActionHandlerStates_Params Parms;
	Parms.DisableBack = DisableBack;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldCenterOnTab                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabAccount_C*               K2Node_DynamicCast_AsTab_Account                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortOptionsTab*             K2Node_DynamicCast_AsFort_Options_Tab                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UTabAudioOptions_C*          K2Node_DynamicCast_AsTab_Audio_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab, class UTabAccount_C* K2Node_DynamicCast_AsTab_Account, bool K2Node_DynamicCast_bSuccess, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTabAudioOptions_C* K2Node_DynamicCast_AsTab_Audio_Options, bool K2Node_DynamicCast_bSuccess2, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess3, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue2, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue2)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "UpdateBasedOnActiveWidget");

	Params::UOptionsMenu_C_UpdateBasedOnActiveWidget_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ShouldCenterOnTab = ShouldCenterOnTab;
	Parms.K2Node_DynamicCast_AsTab_Account = K2Node_DynamicCast_AsTab_Account;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Options_Tab = K2Node_DynamicCast_AsFort_Options_Tab;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsTab_Audio_Options = K2Node_DynamicCast_AsTab_Audio_Options;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsTab_Game_Options = K2Node_DynamicCast_AsTab_Game_Options;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue1 = CallFunc_GetObjectClass_ReturnValue1;
	Parms.CallFunc_GetObjectClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue1 = CallFunc_ClassIsChildOf_ReturnValue1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue2 = CallFunc_ClassIsChildOf_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ApplySettings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::ApplySettings(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ApplySettings");

	Params::UOptionsMenu_C_ApplySettings_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::DoResetHUDOptionsToDefault()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DoResetHUDOptionsToDefault");

	Params::UOptionsMenu_C_DoResetHUDOptionsToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::DoResetGameOptionsToDefault()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DoResetGameOptionsToDefault");

	Params::UOptionsMenu_C_DoResetGameOptionsToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGamePadConfig_C*         K2Node_DynamicCast_AsTab_Game_Pad_Config                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCustomConfig_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::HandleTabGamepadConfigActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCustomConfig_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleTabGamepadConfigActionHandlerStates");

	Params::UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Game_Pad_Config = K2Node_DynamicCast_AsTab_Game_Pad_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCustomConfig_ReturnValue = CallFunc_IsCustomConfig_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleUpdateTabActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowApply                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::HandleUpdateTabActionHandlerStates(bool ShouldShowApply, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleUpdateTabActionHandlerStates");

	Params::UOptionsMenu_C_HandleUpdateTabActionHandlerStates_Params Parms;
	Parms.ShouldShowApply = ShouldShowApply;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTabInputOptions_C*          TabInputOptionsActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleTabInputOptionsActionHandlerStates");

	Params::UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params Parms;
	Parms.TabInputOptionsActor = TabInputOptionsActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Active_Widget_Index                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::HandleTabGameOptionsActionHandlerStates(int32 Active_Widget_Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleTabGameOptionsActionHandlerStates");

	Params::UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params Parms;
	Parms.Active_Widget_Index = Active_Widget_Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsTab*             K2Node_DynamicCast_AsFort_Options_Tab                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "CenterOnActiveTab");

	Params::UOptionsMenu_C_CenterOnActiveTab_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Options_Tab = K2Node_DynamicCast_AsFort_Options_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::SetBackground(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "SetBackground");

	Params::UOptionsMenu_C_SetBackground_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.AddTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        NameId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESettingTab             Tab_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsTab*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::AddTab(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FSlateBrush& Icon, enum class ESettingTab Tab_Type, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "AddTab");

	Params::UOptionsMenu_C_AddTab_Params Parms;
	Parms.WidgetClass = WidgetClass;
	Parms.DisplayName = DisplayName;
	Parms.NameId = NameId;
	Parms.Icon = Icon;
	Parms.Tab_Type = Tab_Type;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleCursorModeChanging");

	Params::UOptionsMenu_C_HandleCursorModeChanging_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGamepadInputOptions*    K2Node_DynamicCast_AsFort_Gamepad_Input_Options                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Handle_Toggle_Mode(bool* Passthrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortGamepadInputOptions* K2Node_DynamicCast_AsFort_Gamepad_Input_Options, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Handle Toggle Mode");

	Params::UOptionsMenu_C_Handle_Toggle_Mode_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Gamepad_Input_Options = K2Node_DynamicCast_AsFort_Gamepad_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UOptionsMenu_C::Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Set Input Action Handlers");

	Params::UOptionsMenu_C_Set_Input_Action_Handlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::HandleBack(bool* Passthrough)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleBack");

	Params::UOptionsMenu_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OptionsMenu.OptionsMenu_C.Handle Reset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Handle_Reset(bool* Passthrough)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Handle Reset");

	Params::UOptionsMenu_C_Handle_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OptionsMenu.OptionsMenu_C.HandleResetToDefault
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::HandleResetToDefault(bool* Passthrough, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue1, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleResetToDefault");

	Params::UOptionsMenu_C_HandleResetToDefault_Params Parms;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue1 = CallFunc_GetActiveWidget_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTab_Input_Options1 = K2Node_DynamicCast_AsTab_Input_Options1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OptionsMenu.OptionsMenu_C.Handle Apply
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_NeedsLanguageChangeConfirmation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NeedsVideoChangeConfirmation_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()

void UOptionsMenu_C::Handle_Apply(bool* Passthrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Handle Apply");

	Params::UOptionsMenu_C_Handle_Apply_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NeedsLanguageChangeConfirmation_ReturnValue = CallFunc_NeedsLanguageChangeConfirmation_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1 = CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_NeedsVideoChangeConfirmation_ReturnValue = CallFunc_NeedsVideoChangeConfirmation_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGamePadConfig_C*         K2Node_DynamicCast_AsTab_Game_Pad_Config                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UOptionsMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnPreviewKeyDown");

	Params::UOptionsMenu_C_OnPreviewKeyDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Game_Pad_Config = K2Node_DynamicCast_AsTab_Game_Pad_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_PointerEvent_GetWheelDelta_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UOptionsMenu_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnMouseWheel");

	Params::UOptionsMenu_C_OnMouseWheel_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UOptionsMenu_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnPreviewMouseButtonDown");

	Params::UOptionsMenu_C_OnPreviewMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Game_Normal                                                      (Edit, BlueprintVisible)
// struct FSlateBrush                 Accounts_Normal                                                  (Edit, BlueprintVisible)
// struct FSlateBrush                 Keys_Normal                                                      (Edit, BlueprintVisible)
// struct FSlateBrush                 Controller_Normal                                                (Edit, BlueprintVisible)
// struct FSlateBrush                 Color_Normal                                                     (Edit, BlueprintVisible)
// struct FSlateBrush                 Brightness_Normal                                                (Edit, BlueprintVisible)
// struct FSlateBrush                 Audio_Normal                                                     (Edit, BlueprintVisible)
// struct FSlateBrush                 Video_Normal                                                     (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               ()
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              ()
// bool                               CallFunc_ShowBrightnessOptions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowAccessibilityOptions_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowAccountOptions_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowControllerOptions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasWidgets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsTab*             K2Node_DynamicCast_AsFort_Options_Tab                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// bool                               CallFunc_ShowInputOptions_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              (ConstParm)
// bool                               CallFunc_ShowVideoOptions_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Initialize(const struct FSlateBrush& Game_Normal, const struct FSlateBrush& Accounts_Normal, const struct FSlateBrush& Keys_Normal, const struct FSlateBrush& Controller_Normal, const struct FSlateBrush& Color_Normal, const struct FSlateBrush& Brightness_Normal, const struct FSlateBrush& Audio_Normal, const struct FSlateBrush& Video_Normal, class FText Temp_text_Variable, class FName CallFunc_GetTabIdAtIndex_ReturnValue, class FText Temp_text_Variable1, bool CallFunc_ShowBrightnessOptions_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_HasWidgets_ReturnValue, class FText K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable2, bool CallFunc_ShowInputOptions_ReturnValue, class FText Temp_text_Variable3, bool CallFunc_ShowVideoOptions_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Initialize");

	Params::UOptionsMenu_C_Initialize_Params Parms;
	Parms.Game_Normal = Game_Normal;
	Parms.Accounts_Normal = Accounts_Normal;
	Parms.Keys_Normal = Keys_Normal;
	Parms.Controller_Normal = Controller_Normal;
	Parms.Color_Normal = Color_Normal;
	Parms.Brightness_Normal = Brightness_Normal;
	Parms.Audio_Normal = Audio_Normal;
	Parms.Video_Normal = Video_Normal;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_ShowBrightnessOptions_ReturnValue = CallFunc_ShowBrightnessOptions_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ShowAccessibilityOptions_ReturnValue = CallFunc_ShowAccessibilityOptions_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_ShowAccountOptions_ReturnValue = CallFunc_ShowAccountOptions_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_ShowControllerOptions_ReturnValue = CallFunc_ShowControllerOptions_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_HasWidgets_ReturnValue = CallFunc_HasWidgets_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Options_Tab = K2Node_DynamicCast_AsFort_Options_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_ShowInputOptions_ReturnValue = CallFunc_ShowInputOptions_ReturnValue;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_ShowVideoOptions_ReturnValue = CallFunc_ShowVideoOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426");

	Params::UOptionsMenu_C_OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_56F757014AB176CE2140009FB54D0D23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_56F757014AB176CE2140009FB54D0D23");

	Params::UOptionsMenu_C_OnLoaded_56F757014AB176CE2140009FB54D0D23_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_488EE90943BFF7AA4DB2049A7D72238C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_488EE90943BFF7AA4DB2049A7D72238C");

	Params::UOptionsMenu_C_OnLoaded_488EE90943BFF7AA4DB2049A7D72238C_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_598823E641B8288CD371F0B50BE07C91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_598823E641B8288CD371F0B50BE07C91");

	Params::UOptionsMenu_C_OnLoaded_598823E641B8288CD371F0B50BE07C91_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD");

	Params::UOptionsMenu_C_OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnLoaded_EF0A182C49925D83A3E55080FA222F7D");

	Params::UOptionsMenu_C_OnLoaded_EF0A182C49925D83A3E55080FA222F7D_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1");

	Params::UOptionsMenu_C_DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_865D48E84DB087F08A2C9797E6CB619E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::DialogResult_865D48E84DB087F08A2C9797E6CB619E(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DialogResult_865D48E84DB087F08A2C9797E6CB619E");

	Params::UOptionsMenu_C_DialogResult_865D48E84DB087F08A2C9797E6CB619E_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.DialogResult_505313CB4EC9E510DD07E6B544334958
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::DialogResult_505313CB4EC9E510DD07E6B544334958(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "DialogResult_505313CB4EC9E510DD07E6B544334958");

	Params::UOptionsMenu_C_DialogResult_505313CB4EC9E510DD07E6B544334958_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Enable_Overlay_Video(bool Accept_Input)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Enable Overlay Video");

	Params::UOptionsMenu_C_Enable_Overlay_Video_Params Parms;
	Parms.Accept_Input = Accept_Input;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Disable_Overlay()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Disable Overlay");

	Params::UOptionsMenu_C_Disable_Overlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Destruct()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Destruct");

	Params::UOptionsMenu_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Tab_Setting_Changed()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Tab Setting Changed");

	Params::UOptionsMenu_C_Tab_Setting_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OnActivated()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnActivated");

	Params::UOptionsMenu_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Disable_Overlay_Input()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Disable Overlay Input");

	Params::UOptionsMenu_C_Disable_Overlay_Input_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Gamepad_Enabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenu_C::Gamepad_Changed(bool Gamepad_Enabled)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Gamepad Changed");

	Params::UOptionsMenu_C_Gamepad_Changed_Params Parms;
	Parms.Gamepad_Enabled = Gamepad_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::HandleBenchmarkComplete()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleBenchmarkComplete");

	Params::UOptionsMenu_C_HandleBenchmarkComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::HandleSettingsErrorMessageClosed()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleSettingsErrorMessageClosed");

	Params::UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnHandleBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OnHandleBack()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnHandleBack");

	Params::UOptionsMenu_C_OnHandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Overlay_Text                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMenu_C::Enable_Overlay_Input(bool Accept_Input, class FText Overlay_Text)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Enable Overlay Input");

	Params::UOptionsMenu_C_Enable_Overlay_Input_Params Parms;
	Parms.Accept_Input = Accept_Input;
	Parms.Overlay_Text = Overlay_Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "Construct");

	Params::UOptionsMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "TabGameOptions_OnActiveWidgetChanged_Bind");

	Params::UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::HandleSettingsSaveComplete()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "HandleSettingsSaveComplete");

	Params::UOptionsMenu_C_HandleSettingsSaveComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnDeactivated");

	Params::UOptionsMenu_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::LoadTabClasses()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "LoadTabClasses");

	Params::UOptionsMenu_C_LoadTabClasses_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ResetVideoOptionsTimerDelegate()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ResetVideoOptionsTimerDelegate");

	Params::UOptionsMenu_C_ResetVideoOptionsTimerDelegate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ShowResetDefaultConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ShowResetDefaultConfirmation()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ShowResetDefaultConfirmation");

	Params::UOptionsMenu_C_ShowResetDefaultConfirmation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ShowLangaugeConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ShowLangaugeConfirmation()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ShowLangaugeConfirmation");

	Params::UOptionsMenu_C_ShowLangaugeConfirmation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Accept_Input1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortVideoOptions*           K2Node_DynamicCast_AsFort_Video_Options                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Gamepad_Enabled                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Reset_PassThrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Options_Tab5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Reset_PassThrough1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Accept_Input                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Overlay_Text                                  ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ActiveWidget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ActiveWidgetIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowVideoOptions_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowAccountOptions_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShowControllerOptions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowInputOptions_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowAccessibilityOptions_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShowBrightnessOptions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsTab*             K2Node_DynamicCast_AsFort_Options_Tab                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGamePadConfig_C*         K2Node_DynamicCast_AsTab_Game_Pad_Config                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabVideoOptions_C*          K2Node_DynamicCast_AsTab_Video_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Handle_Apply_PassThrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabInputOptions_C*          K2Node_DynamicCast_AsTab_Input_Options1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGamePadConfig_C*         K2Node_DynamicCast_AsTab_Game_Pad_Config1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTabGamePadConfig_C*         K2Node_DynamicCast_AsTab_Game_Pad_Config2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptionsHud_C*        K2Node_DynamicCast_AsTab_Game_Options_Hud                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// class UTabGameOptionsMain_C*       K2Node_DynamicCast_AsTab_Game_Options_Main                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded1, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab1, bool K2Node_ClassDynamicCast_bSuccess1, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable2, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab2, bool K2Node_ClassDynamicCast_bSuccess2, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool K2Node_CustomEvent_Accept_Input1, bool CallFunc_IsValid_ReturnValue2, class UClass* Temp_class_Variable3, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab3, bool K2Node_ClassDynamicCast_bSuccess3, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortVideoOptions* K2Node_DynamicCast_AsFort_Video_Options, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded3, class UClass* Temp_class_Variable4, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab4, bool K2Node_ClassDynamicCast_bSuccess4, class UClass* K2Node_CustomEvent_Loaded4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_CustomEvent_Gamepad_Enabled, class FName CallFunc_GetActiveTab_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_EqualEqual_NameName_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Handle_Reset_PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UClass* Temp_class_Variable5, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab5, bool K2Node_ClassDynamicCast_bSuccess5, bool CallFunc_Handle_Reset_PassThrough1, class UClass* K2Node_CustomEvent_Loaded5, bool K2Node_CustomEvent_Accept_Input, class FText K2Node_CustomEvent_Overlay_Text, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, enum class EInputActionState Temp_byte_Variable3, class UWidget* K2Node_CustomEvent_ActiveWidget, int32 K2Node_CustomEvent_ActiveWidgetIndex, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable, bool CallFunc_ShowVideoOptions_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_ShowAccountOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_ShowControllerOptions_ReturnValue, bool CallFunc_ShowInputOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsVisible_ReturnValue1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_ShowAccessibilityOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, bool CallFunc_ShowBrightnessOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class FName K2Node_ComponentBoundEvent_TabId, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess3, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess4, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options, bool K2Node_DynamicCast_bSuccess5, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess6, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Handle_Apply_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class UWidget* CallFunc_GetActiveWidget_ReturnValue1, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options1, bool K2Node_DynamicCast_bSuccess7, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config1, bool K2Node_DynamicCast_bSuccess8, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options1, bool K2Node_DynamicCast_bSuccess9, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config2, bool K2Node_DynamicCast_bSuccess10, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue1, class UTabGameOptionsHud_C* K2Node_DynamicCast_AsTab_Game_Options_Hud, bool K2Node_DynamicCast_bSuccess11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UTabGameOptionsMain_C* K2Node_DynamicCast_AsTab_Game_Options_Main, bool K2Node_DynamicCast_bSuccess12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, class UWidget* CallFunc_GetActiveWidget_ReturnValue2)
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "ExecuteUbergraph_OptionsMenu");

	Params::UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded2 = K2Node_CustomEvent_Loaded2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab = K2Node_ClassDynamicCast_AsFort_Options_Tab;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded1 = K2Node_CustomEvent_Loaded1;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab1 = K2Node_ClassDynamicCast_AsFort_Options_Tab1;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab2 = K2Node_ClassDynamicCast_AsFort_Options_Tab2;
	Parms.K2Node_ClassDynamicCast_bSuccess2 = K2Node_ClassDynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.K2Node_CustomEvent_Accept_Input1 = K2Node_CustomEvent_Accept_Input1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab3 = K2Node_ClassDynamicCast_AsFort_Options_Tab3;
	Parms.K2Node_ClassDynamicCast_bSuccess3 = K2Node_ClassDynamicCast_bSuccess3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Video_Options = K2Node_DynamicCast_AsFort_Video_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded3 = K2Node_CustomEvent_Loaded3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab4 = K2Node_ClassDynamicCast_AsFort_Options_Tab4;
	Parms.K2Node_ClassDynamicCast_bSuccess4 = K2Node_ClassDynamicCast_bSuccess4;
	Parms.K2Node_CustomEvent_Loaded4 = K2Node_CustomEvent_Loaded4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_Gamepad_Enabled = K2Node_CustomEvent_Gamepad_Enabled;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId1 = K2Node_ComponentBoundEvent_TabId1;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handle_Reset_PassThrough = CallFunc_Handle_Reset_PassThrough;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_class_Variable5 = Temp_class_Variable5;
	Parms.K2Node_ClassDynamicCast_AsFort_Options_Tab5 = K2Node_ClassDynamicCast_AsFort_Options_Tab5;
	Parms.K2Node_ClassDynamicCast_bSuccess5 = K2Node_ClassDynamicCast_bSuccess5;
	Parms.CallFunc_Handle_Reset_PassThrough1 = CallFunc_Handle_Reset_PassThrough1;
	Parms.K2Node_CustomEvent_Loaded5 = K2Node_CustomEvent_Loaded5;
	Parms.K2Node_CustomEvent_Accept_Input = K2Node_CustomEvent_Accept_Input;
	Parms.K2Node_CustomEvent_Overlay_Text = K2Node_CustomEvent_Overlay_Text;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CustomEvent_ActiveWidget = K2Node_CustomEvent_ActiveWidget;
	Parms.K2Node_CustomEvent_ActiveWidgetIndex = K2Node_CustomEvent_ActiveWidgetIndex;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ShowVideoOptions_ReturnValue = CallFunc_ShowVideoOptions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShowAccountOptions_ReturnValue = CallFunc_ShowAccountOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_ShowControllerOptions_ReturnValue = CallFunc_ShowControllerOptions_ReturnValue;
	Parms.CallFunc_ShowInputOptions_ReturnValue = CallFunc_ShowInputOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_IsVisible_ReturnValue1 = CallFunc_IsVisible_ReturnValue1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_ShowAccessibilityOptions_ReturnValue = CallFunc_ShowAccessibilityOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_ShowBrightnessOptions_ReturnValue = CallFunc_ShowBrightnessOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Options_Tab = K2Node_DynamicCast_AsFort_Options_Tab;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Game_Pad_Config = K2Node_DynamicCast_AsTab_Game_Pad_Config;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsTab_Game_Options = K2Node_DynamicCast_AsTab_Game_Options;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsTab_Video_Options = K2Node_DynamicCast_AsTab_Video_Options;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsTab_Input_Options = K2Node_DynamicCast_AsTab_Input_Options;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Handle_Apply_PassThrough = CallFunc_Handle_Apply_PassThrough;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_GetActiveWidget_ReturnValue1 = CallFunc_GetActiveWidget_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTab_Input_Options1 = K2Node_DynamicCast_AsTab_Input_Options1;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsTab_Game_Pad_Config1 = K2Node_DynamicCast_AsTab_Game_Pad_Config1;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsTab_Game_Options1 = K2Node_DynamicCast_AsTab_Game_Options1;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.K2Node_DynamicCast_AsTab_Game_Pad_Config2 = K2Node_DynamicCast_AsTab_Game_Pad_Config2;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue1 = CallFunc_GetActiveWidgetIndex_ReturnValue1;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue1 = CallFunc_GetWidgetAtIndex_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTab_Game_Options_Hud = K2Node_DynamicCast_AsTab_Game_Options_Hud;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.K2Node_DynamicCast_AsTab_Game_Options_Main = K2Node_DynamicCast_AsTab_Game_Options_Main;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.CallFunc_GetActiveWidget_ReturnValue2 = CallFunc_GetActiveWidget_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenu.OptionsMenu_C.OnSettingsApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OnSettingsApplied__DelegateSignature()
{
	static auto Func = Class->GetFunction("OptionsMenu_C", "OnSettingsApplied__DelegateSignature");

	Params::UOptionsMenu_C_OnSettingsApplied__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
