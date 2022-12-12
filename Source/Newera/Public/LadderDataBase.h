#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LadderDataBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class NEWERA_API ULadderDataBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* actorPtr;
    
public:
    ULadderDataBase();
};

