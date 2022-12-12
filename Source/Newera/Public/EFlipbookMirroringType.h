#pragma once
#include "CoreMinimal.h"
#include "EFlipbookMirroringType.generated.h"

UENUM(BlueprintType)
enum class EFlipbookMirroringType : uint8 {
    NONE,
    PRE_MIRRORED,
    DYNAMIC_MIRRORED,
};

