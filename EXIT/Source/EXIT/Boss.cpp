// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Kismet/GameplayStatics.h>
#include "BossBullet.h"

// Sets default values
ABoss::ABoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	RootComponent = boxComp;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (mState)
	{
	case EGameState::Idle:
		Idle();
		break;
	case EGameState::PatternOne:
		PatternOne();
		break;
	case EGameState::PatternTwo:
		PatternTwo();
		break;
	case EGameState::PatternThree:
		PatternThree();
		break;
	}
}

void ABoss::Idle()
{
	currentTime += GetWorld()->GetDeltaSeconds();
	if (createTime < currentTime)
	{
		mState = EGameState::PatternOne;
		currentTime = 0;
	}
}

void ABoss::PatternOne()
{
	for (int i = 0; i < 360 / shootAngle; i++)
	{
		FRotator angle = FRotator(0, i * shootAngle, 0);

		FActorSpawnParameters bulletParam;
		bulletParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<ABossBullet>(bossbullet, GetActorLocation(), angle, bulletParam);
	}
	mState = EGameState::Idle;
}

void ABoss::PatternTwo()
{

}

void ABoss::PatternThree()
{

}

