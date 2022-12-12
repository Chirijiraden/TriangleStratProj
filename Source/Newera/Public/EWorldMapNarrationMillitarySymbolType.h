#pragma once
#include "CoreMinimal.h"
#include "EWorldMapNarrationMillitarySymbolType.generated.h"

UENUM(BlueprintType)
enum class EWorldMapNarrationMillitarySymbolType : uint8 {
    INVALID,
    RED,
    BLUE,
    YELLOW,
    WHITE,
    GREEN,
    SELF = 0x2,
    FRIEND = 0x5,
    ENEMY = 0x1,
    EWorldMapNarrationMillitarySymbolType_MAX = 0x6,
};

