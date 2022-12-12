#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NeweraSoundSourceInterface.generated.h"

UINTERFACE(Blueprintable)
class UNeweraSoundSourceInterface : public UInterface {
    GENERATED_BODY()
};

class INeweraSoundSourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopAllSound();
    
};

