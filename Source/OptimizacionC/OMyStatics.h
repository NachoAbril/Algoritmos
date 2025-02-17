// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMyStatics.generated.h"

/**
 * 
 */
UCLASS()
class OPTIMIZACIONC_API UOMyStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static int FibonacciR(int Pos);
	UFUNCTION(BlueprintCallable)
	static int FibonacciB(int Pos);
	UFUNCTION(BlueprintCallable)
	static void Wrapped(int Pos);
};
