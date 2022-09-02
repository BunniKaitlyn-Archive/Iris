#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8B0 - 0x8B0)
// WidgetBlueprintGeneratedClass RewardOrVerticalWidget.RewardOrVerticalWidget_C
class URewardOrVerticalWidget_C : public UFortRewardInfoButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardOrVerticalWidget_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
