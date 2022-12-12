#pragma once
#include "CoreMinimal.h"
#include "EPartyMember.generated.h"

UENUM(BlueprintType)
enum class EPartyMember : uint8 {
    Outsider,
    In,
    Out,
};

