//Internet Service Provider 2
//Christopher Ramirez

#include <iostream>

using namespace std;

int main()
{
	const int MAX_HOURS=744;
	char package;
	int hours=-1;
	double cost_A,cost_B,cost_C;

	do
	{
		cout<<"Which package did you order?\n"
			"A\n"
			"B\n"
			"C\n";
		cin>>package;
		system("cls");
	}
	while(package!='A'&&package!='B'&&package!='C');
	do
	{
		cout<<"How many hours did you use? \n";
		cin>>hours;
		if(!cin)
				{
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				}
		system("cls");
	}
	while(hours<0||hours>MAX_HOURS);


	switch(package)
	{
		case 'A': cout<<"You ordered Package A.\n";
			cout<<"You pay $9.95 per month for 10 hours of access.\n"
				"Additional hours are $2.00 per hour.\n";
			if(hours>20)
			{
				cost_B=(hours-20)+14.95;
			}
			else
			{
				cost_B=14.95;
			}
			if(hours>10)
			{
				cost_A = (hours-10)*2+9.95;
			}
			else
			{
				cost_A=9.95;
			}
			
			cout<<"\n\nThis month you paid $"<<cost_A<<".\n";

			if(cost_A>cost_B)
			{
				cout<<"If you upgrade to Package B you will\n"
					"save $"<<cost_A-cost_B<<" a month.\n";
			}
			cost_C=19.95;
			if(cost_A>cost_C)
			{
				cout<<"If you upgrade to Package C you will\n"
					"save $"<<cost_A-cost_C<<" a month.\n";
			}
			
			break;
		
		case 'B': cout<<"You ordered Package B.\n";
			cout<<"You pay $14.95 per month for 20 hours of access.\n"
				"Additional hours are $1.00 per hour.\n";
			if(hours>20)
			{
				cost_B = (hours-20)+14.95;
			}
			else
			{
				cost_B=14.95;
			}
			
			cout<<"\n\nThis month you paid $"<<cost_B<<".\n";
			cost_C=19.95;
			if(cost_B>cost_C)
			{
				cout<<"If you upgrade to Package C you will\n"
					"save $"<<cost_B-cost_C<<" a month.\n";
			}
			break;
		
		case 'C': cout<<"You ordered Package C.\n";
			cout<<"You pay $19.95 per month for unlimited access.\n";
				
			cost_C = 19.95;
			cout<<"\n\nThis month you paid $"<<cost_C<<".\n";
			break;

	}


	system("pause");
	return 0;
}