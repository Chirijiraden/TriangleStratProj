#pragma once
#include "CoreMinimal.h"
#include "NeweraPlayerCameraManager.h"
#include "NeweraBattlePlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraBattlePlayerCameraManager : public ANeweraPlayerCameraManager {
    GENERATED_BODY()
public:
    ANeweraBattlePlayerCameraManager();
};

