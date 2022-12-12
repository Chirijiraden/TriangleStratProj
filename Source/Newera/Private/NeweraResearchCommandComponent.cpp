#include "NeweraResearchCommandComponent.h"

class UPrimitiveComponent;
class AActor;

void UNeweraResearchCommandComponent::OnTalkOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UNeweraResearchCommandComponent::OnTalkOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UNeweraResearchCommandComponent::UNeweraResearchCommandComponent() {
    this->Command = EResearchCommand::TALK;
    this->TalkCollision = NULL;
    this->OwnerRootCollision = NULL;
}

