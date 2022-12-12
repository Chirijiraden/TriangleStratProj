#pragma once
#include "CoreMinimal.h"
#include "NeweraLevelBase.h"
#include "NeweraTitleLevel2.generated.h"

class UTitleUIManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraTitleLevel2 : public ANeweraLevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitleUIManager> TitleUIManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTitleUIManager* TitleUIManager;
    
public:
    ANeweraTitleLevel2();
};

