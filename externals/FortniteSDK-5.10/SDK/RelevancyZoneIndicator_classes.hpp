#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x488 - 0x488)
// BlueprintGeneratedClass RelevancyZoneIndicator.RelevancyZoneIndicator_C
class ARelevancyZoneIndicator_C : public AFortRelevancyZoneIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RelevancyZoneIndicator_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
