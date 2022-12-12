#include "NeweraParticleActor.h"
#include "Particles/ParticleSystemComponent.h"

ANeweraParticleActor::ANeweraParticleActor() {
    this->particleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
    this->curveEffectScale = NULL;
}

