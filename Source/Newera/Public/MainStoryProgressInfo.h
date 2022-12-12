#pragma once
#include "CoreMinimal.h"
#include "MainStoryProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct FMainStoryProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextCommonGopIdChapterTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextCommonGopIdChapterSubTitle;
    
    NEWERA_API FMainStoryProgressInfo();
};

