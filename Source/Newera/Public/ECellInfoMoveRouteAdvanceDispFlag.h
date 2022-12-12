#pragma once
#include "CoreMinimal.h"
#include "ECellInfoMoveRouteAdvanceDispFlag.generated.h"

UENUM()
enum class ECellInfoMoveRouteAdvanceDispFlag : uint16 {
    NONE,
    UP,
    RIGHT_UP,
    RIGHT = 0x4,
    RIGHT_DOWN = 0x8,
    DOWN = 0x10,
    LEFT_DOWN = 0x20,
    LEFT = 0x40,
    LEFT_UP = 0x80,
    ALL = 0xFFFF,
};

