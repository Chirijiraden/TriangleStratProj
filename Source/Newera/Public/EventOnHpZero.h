#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventOnHpZero.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventOnHpZero : public AEventParamActor {
    GENERATED_BODY()
public:
    AEventOnHpZero();
};

