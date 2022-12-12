#pragma once
#include "CoreMinimal.h"
#include "Talk_Window_Info.generated.h"

class UCommon_Serif_Baloon;
class ANeweraCharacterBase;

USTRUCT(BlueprintType)
struct FTalk_Window_Info {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraCharacterBase* TalkActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Serif_Baloon* CurWidgetSerifUI;
    
    NEWERA_API FTalk_Window_Info();
};

