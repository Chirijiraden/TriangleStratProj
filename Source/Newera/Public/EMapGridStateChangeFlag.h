#pragma once
#include "CoreMinimal.h"
#include "EMapGridStateChangeFlag.generated.h"

UENUM(BlueprintType)
enum class EMapGridStateChangeFlag : uint8 {
    NONE,
    FREEZABLE = 0x2,
    PUDDLABLE = 0x4,
    SNOWABLE = 0x8,
    ALL = 0xFF,
};

