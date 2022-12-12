#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectHouseA3.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectHouseA3 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectHouseA3();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BurnImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void BurnImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BurnDownImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void BurnDownImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BurnDown_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void BurnDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Burn_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void Burn();
    
};

