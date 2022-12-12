#pragma once
#include "CoreMinimal.h"
#include "EResearchCommand.generated.h"

UENUM(BlueprintType)
enum class EResearchCommand : uint8 {
    TALK,
    PICK_UP,
    SEARCH,
    RIDE,
    PEDDLER,
    MAX,
};

