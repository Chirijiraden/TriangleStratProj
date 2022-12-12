#pragma once
#include "CoreMinimal.h"
#include "NeweraResearchCommandComponent.h"
#include "NeweraResearchItemCommand.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraResearchItemCommand : public UNeweraResearchCommandComponent {
    GENERATED_BODY()
public:
    UNeweraResearchItemCommand();
};

