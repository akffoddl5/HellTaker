// Copyright Epic Games, Inc. All Rights Reserved.

#include "HellTakerGameMode.h"
#include "HellTakerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AHellTakerGameMode::AHellTakerGameMode()
{
	
}

void AHellTakerGameMode::BeginPlay()
{
	GameInit_By_BluePrint();

	StageInit();
}

void AHellTakerGameMode::StageInit()
{
	Stage1_Init();
}

int AHellTakerGameMode::CheckMove(std::pair<int,int> Delta)
{
	std::pair<int,int> Next = {Player_Pos.first - Delta.second, Player_Pos.second + Delta.first};
	if(Next.first < 0 || Next.second < 0 || Next.first >= Current_Stage.Num() || Next.second >= Current_Stage[0].Num()) return 0;
	if(Current_Stage[Next.first][Next.second] == 1) return 0;

	if(Current_Stage[Next.first][Next.second] == 0)
	{
		Player_Pos = Next;
		return 1;
	}

	return 0;
}

void AHellTakerGameMode::StageAdapt(const TArray<TArray<int>>& _mp , FVector _Init_Pos, std::pair<int,int> _Player_pos)
{
	UE_LOG(LogTemp, Log, TEXT("Stage Adapt"));
	Current_Stage = _mp;
	Player_Pos = _Player_pos;
	APawn* MyPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	FVector New_Pos = _Init_Pos;
	New_Pos.Z -= _Player_pos.first * 80;
	New_Pos.X += _Player_pos.second * 80;
	if(MyPawn)
	{
		MyPawn->SetActorLocation(New_Pos);
	}
}

void AHellTakerGameMode::Stage1_Init()
{
	Current_Count = 23;
	Stage1.SetNum(7);
	for(int i=0;i<Stage1.Num();i++)
	{
		Stage1[i].Init(1, 9);
	}

	std::vector<std::pair<int,int>> available_list;
	available_list.push_back({1,5});
	available_list.push_back({1,6});
	available_list.push_back({2,2});
	available_list.push_back({2,3});
	available_list.push_back({2,4});
	available_list.push_back({2,5});
	available_list.push_back({2,6});
	available_list.push_back({3,2});
	available_list.push_back({3,3});
	available_list.push_back({3,4});
	available_list.push_back({3,5});
	available_list.push_back({4,1});
	available_list.push_back({4,2});
	available_list.push_back({5,1});
	available_list.push_back({5,2});
	available_list.push_back({5,3});
	available_list.push_back({5,4});
	available_list.push_back({5,5});
	available_list.push_back({5,6});
	available_list.push_back({6,1});
	available_list.push_back({6,2});
	available_list.push_back({6,3});
	available_list.push_back({6,4});
	available_list.push_back({6,5});
	available_list.push_back({6,6});
	available_list.push_back({6,7});


	std::vector<std::pair<int,int>> Skeleton_list;
	available_list.push_back({2,4});
	available_list.push_back({3,3});
	available_list.push_back({3,5});
	
	for(int i=0;i<available_list.size();i++)
	{
		Stage1[available_list[i].first][available_list[i].second] = 0;
	}
	
	for(int i=0;i<Skeleton_list.size();i++)
	{
		Stage1[Skeleton_list[i].first][Skeleton_list[i].second] = 2;
	}

	
	Player_Pos = {1,6};
	//Player_Pos = {0,0};
	Init_Pos = FVector(-740.f,420.000000f,1147.f);
	
	StageAdapt(Stage1,Init_Pos, Player_Pos);
	
}
