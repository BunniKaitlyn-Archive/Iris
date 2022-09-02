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


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.TrySetQuickbarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboSlotType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusQuickbarSlot_Combo_C::TrySetQuickbarType(enum class EFortQuickBars Mode, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EComboSlotType Temp_byte_Variable, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "TrySetQuickbarType");

	Params::UBacchusQuickbarSlot_Combo_C_TrySetQuickbarType_Params Parms;
	Parms.Mode = Mode;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.On Building Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEntering                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBacchusQuickbarSlot_Combo_C::On_Building_Mode_Changed(bool bEntering)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "On Building Mode Changed");

	Params::UBacchusQuickbarSlot_Combo_C_On_Building_Mode_Changed_Params Parms;
	Parms.bEntering = bEntering;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.On Contents Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      ChangedSlots                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBacchusQuickbarSlot_Combo_C::On_Contents_Changed(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "On Contents Changed");

	Params::UBacchusQuickbarSlot_Combo_C_On_Contents_Changed_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.ChangedSlots = ChangedSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.OnLocalPlayerDied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBacchusQuickbarSlot_Combo_C::OnLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "OnLocalPlayerDied");

	Params::UBacchusQuickbarSlot_Combo_C_OnLocalPlayerDied_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.OnLocalPlayerRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusQuickbarSlot_Combo_C::OnLocalPlayerRevived()
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "OnLocalPlayerRevived");

	Params::UBacchusQuickbarSlot_Combo_C_OnLocalPlayerRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.OnLocalPlayerSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusQuickbarSlot_Combo_C::OnLocalPlayerSpawned()
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "OnLocalPlayerSpawned");

	Params::UBacchusQuickbarSlot_Combo_C_OnLocalPlayerSpawned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBacchusQuickbarSlot_Combo_C::Construct()
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "Construct");

	Params::UBacchusQuickbarSlot_Combo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.Focus Slot Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusQuickbarSlot_Combo_C::Focus_Slot_Changed(enum class EFortQuickBars QuickbarIndex, int32 Slot)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "Focus Slot Changed");

	Params::UBacchusQuickbarSlot_Combo_C_Focus_Slot_Changed_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.Refresh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusQuickbarSlot_Combo_C::Refresh()
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "Refresh");

	Params::UBacchusQuickbarSlot_Combo_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C.ExecuteUbergraph_BacchusQuickbarSlot_Combo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuickBars          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortHUDState               CallFunc_GetCurrentHUDState_ReturnValue                          (ConstParm, NoDestructor)
// enum class EFortQuickBars          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortQuickBars          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEntering                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_ChangedSlots                                  (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortQuickBars          K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// enum class EFortQuickBars          CallFunc_GetQuickbarType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuickBars          CallFunc_GetQuickbarType_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBacchusQuickbarSlot_Combo_C::ExecuteUbergraph_BacchusQuickbarSlot_Combo(int32 EntryPoint, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortQuickBars Temp_byte_Variable, enum class EFortQuickBars Temp_byte_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable1, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, enum class EFortQuickBars Temp_byte_Variable2, enum class EFortQuickBars Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortQuickBars K2Node_Select_Default, bool K2Node_CustomEvent_bEntering, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex1, TArray<int32>& K2Node_CustomEvent_ChangedSlots, enum class EFortQuickBars K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EFortQuickBars CallFunc_GetQuickbarType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_BooleanOR_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarType_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("BacchusQuickbarSlot_Combo_C", "ExecuteUbergraph_BacchusQuickbarSlot_Combo");

	Params::UBacchusQuickbarSlot_Combo_C_ExecuteUbergraph_BacchusQuickbarSlot_Combo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetCurrentHUDState_ReturnValue = CallFunc_GetCurrentHUDState_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_bEntering = K2Node_CustomEvent_bEntering;
	Parms.K2Node_CustomEvent_QuickbarIndex1 = K2Node_CustomEvent_QuickbarIndex1;
	Parms.K2Node_CustomEvent_ChangedSlots = K2Node_CustomEvent_ChangedSlots;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetQuickbarType_ReturnValue = CallFunc_GetQuickbarType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetQuickbarType_ReturnValue1 = CallFunc_GetQuickbarType_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
