#pragma once
#include "CoreMinimal.h"
#include "EAIMoveType.generated.h"

UENUM(BlueprintType)
enum class EAIMoveType : uint8 {
    Shortest,
    Safety,
};

