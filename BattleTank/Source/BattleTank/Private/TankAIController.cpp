// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledAITank = GetControlledAITank();
	if (!ControlledAITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AI Controller possessing: %s"), *ControlledAITank->GetName());
	}
}

ATank* ATankAIController::GetControlledAITank() const
{
	return Cast<ATank>(GetPawn());
}