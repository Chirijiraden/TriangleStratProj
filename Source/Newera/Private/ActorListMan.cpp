#include "ActorListMan.h"

class AActor;
class UActorListMan;

UActorListMan* UActorListMan::GetInstance() {
    return NULL;
}

TArray<AActor*> UActorListMan::GetActorListInRange(EActorType actorType, const FVector& Center, float Radius, bool bIgnoreZ) const {
    return TArray<AActor*>();
}

TArray<AActor*> UActorListMan::GetActorList(EActorType actorType) const {
    return TArray<AActor*>();
}

UActorListMan::UActorListMan() {
}

