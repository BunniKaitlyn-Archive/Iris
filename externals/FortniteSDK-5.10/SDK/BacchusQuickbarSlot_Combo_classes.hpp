#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3A8 - 0x388)
// WidgetBlueprintGeneratedClass BacchusQuickbarSlot_Combo.BacchusQuickbarSlot_Combo_C
class UBacchusQuickbarSlot_Combo_C : public UBacchusQuickbarComboSlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UBacchusQuickbarSlot_C*                PrimarySlot;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBacchusQuickbarSlot_C*                SecondarySlot;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusQuickbarSlot_Combo_C");
		return Clss;
	}

	void TrySetQuickbarType(enum class EFortQuickBars Mode, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EComboSlotType Temp_byte_Variable, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default);
	void On_Building_Mode_Changed(bool bEntering);
	void On_Contents_Changed(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots);
	void OnLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport);
	void OnLocalPlayerRevived();
	void OnLocalPlayerSpawned();
	void Construct();
	void Focus_Slot_Changed(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void Refresh();
	void ExecuteUbergraph_BacchusQuickbarSlot_Combo(int32 EntryPoint, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortQuickBars Temp_byte_Variable, enum class EFortQuickBars Temp_byte_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable1, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, enum class EFortQuickBars Temp_byte_Variable2, enum class EFortQuickBars Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortQuickBars K2Node_Select_Default, bool K2Node_CustomEvent_bEntering, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex1, TArray<int32>& K2Node_CustomEvent_ChangedSlots, enum class EFortQuickBars K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EFortQuickBars CallFunc_GetQuickbarType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_BooleanOR_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarType_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
