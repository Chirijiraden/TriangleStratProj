#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EAnimationType.h"
#include "EFlipbookAnimationOptionFlag.h"
#include "EBattleSequenceAnimationPosition.h"
#include "EBattleSequenceTargetType.h"
#include "EventChangeAction.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventChangeAction : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBattleSequenceAnimationPosition BattleSequenceAnimationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EFlipbookAnimationOptionFlag flipbookAnimationOptionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool delayedAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool spriteReplace;
    
    AEventChangeAction();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationType(EAnimationType _animationType);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPosition(EBattleSequenceAnimationPosition _BattleSequenceAnimationPosition);
    
};

