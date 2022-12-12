#pragma once
#include "CoreMinimal.h"
#include "EDebugLogLevel.generated.h"

UENUM(BlueprintType)
enum class EDebugLogLevel : uint8 {
    NONE,
    ERROR_LEVEL,
    WARNING,
    LOG,
    DEBUG,
    VERBOSE,
    VERY_VERBOSE,
    EDebugLogLevelEnd,
};

