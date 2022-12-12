#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EMoveUnitType.h"
#include "EBattleSequenceTargetType.h"
#include "EventMoveUnit.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventMoveUnit : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveUnitType moveUnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool checkRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 offsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 offsetY;
    
    AEventMoveUnit();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveUnitType(EMoveUnitType _moveUnitType);
    
};

