#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraSoundSourceFL.generated.h"

UCLASS(Blueprintable)
class UNeweraSoundSourceFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraSoundSourceFL();
    UFUNCTION(BlueprintCallable)
    static int32 StopAllSound();
    
};

