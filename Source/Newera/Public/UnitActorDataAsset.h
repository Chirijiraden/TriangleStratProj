#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UnitActorDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class UUnitActorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<AActor>> UnitActorClasses;
    
public:
    UUnitActorDataAsset();
};

