#include "app.h"
#include "util.h"
#include "offsets.h"
#include <MinHook.h>

// Self notes:
// - To get RVAs to functions, simply open IDA, get function address and grab HEADER address. <function address> - <HEADER address>

iris::app::app() {
    util::InitConsole();
    SDK::InitGObjects();

    srand(time(0));

    printf("Welcome to Iris!\n");

    GEngine = *reinterpret_cast<SDK::UEngine**>(util::GetBaseAddress() + offsets::GEngine);
    if (GEngine) {
        printf("GEngine is %s @ %p\n", GEngine->GetFullName().c_str(), GEngine);
    }

    GWorld = reinterpret_cast<SDK::UWorld**>(util::GetBaseAddress() + offsets::GWorld);
    if (GWorld) {
        printf("GWorld is %s @ %p\n", (*GWorld)->GetFullName().c_str(), *GWorld);
    }

    printf("Initializing MinHook...\n");

    MH_Initialize();

    printf("Initialized MinHook!\n");

    printf("Installing hooks...\n");

    hooks::Listen();
    hooks::Replication();
    hooks::Crash();
    hooks::Kick();
    hooks::Login();
    hooks::Event();
    hooks::Ability();

    *reinterpret_cast<bool*>(util::GetBaseAddress() + 0x5141764) = false; // GIsClient

    printf("Installed hooks!\n");
}

iris::app* g_App = nullptr;
