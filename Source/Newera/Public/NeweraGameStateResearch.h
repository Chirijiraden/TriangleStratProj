#pragma once
#include "CoreMinimal.h"
#include "NeweraGameStateBase.h"
#include "NeweraGameStateResearch.generated.h"

class UDropItemManagerResearch;

UCLASS(Blueprintable)
class NEWERA_API ANeweraGameStateResearch : public ANeweraGameStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDropItemManagerResearch* DropItemManagerResearch;
    
public:
    ANeweraGameStateResearch();
};

