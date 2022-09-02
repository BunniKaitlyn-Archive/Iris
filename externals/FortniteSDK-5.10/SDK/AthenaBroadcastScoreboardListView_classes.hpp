#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x224 - 0x210)
// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C
class UAthenaBroadcastScoreboardListView_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonListView*                       List;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBroadcastScoreboardListView_C");
		return Clss;
	}

	void ResetFocus(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BndEvt__List_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_AthenaBroadcastScoreboardListView(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item1, bool K2Node_ComponentBoundEvent_bIsSelected, int32 CallFunc_GetIndexForItem_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
