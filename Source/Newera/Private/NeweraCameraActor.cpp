#include "NeweraCameraActor.h"
#include "GameFramework/SpringArmComponent.h"

ANeweraCameraActor::ANeweraCameraActor() {
    this->cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("cameraBoom"));
    this->standbyCameraComp = NULL;
    this->InOutDoorManager = NULL;
    this->PlayerCameraManager = NULL;
}

