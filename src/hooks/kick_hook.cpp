#include "app.h"
#include "util.h"
#include <MinHook.h>

bool (*VerifyProfile)(void*, void*) = nullptr;
bool VerifyProfileHook(void* thisptr, void* a2) {
    return false;
}

void iris::hooks::Kick() {
    PBYTE pVerifyProfileAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + 0xFB4E50);

    MH_CreateHook(pVerifyProfileAddress, reinterpret_cast<void*>(VerifyProfileHook), reinterpret_cast<PVOID*>(&VerifyProfile));
    MH_EnableHook(pVerifyProfileAddress);
}
