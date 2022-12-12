#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogAI.generated.h"

UCLASS(Blueprintable)
class UNeweraLogAI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogAI();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

