#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x8D4 - 0x890)
// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
class UTimelineMarker_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x890(0x8)(Transient, DuplicateTransient)
	class UImage*                                MarkerIcon;                                        // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        RelativeTime;                                      // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortReplayEventType              EventType;                                         // 0x8A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4F08[0x3];                                     
	struct FSlateColor                           HoveredColor;                                      // 0x8A8(0x28)(Edit, BlueprintVisible)
	int32                                        EventIndex;                                        // 0x8D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimelineMarker_C");
		return Clss;
	}

	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void ExecuteUbergraph_TimelineMarker(int32 EntryPoint, enum class EFortReplayEventType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
