#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C
class UCircleAroundPrimaryAssignmentGoals_Blaster_C : public UFortAIGoalProvider_EnvQuery
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_Blaster_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
