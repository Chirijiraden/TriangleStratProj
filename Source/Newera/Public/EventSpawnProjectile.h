#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventSpawnProjectile.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSpawnProjectile : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float projectileLifeSpanAfterFlyingEnd;
    
    AEventSpawnProjectile();
};

