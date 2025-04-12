#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class ESkillIndicatorType : uint8
{
	LINEAR,
	CIRCULAR
};

UENUM( BlueprintType )
enum class ESkillIndicatorAttachment : uint8
{
	AttachToPlayer,
};