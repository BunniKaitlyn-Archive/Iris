#include "app.h"
#include "util.h"
#include <MinHook.h>
#include <cinttypes>

// Patches out the 0x00000008 crash.
uint8_t (*Unknown00)(void*) = nullptr;
uint8_t Unknown00Hook(void* thisptr) {
    return 0;
}

// Patches out the 0x00000494 crash. (some weird crash in NetDebugWidget)
uint64_t (*Unknown01)(void*) = nullptr;
uint64_t Unknown01Hook(void* thisptr) {
    return 0;
}

void iris::hooks::Crash() {
    PBYTE pUnknown00Address = reinterpret_cast<PBYTE>(util::GetBaseAddress() + 0x2AF8770);
    PBYTE pUnknown01Address = reinterpret_cast<PBYTE>(util::GetBaseAddress() + 0x6E0AD0);

    MH_CreateHook(pUnknown00Address, reinterpret_cast<void*>(Unknown00Hook), reinterpret_cast<PVOID*>(&Unknown00));
    MH_EnableHook(pUnknown00Address);

    MH_CreateHook(pUnknown01Address, reinterpret_cast<void*>(Unknown01Hook), reinterpret_cast<PVOID*>(&Unknown01));
    MH_EnableHook(pUnknown01Address);
}
