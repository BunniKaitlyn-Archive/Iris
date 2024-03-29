#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C
class UPinnedSchematicItemsWidget_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UPinnedSchematicItemWidget_C*          PinnedSchematicItem0;                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPinnedSchematicItemWidget_C*          PinnedSchematicItem1;                              // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPinnedList;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PinnedSchematicItemsWidget_C");
		return Clss;
	}

	void Refresh(class UFortSchematicItem* PinnedItem, int32 Index, const TArray<class UFortSchematicItem*>& PinnedSchematics, int32 Temp_int_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortSchematicItem*>& CallFunc_GetPinnedSchematicList_PinnedItems, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UPinnedSchematicItemWidget_C* K2Node_DynamicCast_AsPinned_Schematic_Item_Widget, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UPinnedSchematicItemWidget_C* K2Node_DynamicCast_AsPinned_Schematic_Item_Widget1, bool K2Node_DynamicCast_bSuccess1);
	void Construct();
	void ExecuteUbergraph_PinnedSchematicItemsWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
