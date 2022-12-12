#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBattleSequenceSituationId.h"
#include "EBattleSequenceEventAction.h"
#include "InterpPostProcessVolumeForHit.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class NEWERA_API AInterpPostProcessVolumeForHit : public AActor {
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
    FString ChromaticAberationIntensityCurveGopIdHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ChangeTimeHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurveScaleHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ChromaticAberationIntensityCurveGopIdCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ChangeTimeCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurveScaleCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ChromaticAberationIntensityCurveGopIdSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ChangeTimeSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurveScaleSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ChromaticAberationIntensityCurveGopIdCriticalAndSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ChangeTimeCriticalAndSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurveScaleCriticalAndSpecific;
    
    AInterpPostProcessVolumeForHit();
    UFUNCTION(BlueprintCallable)
    void SetSituation(EBattleSequenceSituationId _situation);
    
    UFUNCTION(BlueprintCallable)
    void SetEventAction(EBattleSequenceEventAction _eventAction);
    
    UFUNCTION(BlueprintCallable)
    void EndInterp();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterp();
    
};

