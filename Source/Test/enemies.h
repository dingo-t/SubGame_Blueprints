// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "enemies.generated.h"


UCLASS()
class TEST_API Aenemies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aenemies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	int MyInt; 

	TArray<int32> IntArray;
	

};

