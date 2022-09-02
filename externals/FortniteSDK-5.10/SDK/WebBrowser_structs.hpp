#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct WebBrowser.WebJSCallbackBase
struct FWebJSCallbackBase
{
public:
	uint8                                        Pad_2CA3[0x20];                                    
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSResponse
struct FWebJSResponse : public FWebJSCallbackBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSFunction
struct FWebJSFunction : public FWebJSCallbackBase
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
