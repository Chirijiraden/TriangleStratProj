#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventSpawnUnit.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSpawnUnit : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString UnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString unitParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsInheritanceActorLevel;
    
    AEventSpawnUnit();
};

