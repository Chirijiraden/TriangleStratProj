#pragma once
#include "CoreMinimal.h"
#include "EGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8 {
    INVALID,
    RESEARCH,
    BATTLE,
    ETC,
    TITLE,
};

