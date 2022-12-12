#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.h"
#include "NeweraFlipbookOverrideData.generated.h"

class UNeweraAnimationData;

USTRUCT(BlueprintType)
struct FNeweraFlipbookOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalUnitHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubTypeIdString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationType, TSoftObjectPtr<UNeweraAnimationData>> AnimationDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAnimationType, UNeweraAnimationData*> AnimationDataCaches;
    
    NEWERA_API FNeweraFlipbookOverrideData();
};

