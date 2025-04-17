// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skillcastindicator.h"
#include "CircularSkillIndicator.generated.h"

UCLASS()
class SKILLINDICATOR_API ACircularSkillIndicator : public ASkillcastindicator
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACircularSkillIndicator();

protected:

	virtual void CalculateIndicatorMesh() override;

public:
	UPROPERTY( EditDefaultsOnly )
	TObjectPtr<UStaticMeshComponent> AOEMeshComponent;

	UPROPERTY( EditDefaultsOnly )
	TObjectPtr<UStaticMeshComponent> RadiusComponent;

	UPROPERTY( EditDefaultsOnly, BlueprintReadOnly )
	float SkillCastRadius = 600.f;

	UPROPERTY( EditDefaultsOnly, BlueprintReadOnly )
	float SkillAOERadius = 100.f;
};
