#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrapDataBase.generated.h"

class ATrapBase;

UCLASS(Blueprintable)
class NEWERA_API UTrapDataBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATrapBase* actorPtr;
    
public:
    UTrapDataBase();
};

