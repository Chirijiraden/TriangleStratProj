#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugShopFL.generated.h"

UCLASS(Blueprintable)
class UDebugShopFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugShopFL();
    UFUNCTION(BlueprintCallable)
    static void OpenShop(int32 chapter);
    
};

