#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AStarLayerData.h"
#include "RouteSearchResult.generated.h"

UCLASS(Blueprintable)
class URouteSearchResult : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAStarLayerData> LayerDatas;
    
public:
    URouteSearchResult();
};

