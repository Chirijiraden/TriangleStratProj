#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraOptionFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraOptionFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraOptionFL();
    UFUNCTION(BlueprintCallable)
    static void SaveCurrentRateFromDebugMenu_GraphicGammaRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SaveCurrentRateFromDebugMenu_GraphicGainRate(float Rate);
    
};

