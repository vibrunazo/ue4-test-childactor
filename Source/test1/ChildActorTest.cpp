// Fill out your copyright notice in the Description page of Project Settings.


#include "ChildActorTest.h"

// Sets default values
AChildActorTest::AChildActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = RootComp;
	ChildActComp = CreateDefaultSubobject<UChildActorComponent>(TEXT("child"));
	ChildActComp->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AChildActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChildActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

