#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraCameraFL.generated.h"

class ANeweraCameraActor;

UCLASS(Blueprintable)
class NEWERA_API UNeweraCameraFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraCameraFL();
    UFUNCTION(BlueprintCallable)
    static ANeweraCameraActor* GetCurrentCamera();
    
};

