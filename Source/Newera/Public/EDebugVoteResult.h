#pragma once
#include "CoreMinimal.h"
#include "EDebugVoteResult.generated.h"

UENUM(BlueprintType)
enum class EDebugVoteResult : uint8 {
    NONE,
    FREEDOM,
    BENEFIT,
    MORAL,
    SAME,
    SAME_FREEDOM_BENEFIT,
    SAME_FREEDOM_MORAL,
    SAME_BENEFIT_MORAL,
    End,
};

