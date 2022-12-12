#pragma once
#include "CoreMinimal.h"
#include "NeweraCameraActorControllable.h"
#include "NeweraWorldMapCameraActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraWorldMapCameraActor : public ANeweraCameraActorControllable {
    GENERATED_BODY()
public:
    ANeweraWorldMapCameraActor(const FObjectInitializer& ObjectInitializer);
};

