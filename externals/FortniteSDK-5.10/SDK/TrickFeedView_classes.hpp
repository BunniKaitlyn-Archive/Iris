#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x318 - 0x280)
// WidgetBlueprintGeneratedClass TrickFeedView.TrickFeedView_C
class UTrickFeedView_C : public UAthenaTrickFeedBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TriangleFlare;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      MultiplierBump;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Crit;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Multiplier;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatsData;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TotalScore;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                      TrickList;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RemoveInfoTimer;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsCritical;                                        // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E11[0x3];                                     
	int32                                        CritThreshold;                                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAmazing;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E12[0x3];                                     
	int32                                        AmazingThreshold;                                  // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEVCritDisplay;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DEVFinalDisplay;                                   // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E13[0x6];                                     
	TArray<class FText>                          OkTricksDescription;                               // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          NiceTricksDescription;                             // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          AmazingTricksDescription;                          // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TrickFeedView_C");
		return Clss;
	}

	void GetCalloutText(class FText* Callout, bool Temp_bool_Variable, bool Temp_bool_Variable1, TArray<class FText>& K2Node_Select_Default, TArray<class FText>& K2Node_Select1_Default, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_Array_Get_Item);
	void UpdateAirDistanceHeight(float AirTime, float Distance, float Height);
	void TrickStarted();
	void TrickComplete();
	void TrickFailed();
	void HIdeTrickUI();
	void AddTrick(enum class EVehicleTrickType TrickType, class FText& TrickName);
	void UpdateScore(int32 TotalScore);
	void UpdateMultiplier(int32 Multiplier);
	void SimulateTrick();
	void PreConstruct(bool IsDesignTime);
	void CritStyleEvent(bool IsCritical);
	void ToggleCompleteStyle(bool IsComplete);
	void EventTrickCompliment();
	void ExecuteUbergraph_TrickFeedView(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, bool Temp_bool_Variable4, bool Temp_bool_Variable5, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, float K2Node_Event_AirTime, float K2Node_Event_Distance, float K2Node_Event_Height, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Conv_FloatToText_ReturnValue2, int32 Temp_int_Variable1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EVehicleTrickType K2Node_Event_TrickType, class FText K2Node_Event_TrickName, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UTrickEntry_C* K2Node_DynamicCast_AsTrick_Entry, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_TotalScore, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Multiplier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, bool Temp_bool_Variable6, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isCritical, int32 K2Node_Select_Default, const struct FVector2D& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, class UObject* K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FLinearColor& Temp_struct_Variable5, bool Temp_bool_Variable7, const struct FLinearColor& K2Node_Select4_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable8, enum class ESlateVisibility K2Node_Select5_Default, bool K2Node_CustomEvent_isComplete, class UObject* K2Node_Select6_Default, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings1, int32 K2Node_Select7_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, const struct FSlateColor& K2Node_MakeStruct_SlateColor4, const struct FSlateColor& K2Node_Select8_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, class UUserWidget* CallFunc_BP_CreateEntryOfClass_ReturnValue, class UCalloutEntry_C* K2Node_DynamicCast_AsCallout_Entry, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_GetCalloutText_Callout, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
