#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUnitAIType.h"
#include "AISettingActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AAISettingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnitAIType AIType;
    
public:
    AAISettingActor();
};

