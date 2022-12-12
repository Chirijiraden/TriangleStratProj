#pragma once
#include "CoreMinimal.h"
#include "ETrapType.generated.h"

UENUM(BlueprintType)
enum class ETrapType : uint8 {
    Damage,
    Spring,
    MAX,
};

