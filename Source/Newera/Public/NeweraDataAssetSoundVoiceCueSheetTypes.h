#pragma once
#include "CoreMinimal.h"
#include "EVoiceCueSheetType.h"
#include "NeweraDataAssetSoundVoiceCueSheetTypes.generated.h"

USTRUCT(BlueprintType)
struct FNeweraDataAssetSoundVoiceCueSheetTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVoiceCueSheetType> Datas;
    
    NEWERA_API FNeweraDataAssetSoundVoiceCueSheetTypes();
};

