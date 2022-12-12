#pragma once
#include "CoreMinimal.h"
#include "ADSoundFunctionLibraryBase.h"
#include "ADSoundFunctionLibraryCRIWare.generated.h"

UCLASS(Blueprintable)
class ADSOUND_API UADSoundFunctionLibraryCRIWare : public UADSoundFunctionLibraryBase {
    GENERATED_BODY()
public:
    UADSoundFunctionLibraryCRIWare();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBusNames(TSet<FName>& Out);
    
};

