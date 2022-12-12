#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MapGridObjectInfo.h"
#include "MapGridObjectManager.generated.h"

UCLASS(Blueprintable)
class UMapGridObjectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FMapGridObjectInfo> MapGridObjectInfos;
    
public:
    UMapGridObjectManager();
};

