#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERuntimeGenerationType : uint8
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4,
};

enum class ENavCostDisplay : uint8
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3,
};

enum class ERecastPartitioning : uint8
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extent;                                            // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData
{
public:
	class FString                                AreaClassName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AreaID;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB7[0x4];                                     
	class UClass*                                AreaClass;                                         // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB8[0x10];                                    
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphEdge
struct FNavGraphEdge
{
public:
	uint8                                        Pad_1AB9[0x18];                                    
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags
{
public:
	uint8                                        bNavFlag0 : 1;                                     // Mask : 0x1 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag1 : 1;                                     // Mask : 0x2 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag2 : 1;                                     // Mask : 0x4 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag3 : 1;                                     // Mask : 0x8 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag4 : 1;                                     // Mask : 0x10 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag5 : 1;                                     // Mask : 0x20 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag6 : 1;                                     // Mask : 0x40 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag7 : 1;                                     // Mask : 0x80 0x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag8 : 1;                                     // Mask : 0x1 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag9 : 1;                                     // Mask : 0x2 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag10 : 1;                                    // Mask : 0x4 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag11 : 1;                                    // Mask : 0x8 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag12 : 1;                                    // Mask : 0x10 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag13 : 1;                                    // Mask : 0x20 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag14 : 1;                                    // Mask : 0x40 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag15 : 1;                                    // Mask : 0x80 0x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABA[0x2];                                     
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea
{
public:
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TravelCostOverride;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnteringCostOverride;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsExcluded : 1;                                   // Mask : 0x1 0x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTravelCost : 1;                           // Mask : 0x2 0x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideEnteringCost : 1;                         // Mask : 0x4 0x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABB[0x7];                                     
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
