#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ADSoundFunctionLibraryBase.generated.h"

UCLASS(Blueprintable)
class ADSOUND_API UADSoundFunctionLibraryBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UADSoundFunctionLibraryBase();
};

