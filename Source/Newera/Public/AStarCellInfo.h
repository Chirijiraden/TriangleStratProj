#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AStarCellInfo.generated.h"

class UAStarCellInfo;

UCLASS(Blueprintable)
class UAStarCellInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAStarCellInfo* Parent;
    
public:
    UAStarCellInfo();
};

