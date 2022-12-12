#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFlipbookUseType.h"
#include "AnimationData.h"
#include "NeweraAnimationData.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraAnimationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFlipbookUseType, FAnimationData> Data;
    
    UNeweraAnimationData();
};

