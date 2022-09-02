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

// 0x88 (0x88 - 0x0)
// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
struct UActiveModifierItemHUD_C_AssignIcon_Params
{
public:
	struct FSlateBrush                           InIconSlateBrush;                                  // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
