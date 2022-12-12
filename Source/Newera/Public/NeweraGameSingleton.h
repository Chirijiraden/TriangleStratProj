#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraGameSingleton.generated.h"

class UGopManager;

UCLASS(Blueprintable)
class NEWERA_API UNeweraGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGopManager* GopManager;
    
public:
    UNeweraGameSingleton();
};

