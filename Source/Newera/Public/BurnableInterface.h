#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BurnableSirialData.h"
#include "BurnableInterface.generated.h"

UINTERFACE(Blueprintable)
class UBurnableInterface : public UInterface {
    GENERATED_BODY()
};

class IBurnableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartBurnout();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnParticle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FBurnableSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreIceEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FBurnableSirialData& SerialData);
    
};

