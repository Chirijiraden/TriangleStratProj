#pragma once
#include "CoreMinimal.h"
#include "EDisplayFlipbookFlag.generated.h"

UENUM(BlueprintType)
enum class EDisplayFlipbookFlag : uint8 {
    NONE,
    EFFECT,
    SE,
    VOICE = 0x4,
    DRAW_SOCKET_INFO = 0x8,
    ADDITIONAL_UNIT = 0x10,
    ADDITIONAL_UNIT_DIRECTION_RANDOMIZE = 0x20,
    WEAPON_OFF = 0x40,
    ALL = 0xFF,
};

