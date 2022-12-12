#pragma once
#include "CoreMinimal.h"
#include "EFlipbookUseType.generated.h"

UENUM(BlueprintType)
enum class EFlipbookUseType : uint8 {
    NONE,
    CHARACTER,
    WEAPON,
    HAND_LAMP,
    OTHER,
};

