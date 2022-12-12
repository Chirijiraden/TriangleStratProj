#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleAIMan.generated.h"

class URouteSearchResult;

UCLASS(Blueprintable)
class NEWERA_API UBattleAIMan : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URouteSearchResult* savedRouteSearch1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URouteSearchResult* savedRouteSearch2;
    
public:
    UBattleAIMan();
};

