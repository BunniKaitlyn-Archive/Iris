#include <windows.h>
#include "app.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        g_App = new iris::app;
    }

    return TRUE;
}
