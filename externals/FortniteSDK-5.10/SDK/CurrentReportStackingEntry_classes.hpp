#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x278 - 0x208)
// WidgetBlueprintGeneratedClass CurrentReportStackingEntry.CurrentReportStackingEntry_C
class UCurrentReportStackingEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Type;                                            // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Value;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlayerReportingStep              DisplayedStep;                                     // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D0[0x7];                                     
	class FText                                  TextValue;                                         // 0x230(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ReportedPlayerDisplayCategoryText;                 // 0x248(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ReportingReasonDisplayCategoryText;                // 0x260(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CurrentReportStackingEntry_C");
		return Clss;
	}

	void SetDisplayTextFields(enum class EPlayerReportingStep Temp_byte_Variable, class FText Temp_text_Variable, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText K2Node_Select_Default);
	void Construct();
	void InitStackingEntryFields(enum class EPlayerReportingStep DisplayedReportingStep, class FText DisplayText);
	void ExecuteUbergraph_CurrentReportStackingEntry(int32 EntryPoint, enum class EPlayerReportingStep K2Node_CustomEvent_DisplayedReportingStep, class FText K2Node_CustomEvent_DisplayText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
