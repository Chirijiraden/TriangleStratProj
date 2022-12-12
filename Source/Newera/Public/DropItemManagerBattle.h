#pragma once
#include "CoreMinimal.h"
#include "DropItemManagerBase.h"
#include "DropItemManagerBattle.generated.h"

class ANeweraCharacterBase;

UCLASS(Blueprintable)
class UDropItemManagerBattle : public UDropItemManagerBase {
    GENERATED_BODY()
public:
    UDropItemManagerBattle();
    UFUNCTION(BlueprintCallable)
    void SpawnDropItem(ANeweraCharacterBase* characterBase, ANeweraCharacterBase* attacker);
    
};

