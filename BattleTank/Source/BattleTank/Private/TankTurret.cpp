// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"

void UTankTurret::Rotate(float Yaw)
{
	Yaw = FMath::Clamp<float>(Yaw, -1, +1);
	auto RotationChange = Yaw * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	//auto Rotation = FMath::Clamp<float>(RawNewRotation, MinRotationDegrees, MaxRotationDegrees);
	SetRelativeRotation(FRotator(0.0f, Rotation, 0.0f));
}


