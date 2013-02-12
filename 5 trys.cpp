//  Secret Number (5 tries)
//
//  Created by Christopher Ramirez on 11/10/12.
//  Copyright (c) 2012 AI. All rights reserved.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Arash put this code in here for fun

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator
	int secretNumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0;
	int guess;
	int tries_Left=5;
	cout << "\tWelcome to Guess My Number\n";
	cout<<"   You have 5 tries to guess the number\n";
	cout<<"           between 1 and 100\n\n";
	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		--tries_Left;
		if (tries==5)
		{
			cout << "You lose\n\n";
			cout << "The Secret Number was : "<<secretNumber<<endl;
		}
		else if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
			cout << "You have "<<tries_Left<<" tries left\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
			cout << "You have "<<tries_Left<<" tries left\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} 
	while (tries<5&&guess != secretNumber);
	

system("pause");
return 0;
}
