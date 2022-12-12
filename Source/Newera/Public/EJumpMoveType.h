#pragma once
#include "CoreMinimal.h"
#include "EJumpMoveType.generated.h"

UENUM(BlueprintType)
enum class EJumpMoveType : uint8 {
    NONE,
    UP_DEFAULT,
    DOWN_DEFAULT,
    UP_SMALL = 0x4,
    DOWN_SMALL = 0x8,
    TROLLEY = 0x10,
    DOWN_DEFAULT_3 = 0x20,
    DOWN_DEFAULT_4 = 0x40,
    DOWN_DEFAULT_5 = 0x80,
    DEFAULT = 0x3,
    SMALL = 0xC,
    EJumpMoveType_MAX = 0x81,
};

