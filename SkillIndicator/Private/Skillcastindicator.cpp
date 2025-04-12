// Fill out your copyright notice in the Description page of Project Settings.


#include "Skillcastindicator.h"

// Sets default values
ASkillcastindicator::ASkillcastindicator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	IndicatorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Indicator Mesh");
}

// Called when the game starts or when spawned
void ASkillcastindicator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkillcastindicator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Need To Check Mouse Pointer Pos;
	CalculateIndicatorMesh();

}

void ASkillcastindicator::CalculateIndicatorMesh()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if ( IsValid( PC ) == false )
	{
		return;
	}

	FVector WorldPos;
	FVector WorldDirection;
	PC->DeprojectMousePositionToWorld( WorldPos, WorldDirection );

	UE_LOG( LogTemp, Log , TEXT("World Pos : %s"), *WorldPos.ToString());

	APawn* OwnerPawn = PC->GetPawn();
	FVector OwnerDirection = OwnerPawn->GetActorLocation() - WorldPos;

	OwnerDirection.Z = 0;
	OwnerDirection.Normalize();
	
	FRotator Rotate = OwnerDirection.Rotation();
	SetActorRotation(Rotate);
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

