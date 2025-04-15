// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skillcastindicator.h"
#include "LinearSkillIndicator.generated.h"

UCLASS()
class SKILLINDICATOR_API ALinearSkillIndicator : public ASkillcastindicator
{
	GENERATED_BODY()

public :
	// Sets default values for this actor's properties
	ALinearSkillIndicator();

protected :
	virtual void CalculateIndicatorMesh() override;

public:
	UPROPERTY( EditDefaultsOnly, Category = "Indicator Mesh" )
	TObjectPtr<UStaticMeshComponent> IndicatorMeshComponent;
};
