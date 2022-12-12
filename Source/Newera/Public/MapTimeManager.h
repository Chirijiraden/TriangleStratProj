#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapTimeForBP.h"
#include "MapTimeManager.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UMapTimeManager : public UObject {
    GENERATED_BODY()
public:
    UMapTimeManager();
    UFUNCTION(BlueprintCallable)
    FMapTimeForBP GetMapTimeForBP();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetMapTime(float Time);
    
};

