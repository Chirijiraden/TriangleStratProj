#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraPPSimModeInterface.h"
#include "NeweraPPSimMode.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraPPSimMode : public AActor, public INeweraPPSimModeInterface {
    GENERATED_BODY()
public:
    ANeweraPPSimMode();
    
    // Fix for true pure virtual functions not being implemented
};

