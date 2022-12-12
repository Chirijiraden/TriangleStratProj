#pragma once
#include "CoreMinimal.h"
#include "FlipbookCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookCacheKey {
    GENERATED_BODY()
public:
    NEWERA_API FFlipbookCacheKey();
};
FORCEINLINE uint32 GetTypeHash(const FFlipbookCacheKey) { return 0; }
