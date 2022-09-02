#include "app.h"
#include "util.h"
#include "offsets.h"
#include <MinHook.h>
#include <cinttypes>

int32_t (*ServerReplicateActors)(SDK::UReplicationGraph*, float) = nullptr;

void (*TickFlush)(SDK::UNetDriver*, float) = nullptr;
void TickFlushHook(SDK::UNetDriver* thisptr, float DeltaSeconds) {
    if (thisptr->ReplicationDriver && !thisptr->ServerConnection && thisptr->ClientConnections.Num() > 0 && !thisptr->ClientConnections[0]->InternalAck) {
        ServerReplicateActors(static_cast<SDK::UReplicationGraph*>(thisptr->ReplicationDriver), DeltaSeconds);
    }

    TickFlush(thisptr, DeltaSeconds);
}

// I HATE THIS "FIX"
void (*GetPlayerViewPoint)(SDK::APlayerController*, SDK::FVector&, SDK::FRotator&) = nullptr;
void GetPlayerViewPointHook(SDK::APlayerController* thisptr, SDK::FVector& Location, SDK::FRotator& Rotation) {
    if (thisptr) {
        SDK::AActor* ViewTarget = thisptr->GetViewTarget();
        if (ViewTarget) {
            Location = ViewTarget->K2_GetActorLocation();
            Rotation = ViewTarget->K2_GetActorRotation();
        }
    } else {
        GetPlayerViewPoint(thisptr, Location, Rotation);
    }
}

void iris::hooks::Replication() {
    ServerReplicateActors = decltype(ServerReplicateActors)(util::GetBaseAddress() + offsets::UReplicationGraph::ServerReplicateActors);

    PBYTE pTickFlushAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UNetDriver::TickFlush);

    MH_CreateHook(pTickFlushAddress, reinterpret_cast<void*>(TickFlushHook), reinterpret_cast<PVOID*>(&TickFlush));
    MH_EnableHook(pTickFlushAddress);

    PBYTE pGetPlayerViewPointAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::APlayerController::GetPlayerViewPoint);

    MH_CreateHook(pGetPlayerViewPointAddress, reinterpret_cast<void*>(GetPlayerViewPointHook), reinterpret_cast<PVOID*>(&GetPlayerViewPoint));
    MH_EnableHook(pGetPlayerViewPointAddress);
}
