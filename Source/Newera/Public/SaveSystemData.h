#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveSystemData.generated.h"

UCLASS(Blueprintable)
class NEWERA_API USaveSystemData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> bulkData;
    
public:
    USaveSystemData();
};

