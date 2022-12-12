#pragma once
#include "CoreMinimal.h"
#include "Battle_Start.h"
#include "Battle_GameOver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_GameOver : public UBattle_Start {
    GENERATED_BODY()
public:
    UBattle_GameOver();
};

