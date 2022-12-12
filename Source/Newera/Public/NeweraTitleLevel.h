#pragma once
#include "CoreMinimal.h"
#include "NeweraLevelBase.h"
#include "NeweraTitleLevel.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraTitleLevel : public ANeweraLevelBase {
    GENERATED_BODY()
public:
    ANeweraTitleLevel();
    UFUNCTION(BlueprintCallable)
    void OpenLoadUI();
    
    UFUNCTION(BlueprintCallable)
    void OnPreOpenNewGameLevel();
    
};

