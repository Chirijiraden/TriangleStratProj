#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectA0City000.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectA0City000 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectA0City000();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SinkCityImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void SinkCityImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SinkCity_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void SinkCity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCityImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCityImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCity_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBridgeImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBridgeImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBridgeAndCityNoSink_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBridgeAndCityNoSink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBridge_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBridge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BurnCityImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void BurnCityImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BurnCity_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void BurnCity();
    
};

