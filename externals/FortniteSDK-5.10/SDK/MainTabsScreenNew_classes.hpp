#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x388 - 0x360)
// WidgetBlueprintGeneratedClass MainTabsScreenNew.MainTabsScreenNew_C
class UMainTabsScreenNew_C : public UFortMainTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 TopTabContentWidgetSwitcher;                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  LastActiveTabId;                                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnclaimedResearchBangThreshold;                    // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4820[0x4];                                     
	struct FTimerHandle                          UnclaimedResearchPointsHandle;                     // 0x380(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MainTabsScreenNew_C");
		return Clss;
	}

	void Determine_If_Any_non_MTX_offers_are_purchasable(bool* ShowBang, bool bShowBang, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<struct FCardPackOffer>& CallFunc_Get_Valid_Offers_Offers, int32 CallFunc_Array_Length_ReturnValue, const struct FCardPackOffer& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void CheckDisplayCriteria(enum class EStoreOfferCosts InCustomStoreOfferCost, const struct FCardPackOffer& InCardPackOffer, bool* bPassedDisplayCriteria, int32 CurrencyBalance, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue);
	void GetCustomStoreOfferCost(const struct FCardPackOffer& InCardPackOffer, enum class EStoreOfferCosts* OutCustomStoreOfferCost, enum class EStoreOfferCosts CustomStoreOfferCost, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue);
	void CheckHighestPriorityOffer(TArray<struct FCardPackOffer>& InOfferArray, struct FCardPackOffer* OutPriorityOffer, bool* FoundOffer, bool OfferFound, const struct FCardPackOffer& PriorityOffer, int32 HighestDisplayPriority, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCardPackOffer& CallFunc_Array_Get_Item, enum class EStoreOfferCosts CallFunc_GetCustomStoreOfferCost_OutCustomStoreOfferCost, bool CallFunc_CheckDisplayCriteria_bPassedDisplayCriteria, int32 CallFunc_GetMetaIntOnOffer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers, const struct FCardPackOffer& TempOffer, const TArray<struct FCardPackOffer>& UpgradeOffers, const TArray<struct FCardPackOffer>& SharedDisplayOffers, const TArray<struct FCardPackOffer>& StandardOffers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCardPackOffer& CallFunc_CheckHighestPriorityOffer_outPriorityOffer, bool CallFunc_CheckHighestPriorityOffer_FoundOffer, const struct FCardPackOffer& CallFunc_CheckHighestPriorityOffer_outPriorityOffer1, bool CallFunc_CheckHighestPriorityOffer_FoundOffer1, bool CallFunc_GetMetaBoolOnOffer_ReturnValue, bool CallFunc_GetMetaBoolOnOffer_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, const struct FCardPackOffer& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool Is_Transform_Feature_Unlocked(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void HandleCardPackStore(class FName TabId, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1);
	void HandleMtxStore(class FName Tab_Id);
	void Handle_Unclaimed_Resources_Updated(bool CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result);
	void Toggle_Unclaimed_Research_Timer(bool Enable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Determine_Unclaimed_Resources_at_Threshold(bool* Result, float UnclaimedResearchMax, float UnclaimedResearch, class UFortCollectedResourceItem* LocalResource, float CallFunc_Divide_FloatFloat_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetResourceCollectorRateInfo_RatePerSecond, int32 CallFunc_GetResourceCollectorRateInfo_MaxCapacity, float CallFunc_Conv_IntToFloat_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue1, const struct FFortItemQuantityPair& CallFunc_GetResourceCollectorRewardsEstimate_OutEstimate, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortCollectedResourceItem*>& CallFunc_GetAllResourceCollectors_ResourceCollectorsOwned, float CallFunc_Conv_IntToFloat_ReturnValue1, class UFortCollectedResourceItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool Are_Any_Nodes_Available_For_Purchase(class FName NodePageId, bool NodeAvailable, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHomebaseNodePage& CallFunc_TryGetHomebaseNodePageData_OutHomebaseNodePage, bool CallFunc_TryGetHomebaseNodePageData_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHomebaseNodeState& CallFunc_TryGetHomebaseNodeState_OutNodeState, bool CallFunc_TryGetHomebaseNodeState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4);
	void Update_Skills_Tab_Button_Bang(class FName Tab, int32 NumPoints, class FName CurrentTabId, bool SkillPointsUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result, TArray<class FName>& CallFunc_GetHomebaseNodePageNames_NodePages, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Are_Any_Nodes_Available_For_Purchase_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess1);
	void Update_Store_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, bool ShowBang, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Determine_If_Any_non_MTX_offers_are_purchasable_ShowBang, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanStoreOpen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess2);
	void Are_Any_Inventory_Items_Unseen(bool* Unseen, bool CallFunc_IsFrontendStorageEnabled_ReturnValue, bool CallFunc_IsWIFEEnabled_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue2, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue4, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue6);
	void Are_Any_Transform_Keys_Unseen(bool* Unseen, bool LocalUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Is_Transform_Feature_Unlocked_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Get_Item_from_Transform_Seen_State_OutItem, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1);
	void Get_FortPC(class AFortPlayerController** FortPC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem, const struct FGameplayTagContainer& CatalystTags, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue, class AFortPlayerController* CallFunc_Get_FortPC_FortPC, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Update_Armory_Tab_Button_Bang(class FName Tab, bool InventoryUnseen, class FName CurrentTabId, bool TransformKeyUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Are_Any_Inventory_Items_Unseen_Unseen, bool CallFunc_Are_Any_Transform_Keys_Unseen_Unseen, bool CallFunc_BooleanOR_ReturnValue1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess1);
	void Update_Quest_Tab_Button_Bang(class FName Tab, int32 Count, bool IsClaimedVisibleToUsers, bool IsVisibleToUsers, bool HasNotBeenSeen, bool IsMainQuest, class UFortQuestManager* QuestManager, class FName CurrentTabId, class AFortPlayerController* FortPC, bool QuestsUnseen, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetUnseenQuestCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess1);
	void Update_Tab_Button_Bangs(class FName InTab);
	void Update_Hero_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, class AFortPlayerController* FortPC, bool CombatSquadUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess2);
	void Update_Squad_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, class FName EmptyTabId, bool ExpeditionSquadUnseen, class AFortPlayerController* FortPC, bool DefenderSquadUnseen, bool AttributeSquadUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_TotalUnseenExpeditionsForTab_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BooleanOR_ReturnValue2, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess2);
	void HandleTabSelected(class FName TabName, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UCommonButton* LocalTab, class FName LocalTabId, bool CallFunc_EqualEqual_NameName_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess, class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_TextToUpper_ReturnValue);
	void OnActivated();
	void CustomEvent(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void OnHomebaseInventoryUpdated();
	void HandleRefreshSkillTreeNodePage();
	void Destruct();
	void OnQuestSeen_Event_0(class UFortQuestItem* Quest);
	void SquadSlotMarkedAsSeen_Event_0();
	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void ExecuteUbergraph_MainTabsScreenNew(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RemoveTab_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* K2Node_CustomEvent_Quest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsMobileApp_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName K2Node_Event_TabNameID1, class FName K2Node_Event_TabNameID, class UCommonButton* K2Node_Event_TabButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
