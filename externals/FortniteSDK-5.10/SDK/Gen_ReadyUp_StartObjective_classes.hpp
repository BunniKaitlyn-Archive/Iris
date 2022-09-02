#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x5C - 0x28)
// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
class UGen_ReadyUp_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                        ReadyUpTimerLength;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4235[0x4];                                     
	class FText                                  InteractText;                                      // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        BluGloMissionActivationQty;                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Gen_ReadyUp_StartObjective_C");
		return Clss;
	}

	void SetParams(float ReadyUpTimerLength, TArray<struct FTransform>& InteractSpawnLocation, class FText InteractText, int32 BluGloMissionActivationQty, class UGen_ReadyUp_StartObjective_C** ThisObject);
	void BreakParams(float* ReadyUpTimerLength, TArray<struct FTransform>* InteractSpawnLocation, class FText* InteractText, int32* BluGloMissionActivationQty);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
