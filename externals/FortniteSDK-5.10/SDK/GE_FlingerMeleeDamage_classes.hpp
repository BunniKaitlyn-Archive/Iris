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
// BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C
class UGE_FlingerMeleeDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GE_FlingerMeleeDamage_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
