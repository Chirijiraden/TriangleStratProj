#pragma once
#include "CoreMinimal.h"
#include "EEmblemType.generated.h"

UENUM(BlueprintType)
enum class EEmblemType : uint8 {
    EMBLEM_A0,
    EMBLEM_B0,
    EMBLEM_C0,
    EMBLEM_A1,
    EMBLEM_A2,
    EMBLEM_A3,
    EMBLEM_MAX UMETA(Hidden),
};

