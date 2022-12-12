#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FrozenSirialData.h"
#include "FrozenInterface.generated.h"

UINTERFACE(Blueprintable)
class UFrozenInterface : public UInterface {
    GENERATED_BODY()
};

class IFrozenInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMelt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFreeze();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FFrozenSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FFrozenSirialData& SerialData);
    
};

