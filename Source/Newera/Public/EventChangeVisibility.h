#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EBattleSequenceTargetType.h"
#include "EventChangeVisibility.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventChangeVisibility : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float changeTime;
    
    AEventChangeVisibility();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
};

