// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorOpenEvent.h"
#include "Gameframework/Actor.h" //Use this to access auto complete for Actors 
#include "Runtime/Core/Public/Misc/App.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
// Sets default values for this component's properties
UDoorOpenEvent::UDoorOpenEvent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorOpenEvent::BeginPlay()
{

	Super::BeginPlay();
	//InputComponent->BindAction("CheckCondition", IE_Pressed, this, UDoorOpenEvent::CheckCondition);
	// ...
	
}


// Called every frame
void UDoorOpenEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckCondition();
	Execute();
	// ...
}

void UDoorOpenEvent::CheckCondition() {
	if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::SpaceBar)) {
		isConditionMet = true;
	}
}

void UDoorOpenEvent::Execute()
{
	if (isConditionMet) {
		if ((xMovement * FApp::GetDeltaTime() * speed) <= -20) {
			FRotator newRotation = FRotator(.0f, xMovement * FApp::GetDeltaTime() * speed, .0f);
			door->SetActorRotation(newRotation);
			//door->AddActorLocalTransform(FTransform(FVector(50, 0, 0)));
			xMovement++;

			//door->SetActorRotation(FQuat(.1f + door->GetActorRotation().Roll, 0, 0, 0));
			//rotationValue += .1f;
		}
	}
}




