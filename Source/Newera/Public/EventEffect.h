#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "UObject/NoExportTypes.h"
#include "EBattleSequenceTargetType.h"
#include "EBattleSequenceGetId.h"
#include "EventEffect.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventEffect : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetId getId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString effectAttachNameStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString effectNameStr;
    
    AEventEffect();
    UFUNCTION(BlueprintCallable)
    void SetTargetType(EBattleSequenceTargetType _targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetGetId(EBattleSequenceGetId _getId);
    
};

