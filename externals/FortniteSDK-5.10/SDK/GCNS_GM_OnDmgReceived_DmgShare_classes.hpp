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
// BlueprintGeneratedClass GCNS_GM_OnDmgReceived_DmgShare.GCNS_GM_OnDmgReceived_DmgShare_C
class UGCNS_GM_OnDmgReceived_DmgShare_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNS_GM_OnDmgReceived_DmgShare_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif