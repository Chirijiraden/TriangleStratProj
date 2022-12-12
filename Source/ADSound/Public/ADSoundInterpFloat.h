#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADSoundInterpFloat.generated.h"

UCLASS(Blueprintable)
class UADSoundInterpFloat : public UObject {
    GENERATED_BODY()
public:
    UADSoundInterpFloat();
    UFUNCTION(BlueprintCallable)
    void StartTransition(float NewTargetValue, float NewDurationSec);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetClampRange(float NewClampValueMin, float NewClampValueMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelTransition(bool bCallDelegate);
    
};

