#pragma once
#include "CoreMinimal.h"
#include "NeweraLevelBase.h"
#include "NeweraEndingLevel.generated.h"

class UEndingUIManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraEndingLevel : public ANeweraLevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEndingUIManager> EndingUIManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEndingUIManager* EndingUIManager;
    
public:
    ANeweraEndingLevel();
};

