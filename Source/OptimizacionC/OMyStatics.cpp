// Fill out your copyright notice in the Description page of Project Settings.


#include "OMyStatics.h"

int UOMyStatics::FibonacciR(int Pos) {
	if (Pos < 1) {
		return 0;
	}
	else if (Pos == 1 || Pos == 2) {
		return 1;
	}
	else {
		return (FibonacciR(Pos - 1) + FibonacciR(Pos - 2));
	}
};

int UOMyStatics::FibonacciB(int Pos) {
	
	
	if (Pos < 1) {
		return 0;
	}
	else if (Pos == 1 || Pos == 2) {
		return 1;
	}
	else {
		int P = 1;
		int S = 1;
		int T;
		for (int Index = 3; Index <= Pos; ++Index)
		{
			T = P + S;
			P = S;
			S = T;
		}

		return T;
	}
}
void UOMyStatics::Wrapped(int Pos)
{
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FibonnaciR);
		double inicial = FPlatformTime::Seconds();
		for (int i = 0; i < 10;i++) {
			FibonacciR(Pos);
		}
		double duracion = (FPlatformTime::Seconds() - inicial) * 1000.0;
		UE_LOG(LogTemp, Log, TEXT("Tiempo que ha tardado la funcion Recursiva: %lf ms"), duracion);
	}

	{

		TRACE_CPUPROFILER_EVENT_SCOPE(FibonnaciB);
		double inicial = FPlatformTime::Seconds();
		for (int i = 0; i < 10;i++) {
			FibonacciB(Pos);
		}
		double duracion = (FPlatformTime::Seconds() - inicial) * 1000.0;
		UE_LOG(LogTemp, Log, TEXT("Tiempo que ha tardado la funcion B: %lf ms"), duracion);
	}
}
;


