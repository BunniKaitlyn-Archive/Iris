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


// Function CollectionBookWidget.CollectionBookWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookWidget_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBookWidget_C", "Construct");

	Params::UCollectionBookWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookWidget.CollectionBookWidget_C.SlotItemComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            ItemSlotted                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SlotId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookWidget_C::SlotItemComplete(class UFortAccountItem* ItemSlotted, class FName SlotId)
{
	static auto Func = Class->GetFunction("CollectionBookWidget_C", "SlotItemComplete");

	Params::UCollectionBookWidget_C_SlotItemComplete_Params Parms;
	Parms.ItemSlotted = ItemSlotted;
	Parms.SlotId = SlotId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookWidget.CollectionBookWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("CollectionBookWidget_C", "Destruct");

	Params::UCollectionBookWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookWidget.CollectionBookWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("CollectionBookWidget_C", "OnActivated");

	Params::UCollectionBookWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookWidget.CollectionBookWidget_C.ExecuteUbergraph_CollectionBookWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_CustomEvent_ItemSlotted                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SlotId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateBookXp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCollectionBookPrimaryPanel_C*K2Node_DynamicCast_AsCollection_Book_Primary_Panel               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UCollectionBookWidget_C::ExecuteUbergraph_CollectionBookWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortAccountItem* K2Node_CustomEvent_ItemSlotted, class FName K2Node_CustomEvent_SlotId, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_CalculateBookXp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue2, class UCollectionBookPrimaryPanel_C* K2Node_DynamicCast_AsCollection_Book_Primary_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("CollectionBookWidget_C", "ExecuteUbergraph_CollectionBookWidget");

	Params::UCollectionBookWidget_C_ExecuteUbergraph_CollectionBookWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CustomEvent_ItemSlotted = K2Node_CustomEvent_ItemSlotted;
	Parms.K2Node_CustomEvent_SlotId = K2Node_CustomEvent_SlotId;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalculateBookXp_ReturnValue = CallFunc_CalculateBookXp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue1 = CallFunc_GetCollectionBookManager_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue2 = CallFunc_GetCollectionBookManager_ReturnValue2;
	Parms.K2Node_DynamicCast_AsCollection_Book_Primary_Panel = K2Node_DynamicCast_AsCollection_Book_Primary_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
