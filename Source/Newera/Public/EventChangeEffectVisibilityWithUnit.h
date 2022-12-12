#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EBattleSequenceTargetType.h"
#include "EventChangeEffectVisibilityWithUnit.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventChangeEffectVisibilityWithUnit : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString targetAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool effectVisibility;
    
    AEventChangeEffectVisibilityWithUnit();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
};

