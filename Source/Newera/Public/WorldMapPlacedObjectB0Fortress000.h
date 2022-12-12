#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectB0Fortress000.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectB0Fortress000 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectB0Fortress000();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenGateImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void OpenGateImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenGate_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void OpenGate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseGateImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void CloseGateImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseGate_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void CloseGate();
    
};

