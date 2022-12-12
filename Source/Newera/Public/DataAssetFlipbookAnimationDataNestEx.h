#pragma once
#include "CoreMinimal.h"
#include "FlipbookAccessKey.h"
#include "DataAssetFlipbookAnimationDataNestEx.generated.h"

class UNeweraAnimationData;

USTRUCT(BlueprintType)
struct FDataAssetFlipbookAnimationDataNestEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlipbookAccessKey, TSoftObjectPtr<UNeweraAnimationData>> Objects;
    
    NEWERA_API FDataAssetFlipbookAnimationDataNestEx();
};
FORCEINLINE uint32 GetTypeHash(const FDataAssetFlipbookAnimationDataNestEx) { return 0; }
