// Copyright Epic Games, Inc. All Rights Reserved.

#include "OptimizacionCGameMode.h"
#include "OptimizacionCPlayerController.h"
#include "OptimizacionCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOptimizacionCGameMode::AOptimizacionCGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AOptimizacionCPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_OPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}