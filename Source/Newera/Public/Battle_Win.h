#pragma once
#include "CoreMinimal.h"
#include "Battle_Start.h"
#include "Battle_Win.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_Win : public UBattle_Start {
    GENERATED_BODY()
public:
    UBattle_Win();
};

