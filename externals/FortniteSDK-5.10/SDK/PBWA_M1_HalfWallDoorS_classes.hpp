#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xCD0 - 0xCD0)
// BlueprintGeneratedClass PBWA_M1_HalfWallDoorS.PBWA_M1_HalfWallDoorS_C
class APBWA_M1_HalfWallDoorS_C : public ABuildingWall
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_M1_HalfWallDoorS_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif