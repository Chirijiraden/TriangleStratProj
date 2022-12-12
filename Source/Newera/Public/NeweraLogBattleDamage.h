#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraLogBattleDamage.generated.h"

UCLASS(Blueprintable)
class UNeweraLogBattleDamage : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLogBattleDamage();
    UFUNCTION(BlueprintCallable)
    static void RefreshLogLevel();
    
};

