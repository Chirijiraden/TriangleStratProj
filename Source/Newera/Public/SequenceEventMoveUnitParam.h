#pragma once
#include "CoreMinimal.h"
#include "EMoveUnitType.h"
#include "EBattleSequenceTargetType.h"
#include "UObject/NoExportTypes.h"
#include "SequenceEventMoveUnitParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventMoveUnitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveUnitType moveUnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool checkRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector moveOffset;
    
    NEWERA_API FSequenceEventMoveUnitParam();
};

