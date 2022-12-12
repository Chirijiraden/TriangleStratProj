#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventApplyDamage.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventApplyDamage : public AEventParamActor {
    GENERATED_BODY()
public:
    AEventApplyDamage();
};

