#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicBattleDataHolder.generated.h"

class UNeweraRouteSearchResult;

UCLASS(Blueprintable)
class UDynamicBattleDataHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraRouteSearchResult* ActiveUnitMovableInfo;
    
public:
    UDynamicBattleDataHolder();
};

