#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDebugDrawWorldMapAreaType.h"
#include "WorldMapFL.generated.h"

UCLASS(Blueprintable)
class UWorldMapFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldMapFL();
    UFUNCTION(BlueprintCallable)
    static void ChangeVisibilityDrawArea(EDebugDrawWorldMapAreaType DebugDrawWorldMapAreaType, bool bVisible);
    
};

