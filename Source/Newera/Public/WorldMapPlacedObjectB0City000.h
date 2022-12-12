#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectB0City000.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectB0City000 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectB0City000();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCityImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCityImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCity_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeToAfterIncidentImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToAfterIncidentImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeToAfterIncident_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToAfterIncident();
    
};

