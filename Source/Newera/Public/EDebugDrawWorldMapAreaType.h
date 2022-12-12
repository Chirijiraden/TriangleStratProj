#pragma once
#include "CoreMinimal.h"
#include "EDebugDrawWorldMapAreaType.generated.h"

UENUM(BlueprintType)
enum class EDebugDrawWorldMapAreaType : uint8 {
    EVENTMARK,
    CAMERAMOVE_START,
    CAMERAMOVE_CONTINUE,
};

