#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENeweraInputMode.h"
#include "InputFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UInputFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputFL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnFastForward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnEventSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableInputEventSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyDirectionalKey(ENeweraInputMode inputMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLeftStickTilt(ENeweraInputMode inputMode);
    
};

