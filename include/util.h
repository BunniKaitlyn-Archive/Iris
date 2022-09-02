#pragma once
#include <windows.h>
#include <psapi.h>
#include <cstdio>
#include <cinttypes>

namespace iris {

class util {
private:
    static bool MaskCompare(PVOID pBuffer, LPCSTR lpPattern, LPCSTR lpMask) {
        for (PBYTE value = static_cast<PBYTE>(pBuffer); *lpMask; ++lpPattern, ++lpMask, ++value) {
            if (*lpMask == 'x' && *reinterpret_cast<LPCBYTE>(lpPattern) != *value) {
                return false;
            }
        }

        return true;
    }

    static PBYTE FindPattern(PVOID pBase, DWORD dwSize, LPCSTR lpPattern, LPCSTR lpMask) {
        dwSize -= static_cast<DWORD>(strlen(lpMask));

        for (uint64_t i = 0UL; i < dwSize; ++i) {
            PBYTE pAddress = static_cast<PBYTE>(pBase) + i;
            if (MaskCompare(pAddress, lpPattern, lpMask)) {
                return pAddress;
            }
        }

        return nullptr;
    }

public:
    static void InitConsole() {
        AllocConsole();

        FILE* pFile;
        freopen_s(&pFile, "CONOUT$", "w", stdout);
    }

    static uintptr_t GetBaseAddress() {
        return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
    }

    static void PatchCall(uintptr_t pBase, uintptr_t pAddress) {
        uintptr_t pCurrentBase = pBase + 1;
        uintptr_t pNewAddress = pAddress - pCurrentBase - 4;

        DWORD dwProtection;
        VirtualProtect(reinterpret_cast<void*>(pCurrentBase), 4, PAGE_EXECUTE_READWRITE, &dwProtection);

        memcpy(reinterpret_cast<void*>(pCurrentBase), &pNewAddress, 4);

        VirtualProtect(reinterpret_cast<void*>(pCurrentBase), 4, dwProtection, &dwProtection);
    }

    static PBYTE FindPattern(LPCSTR lpPattern, LPCSTR lpMask) {
        MODULEINFO info{};
        GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

        return FindPattern(info.lpBaseOfDll, info.SizeOfImage, lpPattern, lpMask);
    }
};

}
