// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"

#include "HellTakerGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "WorldPartition/ContentBundle/ContentBundleLog.h"


// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	HellTakerGameMode = Cast<AHellTakerGameMode>(UGameplayStatics::GetGameMode(this));
	Desination_Pos = GetActorLocation();
	
	PaperFlipbookComponent = Cast<UPaperFlipbookComponent>(GetComponentByClass(UPaperFlipbookComponent::StaticClass()));

	if(PaperFlipbookComponent)
	{
		PaperFlipbookComponent->SetFlipbook(Flip_Idle);
		PaperFlipbookComponent->Play();
	}

	
	
	
}
// void ABasePawn::OnAnimationFinishedPlaying_Idle()
// {
// 	PaperFlipbookComponent->OnFinishedPlaying.RemoveDynamic(this, &ABasePawn::OnAnimationFinishedPlaying_Idle);
// 	PaperFlipbookComponent->SetFlipbook(Flip_Idle);
// 	PaperFlipbookComponent->SetLooping(true);
// 		
// 	PaperFlipbookComponent->Play();
// }
//
//
// void ABasePawn::OnAnimationFinishedPlaying_Move()
// {
// 	UE_LOG(LogTemp, Log, TEXT(" flag1"));
// 	PaperFlipbookComponent->OnFinishedPlaying.RemoveDynamic(this, &ABasePawn::OnAnimationFinishedPlaying_Move);
// 	PaperFlipbookComponent->SetFlipbook(Flip_Move);
// 	PaperFlipbookComponent->SetLooping(true);
// 	UE_LOG(LogTemp, Log, TEXT(" flag2"));
// 		
// 	PaperFlipbookComponent->Play();
// 	PaperFlipbookComponent->OnFinishedPlaying.AddDynamic(this, &ABasePawn::OnAnimationFinishedPlaying_Idle);
// }


// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Current = GetActorLocation();
	if(Desination_Pos != FVector::ZeroVector)
	SetActorLocation(FMath::VInterpTo(Current, Desination_Pos, UGameplayStatics::GetWorldDeltaSeconds(this), 20.f));

	if(FVector::Dist(Desination_Pos, Current) < 1)
	{
		PaperFlipbookComponent->Stop();
		PaperFlipbookComponent->SetFlipbook(Flip_Idle);
		PaperFlipbookComponent->SetLooping(true);
		
		PaperFlipbookComponent->Play();
	}
	
}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//UE_LOG(LogTemp, Log, TEXT(" Input... "));
    
    
	PlayerInputComponent->BindAction(TEXT("Left"), IE_Pressed, this,&ABasePawn::Move_X2);
	PlayerInputComponent->BindAction(TEXT("Right"),IE_Pressed, this,&ABasePawn::Move_X);
	PlayerInputComponent->BindAction(TEXT("Up"),IE_Pressed, this,&ABasePawn::Move_Z);
	PlayerInputComponent->BindAction(TEXT("Down"),IE_Pressed, this,&ABasePawn::Move_Z2);
}

void ABasePawn::NeedPosition(std::pair<int,int> Delta)
{
	if(FVector::Dist(GetActorLocation(), Desination_Pos) > 1)
	{
		return;
	}
	
	int Mode = HellTakerGameMode->CheckMove(Delta);
	//HellTakerGameMode->CheckMove({0,0});

	if(Mode==1)
	{
		HellTakerGameMode->Current_Count--;
		HellTakerGameMode->SetWidgetNum(HellTakerGameMode->Current_Count);
		FVector Delta_Vector(80* Delta.first,0,80 * Delta.second);
		
		//FVector Delta_Vector(0,0,0);
		if(Delta.first != 0)
		{
			PaperFlipbookComponent->SetRelativeScale3D(FVector(Delta.first, 1, 1));
		}
		
		Desination_Pos = GetActorLocation()+ Delta_Vector;
		if(PaperFlipbookComponent)
		{
			UE_LOG(LogTemp, Log, TEXT(" Move 로 전환 했잖아"));
			PaperFlipbookComponent->SetFlipbook(Flip_Move);
			PaperFlipbookComponent->SetLooping(false);
					
			PaperFlipbookComponent->Play();
			
			//PaperFlipbookComponent->OnFinishedPlaying.AddDynamic(this, &ABasePawn::OnAnimationFinishedPlaying_Move);
		}

		
		
	}

	
}

void ABasePawn::Move_X()
{
	NeedPosition({1,0});
	UE_LOG(LogTemp, Log, TEXT(" MOVE X"));
}

void ABasePawn::Move_X2()
{
	NeedPosition({-1,0});
	UE_LOG(LogTemp, Log, TEXT(" MOVE -X"));
}


void ABasePawn::Move_Z()
{
	NeedPosition({0,1});
	UE_LOG(LogTemp, Log, TEXT(" MOVE Z"));
}

void ABasePawn::Move_Z2()
{
	NeedPosition({0,-1});
	UE_LOG(LogTemp, Log, TEXT(" MOVE -Z"));
}
