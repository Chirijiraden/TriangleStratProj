#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraMapTimeDependingActor.generated.h"

UCLASS(Blueprintable)
class ANeweraMapTimeDependingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float changeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float changeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float randomTimeRange;
    
public:
    ANeweraMapTimeDependingActor();
};

