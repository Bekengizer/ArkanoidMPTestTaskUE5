// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerM.h"

// Sets default values
APlayerM::APlayerM()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerM::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerM::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

