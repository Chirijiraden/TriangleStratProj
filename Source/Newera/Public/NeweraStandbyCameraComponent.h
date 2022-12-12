#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StandbyCameraParam.h"
#include "NeweraStandbyCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraStandbyCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStandbyCameraParam> standbyCameraParamMap;
    
public:
    UNeweraStandbyCameraComponent();
};

