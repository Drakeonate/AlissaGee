// Fill out your copyright notice in the Description page of Project Settings.

#include "EventManager.h"
#include "Gameframework/Actor.h" //Use this to access auto complete for Actors 
//#include "EngineUtils.h"
//#include <EngineGlobals.h>
#include <Engine.h>
//#include "Event.h"
#include <vector>
#include "PillarObject.h"
//#include "Runtime/Core/Public/Misc/App.h"
std::vector<AActor*> eventObjects;
std::vector<AActor*> allObjects;
std::vector<AActor*> pillars;
TArray<UPillarObject> pillarComponents;
// Sets default values for this component's properties
UEventManager::UEventManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UEventManager::BeginPlay()
{
	Super::BeginPlay();
	EventListener();
	// ...
	
}


// Called every frame
void UEventManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEventManager::EventListener()
{
	int i = 0;
	for (TActorIterator<AActor> objectItr(GetWorld()); objectItr; ++objectItr)
	{
		i++;
		if (objectItr->GetName().Contains("Event") && !objectItr->GetName().Contains("Particle")
			&& !objectItr->GetName().Contains("Manager")) {
			eventObjects.push_back(objectItr->GetOwner());
			GEngine->AddOnScreenDebugMessage(i, 60.f, FColor::Red, FString::FString(objectItr->GetName()));
		}
		else if (objectItr->GetName().Contains("Pillar") &&
			!objectItr->GetName().Contains("Basic")) {
			pillars.push_back(objectItr->GetOwner());
			GEngine->AddOnScreenDebugMessage(i, 60.f, FColor::Red, FString::FString(objectItr->GetName()));
			TArray<UPillarObject> pillarComponents;
			//objectItr->GetOwner()->GetComponents<UPillarObject>(pillarComponents);
		}
		else {
			allObjects.push_back(objectItr->GetOwner());
		}
	}
}

