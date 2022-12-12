#pragma once
#include "CoreMinimal.h"
#include "EFadingPriority.generated.h"

UENUM(BlueprintType)
enum class EFadingPriority : uint8 {
    TopMost,
    UIBackGround,
    EventSkip,
    Max,
};

