#pragma once
#include "CoreMinimal.h"
#include "ADSoundCategoryId.generated.h"

USTRUCT(BlueprintType)
struct FADSoundCategoryId {
    GENERATED_BODY()
public:
    ADSOUND_API FADSoundCategoryId();
};
FORCEINLINE uint32 GetTypeHash(const FADSoundCategoryId) { return 0; }
