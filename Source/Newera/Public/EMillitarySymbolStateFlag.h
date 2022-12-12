#pragma once
#include "CoreMinimal.h"
#include "EMillitarySymbolStateFlag.generated.h"

UENUM(BlueprintType)
enum class EMillitarySymbolStateFlag : uint8 {
    NONE,
    VISIBLE_MAIN,
    VISIBLE_FLAG,
    ALL = 0xFFFF,
};

