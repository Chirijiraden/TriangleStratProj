#pragma once
#include "CoreMinimal.h"
#include "SequenceEventSpawnUnit.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSpawnUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnitParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInheritanceActorLevel;
    
    NEWERA_API FSequenceEventSpawnUnit();
};

