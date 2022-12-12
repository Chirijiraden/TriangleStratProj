#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectA2City000.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectA2City000 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectA2City000();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FloodLakeImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void FloodLakeImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FloodLake_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void FloodLake();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyLakeImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyLakeImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyLake_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyLake();
    
};

