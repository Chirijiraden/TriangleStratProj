#pragma once
#include "CoreMinimal.h"
#include "NeweraPlayerControllerBase.h"
#include "NeweraInputReceiverInfo.h"
#include "NeweraPlayerController.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraPlayerController : public ANeweraPlayerControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNeweraInputReceiverInfo> InputReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNeweraInputReceiverInfo> InputReceiversAddReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNeweraInputReceiverInfo> InputReceiversRemoveReserved;
    
public:
    ANeweraPlayerController();
};

