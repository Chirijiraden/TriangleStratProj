#pragma once
#include "CoreMinimal.h"
#include "EGridMoveOptionFlag.generated.h"

UENUM(BlueprintType)
enum class EGridMoveOptionFlag : uint8 {
    NONE,
    NO_ROTATE,
    INVISIBLE_ONEND,
    IGNORE_GRAVITY = 0x4,
    GIMMICK_SE_OFF = 0x8,
    DISABLE_PRIORITIZE_VIRTICAL_JUMP = 0x10,
    ALL = 0xFF,
};

