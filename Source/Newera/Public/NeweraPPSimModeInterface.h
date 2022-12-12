#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NeweraPPSimModeInterface.generated.h"

UINTERFACE(Blueprintable)
class UNeweraPPSimModeInterface : public UInterface {
    GENERATED_BODY()
};

class INeweraPPSimModeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartPostProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndPostProcess();
    
};

