#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SnowCoverSirialData.h"
#include "SnowCoverInterface.generated.h"

UINTERFACE(Blueprintable)
class USnowCoverInterface : public UInterface {
    GENERATED_BODY()
};

class ISnowCoverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSnowfall();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMelt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FSnowCoverSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FSnowCoverSirialData& SerialData);
    
};

