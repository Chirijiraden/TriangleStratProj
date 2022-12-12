#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EBattleSequenceTargetType.h"
#include "EBattleSequenceGetGopId.h"
#include "EventPlaySE2.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventPlaySE2 : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetGopId getGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString seGopIdStr;
    
    AEventPlaySE2();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetGetGopId(EBattleSequenceGetGopId _getGopId);
    
};

