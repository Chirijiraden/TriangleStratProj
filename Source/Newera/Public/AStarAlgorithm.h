#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AStarLayerData.h"
#include "AStarAlgorithm.generated.h"

UCLASS(Blueprintable)
class UAStarAlgorithm : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAStarLayerData> LayerDatas;
    
public:
    UAStarAlgorithm();
};

