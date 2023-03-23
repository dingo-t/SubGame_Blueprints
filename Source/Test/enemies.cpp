// Fill out your copyright notice in the Description page of Project Settings.


#include "enemies.h"
#include "Misc/CString.h"
#include "Containers/UnrealString.h"
#include "CoreMinimal.h"


// Sets default values
Aenemies::Aenemies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aenemies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aenemies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	IntArray.Add(MyInt);
	
}

