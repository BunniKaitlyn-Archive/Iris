#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D8 - 0x3A0)
// Class Qos.QosBeaconClient
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_6B[0x38];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosBeaconClient");
		return Clss;
	}

	void ServerQosRequest(const class FString& InSessionId);
	void ClientQosResponse(enum class EQosResponseType Response);
};

// 0x10 (0x360 - 0x350)
// Class Qos.QosBeaconHost
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_6C[0x10];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosBeaconHost");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class Qos.QosEvaluator
class UQosEvaluator : public UObject
{
public:
	struct FQosSearchPass                        CurrentSearchPass;                                 // 0x28(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6D[0x40];                                      
	int32                                        ControllerId;                                      // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInProgress;                                       // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCancelOperation;                                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6E[0x2];                                       
	TArray<struct FQosRegionInfo>                Datacenters;                                       // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6F[0x28];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosEvaluator");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class Qos.QosRegionManager
class UQosRegionManager : public UObject
{
public:
	bool                                         bUseOldQosServers;                                 // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_70[0x3];                                       
	int32                                        NumTestsPerRegion;                                 // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PingTimeout;                                       // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_71[0x4];                                       
	TArray<struct FQosDatacenterInfo>            Datacenters;                                       // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FDateTime                             LastCheckTimestamp;                                // 0x48(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                         Evaluator;                                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EQosCompletionResult              QosEvalResult;                                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_72[0x7];                                       
	TArray<struct FQosRegionInfo>                RegionOptions;                                     // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                ForceRegionId;                                     // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRegionForcedViaCommandline;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_73[0x7];                                       
	class FString                                SelectedRegionId;                                  // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_74[0x20];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosRegionManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
