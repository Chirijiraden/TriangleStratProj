#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TrapSerialData.h"
#include "TrapInterface.generated.h"

UINTERFACE(Blueprintable)
class UTrapInterface : public UInterface {
    GENERATED_BODY()
};

class ITrapInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWait();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FTrapSerialData& SirialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FTrapSerialData& SirialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestruct();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivation();
    
};

