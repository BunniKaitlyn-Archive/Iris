#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x420 - 0x420)
// BlueprintGeneratedClass GCN_Commando_Warcry.GCN_Commando_Warcry_C
class AGCN_Commando_Warcry_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Commando_Warcry_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
