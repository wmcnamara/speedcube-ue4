// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnUtility.generated.h"

/**
 * Provides utlity functions for spawning game objects and obstacles
 */
UCLASS(Blueprintable)
class SPEEDCUBE_API USpawnUtility : public UObject
{
	GENERATED_BODY()
public:
	//Spawns a lane in front of the player position with the objectToSpawn.
	UFUNCTION(BlueprintCallable, Category = Spawning)
		void SpawnLane(TSubclassOf<AActor> actorToSpawn, FVector playerPos, FVector playerForward);
};