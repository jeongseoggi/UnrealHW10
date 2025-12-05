// Fill out your copyright notice in the Description page of Project Settings.


#include "ModuleAndPluginCharacter.h"
#include "Test/TestActor.h"
#include "Temporary/Public/TemporaryActor.h"

// Sets default values
AModuleAndPluginCharacter::AModuleAndPluginCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AModuleAndPluginCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->SpawnActor(ATestActor::StaticClass());
	GetWorld()->SpawnActor(ATemporaryActor::StaticClass());
}

// Called to bind functionality to input
void AModuleAndPluginCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

