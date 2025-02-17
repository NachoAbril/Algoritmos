// Fill out your copyright notice in the Description page of Project Settings.


#include "OMyStatics.h"

int UOMyStatics::Fibonacci(int Pos) {
	if (Pos < 1) {
		return 0;
	}
	else if (Pos == 1 || Pos == 2) {
		return 1;
	}
	else {
		return (Fibonacci(Pos - 1) + Fibonacci(Pos - 2));
	}
};