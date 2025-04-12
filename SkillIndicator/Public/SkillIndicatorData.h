// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillIndicatorEnum.h"
#include "Engine/DataTable.h"
#include "SkillIndicatorData.generated.h"

/**
 * 
 */

USTRUCT( BlueprintType )
struct FSkillIndicatorData : public FTableRowBase
{
   GENERATED_BODY()

public :
	UPROPERTY( EditDefaultsOnly )
	ESkillIndicatorType IndicatorType;

	UPROPERTY( EditDefaultsOnly )
	float CastingRange;

	UPROPERTY( EditDefaultsOnly )
	ESkillIndicatorAttachment IndicatorAttachment;
	
};