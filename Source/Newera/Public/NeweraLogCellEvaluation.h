#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogCellEvaluation.generated.h"

UCLASS(Blueprintable)
class UNeweraLogCellEvaluation : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogCellEvaluation();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

