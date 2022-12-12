#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PuddleSirialData.h"
#include "PuddleInterface.generated.h"

UINTERFACE(Blueprintable)
class UPuddleInterface : public UInterface {
    GENERATED_BODY()
};

class IPuddleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartPuddle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartEvaporate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FPuddleSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FPuddleSirialData& SerialData);
    
};

