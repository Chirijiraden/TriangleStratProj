#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SequenceBattleCameraFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API USequenceBattleCameraFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequenceBattleCameraFL();
    UFUNCTION(BlueprintCallable)
    static void SetSequencerBattleCameraRateByFastForward(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void PauseEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSequencerBattleCameraRateByFastForward();
    
};

