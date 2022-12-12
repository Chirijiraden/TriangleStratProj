#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EBattleSequencePlaySETarget.h"
#include "EBattleSequenceGetGopId.h"
#include "EventPlaySE.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventPlaySE : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetGopId getGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequencePlaySETarget playSETarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString seGopIdStr;
    
    AEventPlaySE();
    UFUNCTION(BlueprintCallable)
    void SetPlaySETarget(EBattleSequencePlaySETarget _playSETarget);
    
    UFUNCTION(BlueprintCallable)
    void SetGetGopId(EBattleSequenceGetGopId _getGopId);
    
};

