#pragma once
#include "CoreMinimal.h"
#include "NeweraLevelBase.h"
#include "NeweraDemoEndingLevel.generated.h"

class UDemoEndingUIManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraDemoEndingLevel : public ANeweraLevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDemoEndingUIManager> DemoEndingUIManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDemoEndingUIManager* DemoEndingUIManager;
    
public:
    ANeweraDemoEndingLevel();
};

