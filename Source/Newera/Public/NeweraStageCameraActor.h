#pragma once
#include "CoreMinimal.h"
#include "NeweraCameraActor.h"
#include "NeweraStageCameraActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraStageCameraActor : public ANeweraCameraActor {
    GENERATED_BODY()
public:
    ANeweraStageCameraActor(const FObjectInitializer& ObjectInitializer);
};

