#pragma once
#include "CoreMinimal.h"
#include "EndingType.generated.h"

UENUM(BlueprintType)
enum class EndingType : uint8 {
    None,
    BenedictEnd,
    Roland,
    Frederica,
    Serenoa,
};

