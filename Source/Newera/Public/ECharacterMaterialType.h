#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialType.generated.h"

UENUM(BlueprintType)
enum class ECharacterMaterialType : uint8 {
    Default,
    Ghost,
    SelectAction,
    Stealth,
};

