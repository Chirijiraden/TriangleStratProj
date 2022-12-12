#pragma once
#include "CoreMinimal.h"
#include "EOptionalMoveType.generated.h"

UENUM(BlueprintType)
enum class EOptionalMoveType : uint8 {
    NONE,
    JUMP,
    TRY_THROUGH,
    TACKLE,
    THROW_AWAY,
    CATAPULT,
    TELEPORT,
    EXCHANGE,
    GOBACK_ONETURN,
};

