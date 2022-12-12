#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UCharacterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UCharacterComponentBase();
};

