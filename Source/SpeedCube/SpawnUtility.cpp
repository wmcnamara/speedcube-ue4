// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnUtility.h"

void USpawnUtility::SpawnLane(TSubclassOf<AActor> actorToSpawn, FVector playerPos, FVector playerForward)
{
	FActorSpawnParameters spawnParams;
	AActor* spawnedActor = GetWorld()->SpawnActor<AActor>(actorToSpawn, playerPos, FRotator(0, 0, 0), spawnParams);
}
