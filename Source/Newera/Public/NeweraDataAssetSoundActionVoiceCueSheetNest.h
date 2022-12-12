#pragma once
#include "CoreMinimal.h"
#include "ENeweraLanguageVoice.h"
#include "NeweraDataAssetSoundActionVoiceCueSheetNest.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FNeweraDataAssetSoundActionVoiceCueSheetNest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeweraLanguageVoice, TSoftObjectPtr<USoundAtomCueSheet>> Datas;
    
    NEWERA_API FNeweraDataAssetSoundActionVoiceCueSheetNest();
};

