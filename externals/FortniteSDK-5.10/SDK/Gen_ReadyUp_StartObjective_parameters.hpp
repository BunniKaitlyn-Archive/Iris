#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
struct UGen_ReadyUp_StartObjective_C_SetParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4232[0x4];                                     
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  InteractText;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BluGloMissionActivationQty;                        // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4233[0x4];                                     
	class UGen_ReadyUp_StartObjective_C*         ThisObject;                                        // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
struct UGen_ReadyUp_StartObjective_C_BreakParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4234[0x4];                                     
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	class FText                                  InteractText;                                      // 0x18(0x18)(Parm, OutParm)
	int32                                        BluGloMissionActivationQty;                        // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
