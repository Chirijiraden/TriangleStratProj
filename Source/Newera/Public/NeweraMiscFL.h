#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraMiscFL.generated.h"

UCLASS(Blueprintable)
class UNeweraMiscFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraMiscFL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditor();
    
};

