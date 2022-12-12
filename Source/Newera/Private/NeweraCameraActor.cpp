#include "NeweraCameraActor.h"
#include "GameFramework/SpringArmComponent.h"

ANeweraCameraActor::ANeweraCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("cameraBoom"));
    this->standbyCameraComp = NULL;
    this->InOutDoorManager = NULL;
    this->PlayerCameraManager = NULL;
}

