#include "NeweraManaMovieActor.h"
#include "ManaComponent.h"

void ANeweraManaMovieActor::onManaComponentStatusChanged(EManaComponentStatus InManaComponentStatus, UManaComponent* InManaComponent) {
}

ANeweraManaMovieActor::ANeweraManaMovieActor() {
    this->ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}

