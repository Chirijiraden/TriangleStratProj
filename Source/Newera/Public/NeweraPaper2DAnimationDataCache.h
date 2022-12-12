#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECharacterId.h"
#include "DataAssetFlipbookAnimationDataNestExCache.h"
#include "NeweraPaper2DAnimationDataCache.generated.h"

UCLASS(Blueprintable)
class UNeweraPaper2DAnimationDataCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterId, FDataAssetFlipbookAnimationDataNestExCache> AnimationDatasExCachePrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterId, FDataAssetFlipbookAnimationDataNestExCache> AnimationDatasExCacheSecondary;
    
public:
    UNeweraPaper2DAnimationDataCache();
};

