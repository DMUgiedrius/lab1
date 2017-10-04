// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(int argc, char* argv[])
{
	//variables
	int guessesRemaining = 5;

	// seed the random number generator
	srand(time(nullptr));

	int computerRandomNumber = rand() % 100 + 1;

	//game start message
	std::cout << "Guess a number between 1 and 100";

	// while
	while (guessesRemaining > 0)
	{

	}
    return 0;
}

