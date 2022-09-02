#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x360 - 0x338)
// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
class UItemManagementDetailsModeBox_C : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  DetailPanelTabList;                                // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemSelected;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NoSelectionDetailsBox;                             // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDateTime                             LastDesiredReadOnlyModeWIFE;                       // 0x358(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementDetailsModeBox_C");
		return Clss;
	}

	void GetStatsTabVisibility(enum class ESlateVisibility* StatsTabVisbility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasTooltipStats_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleOpenCustomFilter(bool* Passthrough);
	void RegisterOpenCustomFilter(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RefreshDestroyAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void UpdateReadOnlyWIFE(const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool CallFunc_PreferReadOnlyWIFE_ReadOnly, const struct FDateTime& CallFunc_UtcNow_ReturnValue1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsScreenWIFE_ReturnValue);
	void PreferReadOnlyWIFE(bool* ReadOnly, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_AreProfilesAvailableToWIFE_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsScreenWIFE_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, enum class EFortPartyMemberLocation CallFunc_GetLocalPartyMemberLocation_Location, bool CallFunc_GetLocalPartyMemberLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2);
	void HandleMore(bool* Pass_Through);
	void RegisterMore(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CanRequestPopupMenuForSelectedItem_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleDestroy(bool* Passthrough);
	void HandleWithdrawAll(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
	void RefreshSwitchPanelAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSwitchPanelAvailable_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleSwitchPanel(bool* Passthrough);
	void UnbindEvents(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void RefreshTransferActions(enum class EInputActionState TransferState, class UFortWorldItem* Item, bool IsDeposit, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select1_Default);
	void HandleTransfer(bool* Passthrough);
	void RegisterTransferActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void RegisterInspectUpgrade(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RegisterLeaveInventory(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RefreshMulchAction(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleCraftAndSlot(bool* Passthrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess1);
	void RegisterCraftAndSlot(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RefreshCraftActions(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionState Temp_byte_Variable3, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess1, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class EInputActionState K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, enum class EInputActionState K2Node_Select1_Default);
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void RegisterInventoryInspect(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortItemType CallFunc_GetType_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, enum class EInputActionState K2Node_Select_Default);
	void SetTabStyling(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void SetItemVisualization();
	void RefreshConsumeAction(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnSelf_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupDetailPanels(enum class ESlateVisibility CallFunc_GetStatsTabVisibility_StatsTabVisbility, bool CallFunc_SelectTabByID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetStatsTabVisibility_StatsTabVisbility1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue1, class FName CallFunc_GetActiveTab_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsSchematic_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleEquip(bool* Passthrough);
	void RegisterEquip(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipAvailable_EquipAvailable, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState Temp_byte_Variable3, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsSlotted_ReturnValue, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EInputActionState K2Node_Select1_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1);
	void HandleTrack(bool* Passthrough, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSchematicPinned_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue1, bool CallFunc_IsSchematicPinned_ReturnValue);
	void RegisterTrack(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterCompare(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterConsumeItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterSort(bool InGame, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_Select_Default);
	void RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterInspect(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterRetire(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterMulch(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterCraft(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFrontendCraftingEnabled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterDropOrDestroy(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1);
	void HandleDrop(bool* Passthrough);
	void ShowSelection(bool CallFunc_IsValid_ReturnValue);
	void HandleCraft(bool* Passthrough, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess);
	void HandleConsumeItem(bool* Passthrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UBoostsRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_CanActivateOnSelf_ReturnValue);
	void TrySetupInputHandling(bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FCommonInputActionHandlerData>& CallFunc_GetInputActions_InputActionDataRows, bool CallFunc_GetInputActions_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue);
	void HandleSort(bool* Passthrough);
	void HandleMulch(bool* Passthrough);
	void HandleCompare(bool* Passthrough, bool CallFunc_IsValid_ReturnValue);
	void HandleInspect(bool* Passthrough);
	void HandleBack(bool* Passthrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess);
	void DialogResult_475B18A9452A639A04116D83A8B1CC22(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_4190138B4388B0E2F8396BBD395808D5(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandleDifferentItemToDetailSetBP();
	void OnActivated();
	void BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void Construct();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDestroyItem(class UFortItem* Item);
	void HandleCraftItemFailed(enum class EFortCraftFailCause FailureCause);
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int32 EntryPoint, class UMulchConfirmationItem_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, enum class EFortCraftFailCause Temp_byte_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel1, bool K2Node_DynamicCast_bSuccess1, class FName K2Node_ComponentBoundEvent_TabId3, class UCommonButton* K2Node_ComponentBoundEvent_TabButton3, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton2, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton1, bool K2Node_SwitchEnum_CmpSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, class UFortItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FName Temp_name_Variable1, bool CallFunc_IsValid_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class EFortCraftFailCause K2Node_CustomEvent_FailureCause, bool CallFunc_IsScreenWIFE_ReturnValue, class FText K2Node_Select1_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_GuardActionForReadOnlyWIFE_Proceed, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
