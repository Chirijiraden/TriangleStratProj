#pragma once
#include "CoreMinimal.h"
#include "ECorrectParamType.generated.h"

UENUM(BlueprintType)
enum class ECorrectParamType : uint8 {
    PERMANENT,
    IMMEDIATE_ONLY,
    BUFF,
    DEBUFF,
};

