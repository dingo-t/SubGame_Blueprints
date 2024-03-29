// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveX"), this, &AMyCharacter::MoveX);
	PlayerInputComponent->BindAxis(TEXT("MoveY"), this, &AMyCharacter::MoveY);
	PlayerInputComponent->BindAxis(TEXT("TurnYaw"), this, &AMyCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("TurnPitch"), this, &AMyCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AMyCharacter::Jump);
}

void AMyCharacter::MoveX(float AxisValue)
{
	AddMovementInput(GetActorForwardVector()* AxisValue);
}

void AMyCharacter::MoveY(float AxisValue)
{
	AddMovementInput(GetActorRightVector()* AxisValue);
}
