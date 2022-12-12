#pragma once
#include "CoreMinimal.h"
#include "EDamageEvaluationType.generated.h"

UENUM(BlueprintType)
enum class EDamageEvaluationType : uint8 {
    MELLE,
    OTHER,
    MAX,
};

