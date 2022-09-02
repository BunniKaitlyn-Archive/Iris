#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD00 - 0xD00)
// BlueprintGeneratedClass LF_SurvivorShelterIndoor.LF_SurvivorShelterIndoor_C
class ALF_SurvivorShelterIndoor_C : public ABuildingFoundation5x5
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LF_SurvivorShelterIndoor_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
