#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass GCN_GolfBall_Score.GCN_GolfBall_Score_C
class UGCN_GolfBall_Score_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_GolfBall_Score_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
