#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KnockBackParam.h"
#include "KnockBackUnit.generated.h"

class UInterpFloat;

UCLASS(Blueprintable)
class UKnockBackUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpMoveT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockBackParam KnockBackParam;
    
public:
    UKnockBackUnit();
};

