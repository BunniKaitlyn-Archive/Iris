#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Targeting3PCamera_MidRange_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
