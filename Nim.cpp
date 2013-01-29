//Game of Nim, two player
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string player1;
	string player2;
	int number1;
	int number2;
	int sticks=13;

	cout<<"Welcome to the game of Nim\n\n"<<endl;
	cout<<"A game where players take turns picking up sticks\n" 
		"until there are none left.\n"
		"The player that picks up the last 2 win.\n\n";
	cout<<"Player 1 please enter your name: ";
	cin>>player1;
	cout<<"\n\nPlayer 2 Please enter your name: ";
	cin>>player2;

	char again='y';
	while (again=='y')
	{
		do
		{
			do
			{
				if (sticks!=0)
				{
				cout<<"There are "<<sticks<<" sticks left"<<endl;
				cout<<player1<<" how many sticks would you like to pick up? (1/2/3/4): ";
				cin>>number1;
				if (number1>4||number1<1)
				{
					cout<<"Invalid Number try again";
				}
				else if (sticks<number1)
				{
					cout<<"You took to many try again";
				}
				else
				{
					cout<<"You have taken "<<number1<<" sticks";
				}
				}
				else
				{
					cout<<player1<<"WINS!!!!";
				}
				
			}
			while (number1>4||number1<1||sticks<number1);
			sticks=sticks-number1;
			
			do
			{
				if (sticks!=0)
				{
				cout<<"There are "<<sticks<<" sticks left"<<endl;
				cout<<player2<<" how many sticks would you like to pick up? (1/2/3/4): ";
				cin>>number2;
				if (number2>4||number2<1)
				{
					cout<<"Invalid Number try again";
				}
				else if (sticks<number2)
				{
					cout<<"You took to many try again";
				}
				else
				{
					cout<<"You have taken "<<number2<<" sticks";
				}
				}
				else 
				{
					cout<<player2<<"WINS!!!!";
				}
			 
				
			}
			while (number2>4||number2<1||sticks<number2);
			sticks=sticks-number2;
		
			
		}
		while (sticks!=0);
	}
	cout<<"Would you like to play again? (y/n): ";
	cin>>again;

	system("pause");
	return 0;
}
			
