// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "cstdlib"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoidTestTaskUE5GameModeBase.generated.h"
#include "CoreFwd.h"
#include "Kismet/KismetSystemLibrary.h"

/**
 * 
 */
UCLASS()
class ARKANOIDTESTTASKUE5_API AArkanoidTestTaskUE5GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)

		 TArray <FVector> RandomArrayVectors;

		AArkanoidTestTaskUE5GameModeBase() 
	{
	
	}
};
