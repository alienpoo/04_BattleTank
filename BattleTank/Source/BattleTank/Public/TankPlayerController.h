// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"  // generated.h must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	
	ATank* GetControlledTank() const;
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5f;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333f;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
};
