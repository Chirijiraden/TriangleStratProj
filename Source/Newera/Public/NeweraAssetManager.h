#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "NeweraAssetManager.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UNeweraAssetManager();
};

