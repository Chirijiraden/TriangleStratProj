#include "NeweraDropItemPointActor.h"

class UPrimitiveComponent;
class AActor;

void ANeweraDropItemPointActor::OnEffetInOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ANeweraDropItemPointActor::OnEffectInOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ANeweraDropItemPointActor::ANeweraDropItemPointActor() {
    this->OnMapScenarioAnchor = EScenarioAnchor::NONE;
    this->effectCollisionComponent = NULL;
}

