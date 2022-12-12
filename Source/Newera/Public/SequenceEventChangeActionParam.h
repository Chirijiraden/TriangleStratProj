#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.h"
#include "EFlipbookAnimationOptionFlag.h"
#include "EBattleSequenceAnimationPosition.h"
#include "EBattleSequenceTargetType.h"
#include "SequenceEventChangeActionParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventChangeActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceAnimationPosition BattleSequenceAnimationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlipbookAnimationOptionFlag flipbookAnimationOptionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool delayedAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool spriteReplace;
    
    NEWERA_API FSequenceEventChangeActionParam();
};

