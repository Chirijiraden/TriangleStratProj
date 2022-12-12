#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAtomTrack.h"
#include "MovieSceneAtomSectionTemplate.generated.h"

class UMovieSceneAtomSection;

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneAtomSection* AtomSection;
    
    CRIWAREMOVIESCENES_API FMovieSceneAtomSectionTemplate();

	FMovieSceneAtomSectionTemplate(const UMovieSceneAtomSection& Section, const UMovieSceneAtomTrack& Track);
	virtual ~FMovieSceneAtomSectionTemplate() = default;
};
