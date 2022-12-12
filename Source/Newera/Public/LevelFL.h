#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ULevelFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelFL();
    UFUNCTION(BlueprintCallable)
    static bool IsEndMakingMapData();
    
};

