// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SoccerCharacter.generated.h"

UCLASS()
class STRIKERR_API ASoccerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASoccerCharacter();

	//void getAttributes(double attributes[]) { } //fill in .cpp
	void AdjustStats(/*Match report*/) {}
	void ShootBall(/*Match, Trajectory*/) { }
	void Intercept(/* */) { }
	void Emote(/**/) {}
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//player attributes
	double age, stamina, grit = 0;
	//shooting related attributes
	double power, accuracy = 0;
	//defending attributes
	double defending = 0;
};
