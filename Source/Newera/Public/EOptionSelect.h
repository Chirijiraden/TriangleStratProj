#pragma once
#include "CoreMinimal.h"
#include "EOptionSelect.generated.h"

UENUM(BlueprintType)
enum class EOptionSelect : uint8 {
    ALTERNATIVE,
    DRUM_ROLL,
    SLIDER,
    INPUT,
};

