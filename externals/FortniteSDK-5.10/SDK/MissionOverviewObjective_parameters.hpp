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

// 0x0 (0x0 - 0x0)
// Function MissionOverviewObjective.MissionOverviewObjective_C.Construct
struct UMissionOverviewObjective_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function MissionOverviewObjective.MissionOverviewObjective_C.ExecuteUbergraph_MissionOverviewObjective
struct UMissionOverviewObjective_C_ExecuteUbergraph_MissionOverviewObjective_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519E[0x4];                                     
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
