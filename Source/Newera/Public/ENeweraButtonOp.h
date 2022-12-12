#pragma once
#include "CoreMinimal.h"
#include "ENeweraButtonOp.generated.h"

UENUM(BlueprintType)
enum class ENeweraButtonOp : uint8 {
    None,
    OR,
    AND,
    OR_MULTIPLE,
};

