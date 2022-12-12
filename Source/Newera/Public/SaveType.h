#pragma once
#include "CoreMinimal.h"
#include "SaveType.generated.h"

UENUM(BlueprintType)
enum class SaveType : uint8 {
    Normal,
    Auto,
    Continue,
};

