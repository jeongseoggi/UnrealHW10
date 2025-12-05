
#include "TestActor.h"
#include "Kismet/KismetSystemLibrary.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UKismetSystemLibrary::PrintString(this, TEXT("ATestActor::BeginPlay()"));
}



