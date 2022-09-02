#pragma once
#include <SDK.hpp>
#include <string>

namespace iris {

namespace hooks {

void Listen();
void Replication();
void Crash();
void Kick();
void Login();
void Event();

}

class app {
public:
    SDK::UEngine* GEngine;
    SDK::UWorld** GWorld;

    app();
};

}

extern iris::app* g_App;
