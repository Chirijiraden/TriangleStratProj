#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECharacterId.h"
#include "AnimationConfigDataSet.h"
#include "NeweraFlipbookPreviewData.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraFlipbookPreviewData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterId CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationConfigDataSet DataSet;
    
public:
    UNeweraFlipbookPreviewData();
};

