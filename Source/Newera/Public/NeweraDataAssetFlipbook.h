#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "ECharacterId.h"
#include "DataAssetFlipbookAnimationDataNestEx.h"
#include "DataAssetFlipbookAnimationDataNest1.h"
#include "NeweraDataAssetFlipbook.generated.h"

UCLASS(Blueprintable)
class UNeweraDataAssetFlipbook : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDataAssetFlipbookAnimationDataNest1> AnimationDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterId, FDataAssetFlipbookAnimationDataNestEx> AnimationDatasEx;
    
public:
    UNeweraDataAssetFlipbook();
};

