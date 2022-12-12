#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TurretManager.generated.h"

class ANeweraTurretGimmick;

UCLASS(Blueprintable)
class NEWERA_API UTurretManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANeweraTurretGimmick*> turretObjects;
    
    UTurretManager();
};

