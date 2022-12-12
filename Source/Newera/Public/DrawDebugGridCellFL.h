#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DrawDebugGridCellFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UDrawDebugGridCellFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDrawDebugGridCellFL();
    UFUNCTION(BlueprintCallable)
    static void DrawMoveBlock();
    
    UFUNCTION(BlueprintCallable)
    static void DrawDamageEvaluation();
    
};

