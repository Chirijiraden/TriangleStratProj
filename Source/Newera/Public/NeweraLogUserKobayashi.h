#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogUserKobayashi.generated.h"

UCLASS(Blueprintable)
class UNeweraLogUserKobayashi : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogUserKobayashi();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

