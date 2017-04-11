// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed and +1 is max upward speed
	void MoveTo(float Pitch);
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxDegreesPerSecond = 5.0f;
	
	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxElevationDegrees = 40.0f;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MinElevationDegrees = 0.0f;
};
