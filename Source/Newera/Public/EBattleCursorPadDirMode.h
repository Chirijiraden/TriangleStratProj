#pragma once
#include "CoreMinimal.h"
#include "EBattleCursorPadDirMode.generated.h"

UENUM(BlueprintType)
enum class EBattleCursorPadDirMode : uint8 {
    NONE,
    CLOCKWISE,
    COUNTERCLOCKWISE,
};

