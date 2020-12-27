// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	// UE_LOG(LogTemp, Display, TEXT("This is an display (its grey)"));
	UE_LOG(LogTemp, Warning, TEXT("This is a warning!"));
	// UE_LOG(LogTemp, Error, TEXT("This is an error"));

	FString Log = TEXT("Hello!");
	FString* PrtLog = &Log; // Reads as store a FString pointer at the memeory address of log

	//One way to use this is dereference *PrtLog
	// This way uses the access 
	PrtLog->Len();

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Log);

	// First we get to PrtLog memeory then access that address
	UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);

	FString ObjectName = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("The name of this object is %s"), *ObjectName);


}



// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

