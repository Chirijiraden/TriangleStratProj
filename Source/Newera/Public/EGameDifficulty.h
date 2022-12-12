#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.generated.h"

UENUM()
enum class EGameDifficulty : int8 {
    VERRY_EASY = -0x2,
    EASY,
    NORMAL,
    HARD,
};

