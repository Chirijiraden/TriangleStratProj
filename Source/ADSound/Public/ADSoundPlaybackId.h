#pragma once
#include "CoreMinimal.h"
#include "ADSoundPlaybackId.generated.h"

USTRUCT(BlueprintType)
struct FADSoundPlaybackId {
    GENERATED_BODY()
public:
    ADSOUND_API FADSoundPlaybackId();
};
FORCEINLINE uint32 GetTypeHash(const FADSoundPlaybackId) { return 0; }
