#pragma once
#include <cinttypes>

namespace iris {

namespace offsets {

/* 5.10-CL-4240749 */
static const uint32_t GEngine = 0x534DB90;
static const uint32_t GWorld = 0x5350380;
static const uint32_t StaticLoadObject = 0x17C5220;

namespace UEngine {

/* 5.10-CL-4240749 */
static const uint32_t CreateNamedNetDriver = 0x27812F0;
static const uint32_t FindNamedNetDriver = 0x278BED0;
static const uint32_t LoadMap_Listen = 0x279B374;

}

namespace UNetDriver {

/* 5.10-CL-4240749 */
static const uint32_t SetWorld = 0x251A2D0;
static const uint32_t TickFlush = 0x251B7D0;

}

namespace UWorld {

/* 5.10-CL-4240749 */
static const uint32_t FindCollectionByType = 0x27E49D0;
static const uint32_t SetGameMode = 0x27F3810;
static const uint32_t SpawnActor = 0x24A3500;

}

namespace UIpNetDriver {

/* 5.10-CL-4240749 */
static const uint32_t InitListen = 0x409080;

}

namespace UReplicationGraph {

/* 5.10-CL-4240749 */
static const uint32_t ServerReplicateActors = 0x79D970;

}

namespace UNetConnection {

/* 5.10-CL-4240749 */
static const uint32_t SetClientLoginState = 0x2519130;

}

namespace APlayerController {

/* 5.10-CL-4240749 */
static const uint32_t GetPlayerViewPoint = 0x262A840;

}

namespace UAbilitySystemComponent {

/* 5.10-CL-4240749 */
static const uint32_t GiveAbility = 0x606860;
static const uint32_t InternalTryActivateAbility = 0x608010;
static const uint32_t TryActivateAbility = 0x61E1B0;

}

namespace UGameplayAbility {

/* 5.10-CL-4240749 */
static const uint32_t CanActivateAbility = 0x5F07C0;

}

namespace FQuat {

/* 5.10-CL-4240749 */
static const uint32_t Rotator = 0x15A2D00;

}

namespace ABuildingSMActor {

/* 5.10-CL-4240749 */
static const uint32_t ReplaceBuildingActor = 0xC8F250;

}

}

}
