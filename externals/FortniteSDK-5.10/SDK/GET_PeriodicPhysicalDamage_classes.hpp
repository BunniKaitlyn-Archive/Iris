#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x638 - 0x638)
// BlueprintGeneratedClass GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GET_PeriodicPhysicalDamage_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
