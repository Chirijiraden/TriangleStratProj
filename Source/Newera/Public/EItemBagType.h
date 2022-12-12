#pragma once
#include "CoreMinimal.h"
#include "EItemBagType.generated.h"

UENUM(BlueprintType)
enum class EItemBagType : uint8 {
    NONE,
    NORMAL,
    RARE,
    SUPER_RARE,
    TREASURE,
};

