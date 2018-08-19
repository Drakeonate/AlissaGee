// Fill out your copyright notice in the Description page of Project Settings.

#include "FlickeringLight.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Engine/SpotLight.h"
#include "Engine/Engine.h"
//ASpotLight *spotLight;
// Sets default values for this component's properties
UFlickeringLight::UFlickeringLight()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFlickeringLight::BeginPlay()
{
	Super::BeginPlay();
	//spotLight = Cast<ASpotLight>(GetOwner()->GetComponentByClass(ASpotLight::StaticClass()));
	//GEngine->AddOnScreenDebugMessage(6, 60.f, FColor::Red, FString::FString(spotLight->GetName()));
	//// ...
	
}


// Called every frame
void UFlickeringLight::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//Flicker();
	// ...
}

void UFlickeringLight::Flicker()
{
	//if (flickerCounter % 3 == 0 || flickerCounter % 7 == 0) {
		//spotLight->LightComponent->Intensity = 0;
	//}
	//else {
		//spotLight->LightComponent->Intensity = 100000;
	//}
	
	//flickerCounter++;
}

