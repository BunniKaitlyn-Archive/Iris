#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF8 - 0xF0)
// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	uint8                                        Pad_2BE4[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EasyAntiCheatNetComponent");
		return Clss;
	}

	void ServerMessage(TArray<uint8>& MESSAGE);
	void ClientMessage(TArray<uint8>& MESSAGE);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
