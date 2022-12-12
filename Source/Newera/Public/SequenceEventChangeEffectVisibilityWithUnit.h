#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceTargetType.h"
#include "SequenceEventChangeEffectVisibilityWithUnit.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventChangeEffectVisibilityWithUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName targetAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool effectVisibility;
    
    NEWERA_API FSequenceEventChangeEffectVisibilityWithUnit();
};

