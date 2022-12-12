#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugFL.generated.h"

UCLASS(Blueprintable)
class UDebugFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugFL();
    UFUNCTION(BlueprintCallable)
    static void SetSysGlobalByDebugMenu(int32 sceneNo);
    
};

