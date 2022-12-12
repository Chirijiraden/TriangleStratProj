#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogBattleFlow.generated.h"

UCLASS(Blueprintable)
class UNeweraLogBattleFlow : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogBattleFlow();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

