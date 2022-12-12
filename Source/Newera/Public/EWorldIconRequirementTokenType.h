#pragma once
#include "CoreMinimal.h"
#include "EWorldIconRequirementTokenType.generated.h"

UENUM()
enum class EWorldIconRequirementTokenType : int32 {
    INVALID,
    NUMERIC,
    SYS_GLOBAL,
    SYS_INFO,
    SYS_FLAG,
    STRING,
    EQUAL,
    NOT_EQUAL,
    AND,
    OR,
    BRACKET_OPEN,
    BRACKET_CLOSE,
    BOOLEAN,
};

