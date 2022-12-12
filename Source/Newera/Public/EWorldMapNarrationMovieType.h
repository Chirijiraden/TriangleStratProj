#pragma once
#include "CoreMinimal.h"
#include "EWorldMapNarrationMovieType.generated.h"

UENUM(BlueprintType)
enum class EWorldMapNarrationMovieType : uint8 {
    INVALID,
    FLAG_FADEIN_A,
    FLAG_FADEIN_B,
    FLAG_FADEIN_C,
    FLAG_FADEOUT_A,
    FLAG_FADEOUT_B,
    FLAG_FADEOUT_C,
};

