#pragma once
#include "CoreMinimal.h"
#include "EVoiceStatusType.generated.h"

UENUM(BlueprintType)
enum class EVoiceStatusType : uint8 {
    NONE,
    NORMAL,
    SICK,
    SUPPRESS = 0x4,
    STEALTH = 0x8,
    SILENT = 0x10,
    SLEEP = 0x20,
};

