#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectA1WaterFall.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectA1WaterFall : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectA1WaterFall();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBridgeImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBridgeImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBridge_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBridge();
    
};

