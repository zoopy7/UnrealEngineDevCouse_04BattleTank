// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ATank* GetControlledTank() const;

	// Start the tank moving the barrel so that a shot would it where the crosshair intersects the world
	void AimTowardsCrosshair();
	
	virtual void BeginPlay() override;

	// Return an OUT parameter, true if hit landscape
	virtual bool GetSightRayHitLocation(FVector& HitLocation) const;
};
