// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public: 
	//+1 is max and -1 is min
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevateSpeed = 10;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevation = 40;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevation = 0;

};
