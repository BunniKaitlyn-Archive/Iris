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
// BlueprintGeneratedClass PlayerTrapDiceCritChanceModCalculation.PlayerTrapDiceCritChanceModCalculation_C
class UPlayerTrapDiceCritChanceModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerTrapDiceCritChanceModCalculation_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
