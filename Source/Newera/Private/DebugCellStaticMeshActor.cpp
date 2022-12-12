#include "DebugCellStaticMeshActor.h"
#include "Components/StaticMeshComponent.h"

ADebugCellStaticMeshActor::ADebugCellStaticMeshActor() : AStaticMeshActor(FObjectInitializer::Get().SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->dynamicMaterial = NULL;
}

