#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionObjectInterface.h"
#include "ActionObjectBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AActionObjectBase : public AActor, public IActionObjectInterface {
    GENERATED_BODY()
public:
    AActionObjectBase();
    
    // Fix for true pure virtual functions not being implemented
};

