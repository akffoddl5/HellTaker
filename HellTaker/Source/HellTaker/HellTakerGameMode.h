// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HellTakerGameMode.generated.h"

UCLASS(minimalapi)
class AHellTakerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHellTakerGameMode();

	UFUNCTION(BlueprintImplementableEvent)
	void GameInit_By_BluePrint();

	TArray<TArray<int32>> Current_Stage;
	TArray<TArray<int32>> Stage1;
	void StageInit();
	void Stage1_Init();
	int CheckMove(std::pair<int,int> Delta);
	std::pair<int,int> Player_Pos;
	FVector Init_Pos;
	void StageAdapt(const TArray<TArray<int>>& mp, FVector Init_Pos, std::pair<int,int> Player_pos);
	int Current_Count = 0;

	

protected:
	virtual void BeginPlay() override;

	
};



