#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogSound.generated.h"

UCLASS(Blueprintable)
class UNeweraLogSound : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogSound();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

