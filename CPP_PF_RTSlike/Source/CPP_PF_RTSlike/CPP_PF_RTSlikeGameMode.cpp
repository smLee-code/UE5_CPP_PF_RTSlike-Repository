// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_PF_RTSlikeGameMode.h"
#include "CPP_PF_RTSlikePlayerController.h"
#include "CPP_PF_RTSlikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_PF_RTSlikeGameMode::ACPP_PF_RTSlikeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACPP_PF_RTSlikePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}