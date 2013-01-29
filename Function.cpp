//Function Test
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include <iostream>
#include <string>
using namespace std;
int askNumber(int low, int high);
int main()
{
	int number = askNumber(1,10);
	cout << "You have entered " << number << ".\n"
		"Good job following directions, you now recieve one virtual cookie ... enjoy.\n";
system("pause");
return 0;
}
int askNumber(int low, int high)
{
	int num;
	do
	{
		cout << "Please enter a number" << " (" << low << " - " << high << "): ";
		cin >> num;
		if (num<low)
		{
			cout<<"Your entry of "<<num<<" is Invalid\n"
				"The lowest possible number is "<<low<<".\n";
		}
		else if (num>high)
		{
			cout<<"Your entry of "<<num<<" is Invalid\n"
				"The highest possible number is "<<high<<".\n";
		}
		else
		{
		}

	}
	while (num > high || num < low);

return num;
}