// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CompilerFunctionLibrary.generated.h"

/**
 * @author Carl
 */

/*Enum type for the different types of commands accepted.*/
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ECommandsEnum : uint8
{
	CE_MoveUp 			UMETA(DisplayName = "Move Up"),
	CE_MoveDown 		UMETA(DisplayName = "Move Down"),
	CE_MoveLeft			UMETA(DisplayName = "Move Left"),
	CE_MoveRight		UMETA(DisplayName = "Move Right"),
	CE_Fire				UMETA(DisplayName = "Fire"),
	CE_InvalidCommand	UMETA(DisplayName = "Invalid Command")
};

/*Structure wrapper for a coordinate which is composed of x and y*/
USTRUCT(BlueprintType)
struct FCoordinates{
	GENERATED_USTRUCT_BODY()

	/*x coordinate*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates Struct")
	int32 x;

	/*y coordinate*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates Struct")
	int32 y;

};



UCLASS(BlueprintType, Blueprintable)
class COMPILERPROJECT_API UCompilerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/*Gets what command is being initiated.*/
	UFUNCTION(BlueprintCallable, Category = "Parser")
	static ECommandsEnum ParseCommand(FString Command);

	/*Gets the firing coordinates specified in the command*/
	UFUNCTION(BlueprintCallable, Category = "Parser")
	static FCoordinates GetFiringCoordinates(FString FireCommand);

};
