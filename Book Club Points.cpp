//Book Club Points
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
	int num_Books=-1;//Assigned num_Books as -1 so that the while loop would function correctly
	int points=0;//Assigned points to zero as default
	
	while(num_Books<0)//Loops if incorrect number or letter is entered
	{
	cout<<"Welcome to Serendipity Booksellers club.\n"
		"To recieve points you must buy books.\n"
		"Please enter a number representing how many books you purchased: ";
	cin>>num_Books;//saves user input
	if(!cin)//Tests to make sure input is valid
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');//If input is invalid it erases the input and ignores it 
			}
	system("cls");//clear console
	}
	// following if statements test for number of books to appropiate score
	if(num_Books>=4)
	{
		points=60;
	}
	else if (num_Books==1)
	{
		points=5;
	}
	else if (num_Books==2)
	{
		points=15;
	}
	else if (num_Books==3)
	{
		points=30;
	}
	
	cout<<"\n\nYou have recieved "<<points<<" points.\n\n";// display score


	return 0;
}