#pragma once
#include "CoreMinimal.h"
#include "NeweraResearchCommandComponent.h"
#include "NeweraResearchEnterCommand.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraResearchEnterCommand : public UNeweraResearchCommandComponent {
    GENERATED_BODY()
public:
    UNeweraResearchEnterCommand();
};

