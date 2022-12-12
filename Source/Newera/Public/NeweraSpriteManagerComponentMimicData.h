#pragma once
#include "CoreMinimal.h"
#include "NeweraSpriteManagerComponentMimicData.generated.h"

class UNeweraSpriteManagerComponent;

USTRUCT(BlueprintType)
struct FNeweraSpriteManagerComponentMimicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNeweraSpriteManagerComponent* TargetDefaultObject;
    
    NEWERA_API FNeweraSpriteManagerComponentMimicData();
};

