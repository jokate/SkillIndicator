// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Skillcastindicator.generated.h"

UCLASS()
class SKILLINDICATOR_API ASkillcastindicator : public AActor
{
	GENERATED_BODY()
	
public :	
	// Sets default values for this actor's properties
	ASkillcastindicator();

public :	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void CalculateIndicatorMesh();

	virtual void SetupIndicatorInfo( APawn* OwnerPawn );

public :
	UPROPERTY()
	TObjectPtr<APlayerController> OwnerPlayerController;
};
