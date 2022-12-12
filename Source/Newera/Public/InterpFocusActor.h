#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBattleSequenceSituationId.h"
#include "EBattleSequenceEventAction.h"
#include "EBattleSequenceTargetType.h"
#include "InterpFocusActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AInterpFocusActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceSituationId situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceEventAction eventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
public:
    AInterpFocusActor();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetSituation(EBattleSequenceSituationId _situation);
    
    UFUNCTION(BlueprintCallable)
    void SetEventAction(EBattleSequenceEventAction _eventAction);
    
    UFUNCTION(BlueprintCallable)
    void EndInterp();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterp();
    
};

