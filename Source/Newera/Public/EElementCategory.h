#pragma once
#include "CoreMinimal.h"
#include "EElementCategory.generated.h"

UENUM(BlueprintType)
enum class EElementCategory : uint8 {
    NONE,
    PHYSICAL,
    ELEMENT,
    ALL,
};

