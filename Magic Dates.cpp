//Magic Dates
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
	int month;
	int day;
	int year;
	int product;


	cout << "Please enter the following information in numeric form\n ";
	cout << "\nEnter Month\n ";
		cin >> month;
	
	cout << "\nEnter Day\n ";
	    cin >> day;

	cout << "\nEnter the last two numbers of a year\n";
		cin >> year;
		product = (month * day);
		if (product == year)
			cout << "\nDate is Magic\n ";
		else
			if (product != year)
				cout << "\nDate is not Magic\n ";
		
		system ("pause");
		return 0;
}

		
