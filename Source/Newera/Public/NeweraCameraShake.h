#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h"
#include "NeweraCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UNeweraCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    UNeweraCameraShake();
};

