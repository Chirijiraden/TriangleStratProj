#pragma once
#include "CoreMinimal.h"
#include "NeweraWindowStyle.generated.h"

class ANeweraCharacterBase;

USTRUCT(BlueprintType)
struct FNeweraWindowStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraCharacterBase* LocationActor;
    
    NEWERA_API FNeweraWindowStyle();
};

