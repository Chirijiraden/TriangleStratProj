#pragma once
#include "CoreMinimal.h"
#include "EDebugWorldMapFlags.generated.h"

UENUM(BlueprintType)
enum class EDebugWorldMapFlags : uint8 {
    DRAW_AREA_EVENTMARK,
    DRAW_AREA_CAMERAMOVE_START,
    DRAW_AREA_CAMERAMOVE_CONTINUE,
    FORCE_POP_ALL_EVENTMARK,
    DebugEnd,
};

