#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Class CoreUObject.Object
class UObject
{
public:
	static class TUObjectArray*                  GObjects;                                          // (0x00[0x00])
	void*                                        Vft;                                               // (0x00[0x08])
	int32                                        Flags;                                             // (0x08[0x04])
	int32                                        Index;                                             // (0x0C[0x04])
	class UClass*                                Class;                                             // (0x10[0x08])
	class FName                                  Name;                                              // (0x18[0x08])
	class UObject*                               Outer;                                             // (0x20[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Object");
		return Clss;
	}


	bool HasTypeFlag(EClassCastFlags TypeFlag) const;

	bool IsDefaultObject() const
	{
		return (Flags & 0x10) == 0x10;
	}


	std::string GetName() const;

	std::string GetFullName() const;

	template<typename UEType = UObject>
	static UEType* FindObject(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		for (int i = 0; i < GObjects->Num(); ++i)
		{
			UObject* Object = GObjects->GetByIndex(i);
	
			if (!Object)
				continue;
			
			if (Object->HasTypeFlag(RequiredType) && Object->GetFullName() == FullName)
			{
				return static_cast<UEType*>(Object);
			}
		}

		return nullptr;
	}


	template<typename UEType = UObject>
	static UEType* FindObjectFast(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		for (int i = 0; i < GObjects->Num(); ++i)
		{
			UObject* Object = GObjects->GetByIndex(i);
	
			if (!Object)
				continue;
			
			if (Object->HasTypeFlag(RequiredType) && Object->GetName() == Name)
			{
				return static_cast<UEType*>(Object);
			}
		}

		return nullptr;
	}


	static class UClass* FindClass(const std::string& ClassFullName)
	{
		return FindObject<class UClass>(ClassFullName, EClassCastFlags::UClass);
	}


	static class UClass* FindClassFast(const std::string& ClassName)
	{
		return FindObjectFast<class UClass>(ClassName, EClassCastFlags::UClass);
	}


	bool IsA(class UClass* Clss) const;

	inline void ProcessEvent(class UFunction* Function, void* Parms) const
	{
		return GetVFunction<void(*)(const UObject*, class UFunction*, void*)>(this, 0x40 /*0x179CF80*/)(this, Function, Parms);
	}

	void ExecuteUbergraph(int32 EntryPoint);
};

// 0x0 (0x28 - 0x28)
// Class CoreUObject.Interface
class UInterface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Interface");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class CoreUObject.Package
class UPackage : public UObject
{
public:
	uint8                                        Pad_82[0x68];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Package");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class CoreUObject.Field
class UField : public UObject
{
public:
	class UField*                                Next;                                              // (0x28[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Field");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class CoreUObject.Struct
class UStruct : public UField
{
public:
	class UStruct*                               Super;                                             // (0x30[0x08])
	class UField*                                Children;                                          // (0x38[0x08])
	int32                                        Size;                                              // (0x40[0x04])
	uint8                                        Pad_83[0x44];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Struct");
		return Clss;
	}

};

// 0x170 (0x1F8 - 0x88)
// Class CoreUObject.Class
class UClass : public UStruct
{
public:
	uint8                                        Pad_84[0x30];                                      
	enum class EClassCastFlags                   CastFlags;                                         // (0xB8[0x08])
	uint8                                        Pad_85[0x38];                                      
	class UObject*                               DefaultObject;                                     // (0xF8[0x08])
	uint8                                        Pad_86[0xF8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Class");
		return Clss;
	}

	inline UObject* CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, 101)(this);
	}

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}


	class UFunction* GetFunction(const std::string& ClassName, const std::string& FuncName);
};

// 0x38 (0x60 - 0x28)
// Class CoreUObject.GCObjectReferencer
class UGCObjectReferencer : public UObject
{
public:
	uint8                                        Pad_87[0x38];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCObjectReferencer");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class CoreUObject.TextBuffer
class UTextBuffer : public UObject
{
public:
	uint8                                        Pad_88[0x28];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBuffer");
		return Clss;
	}

};

// 0x10 (0x98 - 0x88)
// Class CoreUObject.ScriptStruct
class UScriptStruct : public UStruct
{
public:
	uint8                                        Pad_89[0x10];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScriptStruct");
		return Clss;
	}

};

// 0x30 (0xB8 - 0x88)
// Class CoreUObject.Function
class UFunction : public UStruct
{
public:
	uint32                                       FunctionFlags;                                     // (0x88[0x08])
	uint8                                        Pad_8A[0x28];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Function");
		return Clss;
	}

};

// 0x0 (0xB8 - 0xB8)
// Class CoreUObject.DelegateFunction
class UDelegateFunction : public UFunction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DelegateFunction");
		return Clss;
	}

};

// 0x68 (0x260 - 0x1F8)
// Class CoreUObject.DynamicClass
class UDynamicClass : public UClass
{
public:
	uint8                                        Pad_8B[0x68];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicClass");
		return Clss;
	}

};

