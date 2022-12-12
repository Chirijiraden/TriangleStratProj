#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBattleSequenceSituationId.h"
#include "EBattleSequenceEventAction.h"
#include "InterpPostProcessVolume.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class NEWERA_API AInterpPostProcessVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceSituationId situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceEventAction eventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ChromaticAberationIntensityCurveGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float changeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurveScale;
    
    AInterpPostProcessVolume();
    UFUNCTION(BlueprintCallable)
    void SetSituation(EBattleSequenceSituationId _situation);
    
    UFUNCTION(BlueprintCallable)
    void SetEventAction(EBattleSequenceEventAction _eventAction);
    
    UFUNCTION(BlueprintCallable)
    void EndInterp();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterp();
    
};

