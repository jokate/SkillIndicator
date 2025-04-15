// Fill out your copyright notice in the Description page of Project Settings.


#include "Skillcastindicator.h"

// Sets default values
ASkillcastindicator::ASkillcastindicator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called every frame
void ASkillcastindicator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Need To Check Mouse Pointer Pos
	CalculateIndicatorMesh();
}

void ASkillcastindicator::CalculateIndicatorMesh()
{
}

void ASkillcastindicator::SetupIndicatorInfo(APawn* OwnerPawn)
{
	APlayerController* PlayerController = OwnerPawn->GetController<APlayerController>();

	if ( IsValid( PlayerController ) == false )
	{
		return;
	}

	OwnerPlayerController = PlayerController;
}