// 0xB8 (0xE0 - 0x28)
// Class CoreUObject.PackageMap
class UPackageMap : public UObject
{
public:
	uint8                                        Pad_8C[0xB8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PackageMap");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class CoreUObject.Enum
class UEnum : public UField
{
public:
	uint8                                        Pad_8D[0x10];                                      
	class TArray<class TPair<class FName, int64>> Names;                                             // (0x40[0x0C])
	uint8                                        Pad_8E[0x14];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Enum");
		return Clss;
	}

};

// 0x40 (0x70 - 0x30)
// Class CoreUObject.Property
class UProperty : public UField
{
public:
	uint8                                        Pad_8F[0x4];                                       
	int32                                        ElementSize;                                       // (0x34[0x04])
	uint64                                       PropertyFlags;                                     // (0x38[0x08])
	uint8                                        Pad_90[0x4];                                       
	int32                                        Offset;                                            // (0x44[0x04])
	uint8                                        Pad_91[0x28];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Property");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class CoreUObject.EnumProperty
class UEnumProperty : public UProperty
{
public:
	uint8                                        Pad_92[0x10];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnumProperty");
		return Clss;
	}

};

// 0x1B8 (0x3B0 - 0x1F8)
// Class CoreUObject.LinkerPlaceholderClass
class ULinkerPlaceholderClass : public UClass
{
public:
	uint8                                        Pad_93[0x1B8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinkerPlaceholderClass");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class CoreUObject.LinkerPlaceholderExportObject
class ULinkerPlaceholderExportObject : public UObject
{
public:
	uint8                                        Pad_94[0xC8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinkerPlaceholderExportObject");
		return Clss;
	}

};

// 0x1B8 (0x270 - 0xB8)
// Class CoreUObject.LinkerPlaceholderFunction
class ULinkerPlaceholderFunction : public UFunction
{
public:
	uint8                                        Pad_95[0x1B8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinkerPlaceholderFunction");
		return Clss;
	}

};

// 0xA0 (0xC8 - 0x28)
// Class CoreUObject.MetaData
class UMetaData : public UObject
{
public:
	uint8                                        Pad_96[0xA0];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaData");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class CoreUObject.ObjectRedirector
class UObjectRedirector : public UObject
{
public:
	uint8                                        Pad_97[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectRedirector");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ArrayProperty
class UArrayProperty : public UProperty
{
public:
	class UProperty*                             InnerProperty;                                     // (0x70[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ArrayProperty");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ObjectPropertyBase
class UObjectPropertyBase : public UProperty
{
public:
	uint8                                        Pad_98[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectPropertyBase");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.BoolProperty
class UBoolProperty : public UProperty
{
public:
	uint8                                        FieldSize;                                         // (0x70[0x01])
	uint8                                        ByteOffset;                                        // (0x71[0x01])
	uint8                                        ByteMask;                                          // (0x72[0x01])
	uint8                                        FieldMask;                                         // (0x73[0x01])
	uint8                                        Pad_99[0x4];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoolProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.NumericProperty
class UNumericProperty : public UProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NumericProperty");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.ByteProperty
class UByteProperty : public UNumericProperty
{
public:
	class UEnum*                                 Enum;                                              // (0x70[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ByteProperty");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.ObjectProperty
class UObjectProperty : public UObjectPropertyBase
{
public:
	class UClass*                                PropertyClass;                                     // (0x70[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectProperty");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class CoreUObject.ClassProperty
class UClassProperty : public UObjectProperty
{
public:
	class UClass*                                MetaClass;                                         // (0x78[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassProperty");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.DelegateProperty
class UDelegateProperty : public UProperty
{
public:
	uint8                                        Pad_9A[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DelegateProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.DoubleProperty
class UDoubleProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DoubleProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.FloatProperty
class UFloatProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FloatProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.IntProperty
class UIntProperty : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IntProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int16Property
class UInt16Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Int16Property");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int64Property
class UInt64Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Int64Property");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.Int8Property
class UInt8Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Int8Property");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.InterfaceProperty
class UInterfaceProperty : public UProperty
{
public:
	uint8                                        Pad_9B[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InterfaceProperty");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.LazyObjectProperty
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LazyObjectProperty");
		return Clss;
	}

};

// 0x38 (0xA8 - 0x70)
// Class CoreUObject.MapProperty
class UMapProperty : public UProperty
{
public:
	class UProperty*                             KeyProperty;                                       // (0x70[0x08])
	class UProperty*                             ValueProperty;                                     // (0x78[0x08])
	uint8                                        Pad_9C[0x28];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MapProperty");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.MulticastDelegateProperty
class UMulticastDelegateProperty : public UProperty
{
public:
	uint8                                        Pad_9D[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulticastDelegateProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.NameProperty
class UNameProperty : public UProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NameProperty");
		return Clss;
	}

};

// 0x28 (0x98 - 0x70)
// Class CoreUObject.SetProperty
class USetProperty : public UProperty
{
public:
	class UProperty*                             UnderlayingProperty;                               // (0x70[0x08])
	class UEnum*                                 Enum;                                              // (0x78[0x08])
	uint8                                        Pad_9E[0x18];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SetProperty");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.SoftObjectProperty
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoftObjectProperty");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class CoreUObject.SoftClassProperty
class USoftClassProperty : public USoftObjectProperty
{
public:
	uint8                                        Pad_9F[0x8];                                       

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoftClassProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.StrProperty
class UStrProperty : public UProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StrProperty");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class CoreUObject.StructProperty
class UStructProperty : public UProperty
{
public:
	class UStruct*                               Struct;                                            // (0x70[0x08])

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StructProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt16Property
class UUInt16Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UInt16Property");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt32Property
class UUInt32Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UInt32Property");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.UInt64Property
class UUInt64Property : public UNumericProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UInt64Property");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class CoreUObject.WeakObjectProperty
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeakObjectProperty");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class CoreUObject.TextProperty
class UTextProperty : public UProperty
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextProperty");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
