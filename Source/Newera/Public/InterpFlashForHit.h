#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBattleSequenceSituationId.h"
#include "EBattleSequenceEventAction.h"
#include "UObject/NoExportTypes.h"
#include "InterpFlashForHit.generated.h"

class UCurveFloat;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class NEWERA_API AInterpFlashForHit : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceSituationId situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceEventAction eventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* flashMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString intensityCurveNameHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveScaleHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveTimeHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor flashColorHitOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString intensityCurveNameCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveScaleCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveTimeCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor flashColorCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString intensityCurveNameSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveScaleSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveTimeSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor flashColorSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString intensityCurveNameCriticalAndSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveScaleCriticalAndSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float intensityCurveTimeCriticalAndSpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor flashColorCriticalAndSpecific;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveTable;
    
public:
    AInterpFlashForHit();
    UFUNCTION(BlueprintCallable)
    void SetSituation(EBattleSequenceSituationId _situation);
    
    UFUNCTION(BlueprintCallable)
    void SetEventAction(EBattleSequenceEventAction _eventAction);
    
    UFUNCTION(BlueprintCallable)
    void EndInterp();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterp();
    
};

