#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWorldMapTerritoryDrawType.h"
#include "EventWorldMapTerritoryDraw.generated.h"

UCLASS(Blueprintable)
class AEventWorldMapTerritoryDraw : public AActor {
    GENERATED_BODY()
public:
    AEventWorldMapTerritoryDraw();
    UFUNCTION(BlueprintCallable)
    void TransitionTo(EWorldMapTerritoryDrawType WorldMapTerritoryDrawType, float Sec);
    
    UFUNCTION(BlueprintCallable)
    void EnableAreaDraw();
    
    UFUNCTION(BlueprintCallable)
    void DisableAreaDraw();
    
};

