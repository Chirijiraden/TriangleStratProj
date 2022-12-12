#pragma once
#include "CoreMinimal.h"
#include "EFaithType.generated.h"

UENUM(BlueprintType)
enum class EFaithType : uint8 {
    NONE,
    FREEDOM,
    BENEFIT,
    MORAL,
    MAX,
};

