// Fill out your copyright notice in the Description page of Project Settings.

#include "WallChangerr.h"
#include "WallChangerr.h"
#include "Gameframework/Actor.h" //Use this to access auto complete for Actors 
#include "Runtime/Core/Public/Misc/App.h"

// Sets default values for this component's properties
UWallChangerr::UWallChangerr()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWallChangerr::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWallChangerr::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWallChangerr::CheckWallHit()
{
	//gameObject->
}

void AActor::ReceiveHit(class UPrimitiveComponent * MyComp,
	AActor * Other,
	class UPrimitiveComponent * OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal,
	FVector NormalImpulse,
	const FHitResult & Hit){
	if ((GetOwner()->GetActorLocation().X + GetOwner()->GetActorLocation().Y + GetOwner()->GetActorLocation().Z) -  (Other->GetActorRightVector().X + Other->GetActorRightVector().Y + Other->GetActorRightVector().Z) <= 20) {
		UStaticMeshComponent *comp;
		comp = 
	}

}
