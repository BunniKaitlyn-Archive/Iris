#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class PurchaseFlow.PurchaseFlowJSBridge
class UPurchaseFlowJSBridge : public UObject
{
public:
	uint8                                        Pad_17F1[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PurchaseFlowJSBridge");
		return Clss;
	}

	void RequestClose(const class FString& CloseInfo);
	void RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
