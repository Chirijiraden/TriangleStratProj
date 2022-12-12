#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWorldMapNarrationMillitarySymbolType.h"
#include "EWorldMapNarrationFlagType.h"
#include "WorldMapMillitarySymbolSplineMoveOnSkipData.h"
#include "EventParamActorWorldMapPiece.generated.h"

class USplineComponent;
class UInterpFloat;
class AWorldMapNarrationPiece;

UCLASS(Blueprintable)
class AEventParamActorWorldMapPiece : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapNarrationPiece* Piece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* CurrentSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpLocationT;
    
public:
    AEventParamActorWorldMapPiece();
    UFUNCTION(BlueprintCallable)
    void VisibilityFlagEnable();
    
    UFUNCTION(BlueprintCallable)
    void VisibilityFlagDisable();
    
    UFUNCTION(BlueprintCallable)
    void VisibilityEnable();
    
    UFUNCTION(BlueprintCallable)
    void VisibilityDisable();
    
    UFUNCTION(BlueprintCallable)
    void TransitionType(EWorldMapNarrationMillitarySymbolType TargetWorldMapNarrationMillitarySymbolType, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartSplineMoveBySpeed(FName TargetSplineTag, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void StartSplineMoveBySec(FName TargetSplineTag, float Sec);
    
    UFUNCTION(BlueprintCallable)
    void SplineMoveOnSkipWithDrawPath(const TArray<FWorldMapMillitarySymbolSplineMoveOnSkipData>& SplineMoveDatas);
    
    UFUNCTION(BlueprintCallable)
    void Spawn(EWorldMapNarrationMillitarySymbolType WorldMapNarrationMillitarySymbolType, EWorldMapNarrationFlagType WorldMapNarrationFlagType);
    
    UFUNCTION(BlueprintCallable)
    void ReturnTransformControlToSequenceKey();
    
    UFUNCTION(BlueprintCallable)
    void PathStartDraw(float IntervalDistance);
    
    UFUNCTION(BlueprintCallable)
    void PathEndDraw();
    
    UFUNCTION(BlueprintCallable)
    void PathClear();
    
    UFUNCTION(BlueprintCallable)
    void DestroySymbolDefault();
    
    UFUNCTION(BlueprintCallable)
    void DestroySymbol(FName EffectAssetId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeType(EWorldMapNarrationMillitarySymbolType WorldMapNarrationMillitarySymbolType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFlagType(EWorldMapNarrationFlagType WorldMapNarrationFlagType);
    
};

