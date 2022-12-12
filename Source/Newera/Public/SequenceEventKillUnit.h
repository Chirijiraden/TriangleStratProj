#pragma once
#include "CoreMinimal.h"
#include "SequenceEventKillUnit.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventKillUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIgnoreBattleStatistics;
    
    NEWERA_API FSequenceEventKillUnit();
};

