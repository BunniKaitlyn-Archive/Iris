#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x68 - 0x68)
// BlueprintGeneratedClass PlayerTrapHealingSourceModCalculation.PlayerTrapHealingSourceModCalculation_C
class UPlayerTrapHealingSourceModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerTrapHealingSourceModCalculation_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif