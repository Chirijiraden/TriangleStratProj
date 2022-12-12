#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DropItemFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UDropItemFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDropItemFL();
    UFUNCTION(BlueprintCallable)
    static void PickUpBossDropOnMap();
    
};

