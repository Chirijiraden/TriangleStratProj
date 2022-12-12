#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.h"
#include "DataAssetFlipbookAnimationDataNest2.generated.h"

class UNeweraAnimationData;

USTRUCT(BlueprintType)
struct FDataAssetFlipbookAnimationDataNest2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationType, UNeweraAnimationData*> Datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UNeweraAnimationData*> AttackDatas;
    
    NEWERA_API FDataAssetFlipbookAnimationDataNest2();
};

