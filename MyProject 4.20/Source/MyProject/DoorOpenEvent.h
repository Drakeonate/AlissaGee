// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomEvent.h"
#include "DoorOpenEvent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UDoorOpenEvent : public UCustomEvent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorOpenEvent();
	UPROPERTY(EditAnywhere)
	AActor *door;
	UPROPERTY(EditAnywhere)
	float speed = 60;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void CheckCondition();
	void Execute();
	bool isConditionMet = false;
private:
	float rotationValue;
	const float MAXROTATION = 45;
	float xMovement = -90;
};
