#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ResearchCommandInterface.generated.h"

UINTERFACE(Blueprintable)
class UResearchCommandInterface : public UInterface {
    GENERATED_BODY()
};

class IResearchCommandInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCallCommand();
    
};

