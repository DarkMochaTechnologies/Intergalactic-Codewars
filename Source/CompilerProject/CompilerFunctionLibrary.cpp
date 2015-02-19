// Fill out your copyright notice in the Description page of Project Settings.

#include "CompilerProject.h"
#include "CompilerFunctionLibrary.h"
#include "Regex.h"



UCompilerFunctionLibrary::UCompilerFunctionLibrary(const class FObjectInitializer& OI)
:Super(OI)
{

}

/*Gets what command is being initiated.*/
ECommandsEnum UCompilerFunctionLibrary::ParseCommand(FString Command){


	return ECommandsEnum::CE_MoveDown;
}

/*Gets the firing coordinates specified in the Fire command*/
FCoordinates UCompilerFunctionLibrary::GetFiringCoordinates(FString Command){
	FCoordinates coords;
	coords.x = 1;
	coords.y = 1;

	return coords;
}


