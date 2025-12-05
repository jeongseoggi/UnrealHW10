// Fill out your copyright notice in the Description page of Project Settings.


#include "TemporaryActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ATemporaryActor::ATemporaryActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATemporaryActor::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, TEXT("ATemporaryActor::BeginPlay()"));
}


