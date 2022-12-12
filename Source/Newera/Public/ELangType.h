#pragma once
#include "CoreMinimal.h"
#include "ELangType.generated.h"

UENUM(BlueprintType)
enum class ELangType : uint8 {
    LANG_JP,
    LANG_EN,
    LANG_FR,
    LANG_IT,
    LANG_DE,
    LANG_ES,
    LANG_TW,
    LANG_CN,
    LANG_KO,
    LANG_MAX UMETA(Hidden),
};

