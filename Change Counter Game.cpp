//Change Counter
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout<<"Ok, I know I told you that I wouldn't ask for anymore money,\n" 
	"but I am in dire need of a dollar. I'll take it in any form; Nickels, pennies, anything!\n" 
	"Just please, please let me borrow a dollar. I'll pay you back I promise\n\n"
	"ENTER THE AMOUNT OF PENNIES, DIMES, NICKELS, OR QUARTERS TO MAKE A DOLLAR FOR\n"
	"YOUR POOR FRIEND HERE:"<< endl;

	int quarterAmount;
	int dimeAmount;
	int nickelAmount;
	int pennyAmount;
	int totalAmount = 0;

	do
	{
		totalAmount = 0;

		cout<<"Enter the amount of quarters you want to give: \n" << endl;
		cin>> quarterAmount;
		totalAmount += quarterAmount * 25;
		cout<<"You gave "<<quarterAmount<< "quarter/s!\n"<< endl;

		cout <<"Enter the amount of dimes you want to give: \n" << endl;
		cin>> dimeAmount;
		totalAmount+=dimeAmount * 10;
		cout<<"You gave "<<dimeAmount<< "dime/s!"<< endl;
	
		cout<<"Enter the amount of nickels you want to give: \n" << endl;
		cin >> nickelAmount;
		totalAmount += nickelAmount * 5;
		cout<<"You gave "<<nickelAmount<< "nickel/s!\n" << endl;
	
		cout<<"Enter the amount of pennies you want to give: \n" << endl;
		cin>> pennyAmount;
		totalAmount+=pennyAmount * 1;
		cout<<"You gave "<<pennyAmount << "pennie/s!\n" << endl;

		if (totalAmount > 100)
		{
			cout<<"You are cheating yourself. Re-count that, buddy"<< endl;
		}
		else if (totalAmount < 100)
		{
			cout<<"C'mon, atleast give the poor guy a full dollar amount. Re-count, buddy"<< endl;
		}
		else if (totalAmount == 100)
		{
			cout<<"Thanks for the dollar, man!"<< endl;
		}
	}
	while (totalAmount != 100);
	

system ("pause");
return 0;
}