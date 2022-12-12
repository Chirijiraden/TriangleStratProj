#pragma once
#include "CoreMinimal.h"
#include "EInventoryCountMode.generated.h"

UENUM(BlueprintType)
enum class EInventoryCountMode : uint8 {
    All,
    ExceptOtherTeamsOwners,
};

