#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraPlatformFL.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNeweraPlatformFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraPlatformFL();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCPUBoostMode(UObject* WorldContextObject, bool in_bEnalbe);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCPUBoostMode(UObject* WorldContextObject);
    
};

