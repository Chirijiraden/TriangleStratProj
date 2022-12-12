#pragma once
#include "CoreMinimal.h"
#include "ENeweraFlipbookOverrideType.h"
#include "DataAssetFlipbookAnimationDataNest2.h"
#include "DataAssetFlipbookAnimationDataNest1.generated.h"

USTRUCT(BlueprintType)
struct FDataAssetFlipbookAnimationDataNest1 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeweraFlipbookOverrideType, FDataAssetFlipbookAnimationDataNest2> Datas;
    
    NEWERA_API FDataAssetFlipbookAnimationDataNest1();
};

