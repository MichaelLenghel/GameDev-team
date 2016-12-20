// Fill out your copyright notice in the Description page of Project Settings.

#include "InfiniteRunner.h"
#include "tailSquare.h"


// Sets default values
AtailSquare::AtailSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	float movementX = 0.001;
	float movementY = 0.0001;

}

// Called when the game starts or when spawned
void AtailSquare::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AtailSquare::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	



}

