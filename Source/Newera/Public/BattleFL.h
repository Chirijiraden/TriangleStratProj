#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BattleFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UBattleFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBattleFL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLimitTurnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentLimitTurn();
    
};

