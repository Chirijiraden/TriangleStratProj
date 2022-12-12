#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EBattleSequenceTargetType.h"
#include "EventChangeBattleCursor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventChangeBattleCursor : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    AEventChangeBattleCursor();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
};

