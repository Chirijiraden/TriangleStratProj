#pragma once
#include "CoreMinimal.h"
#include "EBeriefPointType.generated.h"

UENUM(BlueprintType)
enum class EBeriefPointType : uint8 {
    IMMEDIATE,
    ACCUMULATION,
};

