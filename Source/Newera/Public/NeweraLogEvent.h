#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogEvent.generated.h"

UCLASS(Blueprintable)
class UNeweraLogEvent : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogEvent();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

