#pragma once
#include "CoreMinimal.h"
#include "EBalloonType.generated.h"

UENUM(BlueprintType)
enum class EBalloonType : uint8 {
    NORMAL,
    SHARP,
    CLOUD,
    MAX,
};

