#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InterpFloat.generated.h"

UCLASS(Blueprintable)
class UInterpFloat : public UObject {
    GENERATED_BODY()
public:
    UInterpFloat();
    UFUNCTION(BlueprintCallable)
    void StartTransition(float NewTargetValue, float NewDurationSec);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    void Clamp(float NewClampValueMin, float NewClampValueMax);
    
    UFUNCTION(BlueprintCallable)
    void CancelTransition(bool bCallDelegate);
    
};

