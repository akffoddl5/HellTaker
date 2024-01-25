// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperFlipbookComponent.h"
#include "BasePawn.generated.h"

UCLASS()
class HELLTAKER_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();
	void Move_X();
	void Move_X2();
	void Move_Z();
	void Move_Z2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	class AHellTakerGameMode* HellTakerGameMode;

	void NeedPosition(std::pair<int,int> Delta);
	FVector Desination_Pos;

	UPROPERTY(EditAnywhere)
	UPaperFlipbookComponent* PaperFlipbookComponent;

	UPROPERTY(EditAnywhere)
	UPaperFlipbook* Flip_Idle;

	UPROPERTY(EditAnywhere)
	UPaperFlipbook* Flip_Move;

	UPROPERTY(EditAnywhere)
	UPaperFlipbook* Flip_Kick;

	
	
};
