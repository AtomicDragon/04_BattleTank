// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"

void UTankTurret::Swivel(float RelativeSpeed)
{
	//Given a max speed
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto SwivelChange = RelativeSpeed * MaxSwivelSpeed * GetWorld()->DeltaTimeSeconds;
	auto NewSwivel = RelativeRotation.Yaw + SwivelChange;
	SetRelativeRotation(FRotator(0, NewSwivel, 0));
}


