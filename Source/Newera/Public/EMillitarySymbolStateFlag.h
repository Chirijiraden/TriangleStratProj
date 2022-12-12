#pragma once
#include "CoreMinimal.h"
#include "EMillitarySymbolStateFlag.generated.h"

UENUM()
enum class EMillitarySymbolStateFlag : uint16 {
    NONE,
    VISIBLE_MAIN,
    VISIBLE_FLAG,
    ALL = 0xFFFF,
};

