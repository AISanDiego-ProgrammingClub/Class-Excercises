//Geometry Calculator
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
	int menu=0;//1-4 menu choice
	float radius, length, width, base, height;
	double area;
	const double pie=3.14159;
	while(menu<1||menu>4)
	{
	cout<<"Geometry Calculator\n"
		"1. Calculate the Area of a Circle\n"
		"2. Calculate the Area of a Rectangle\n"
		"3. Calculate the Area of a Triangle\n"
		"4. Quit\n"
		"Enter your choice (1-4): ";
	cin>>menu;
	if(!cin)
			{
				cout<<"Invalid Entry\n";
				system("pause");
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
	system("cls");
	}


	if(menu==1)
	{
		system("cls");
		do
		{
			cout<<"Calculate the Area of a Circle\n"
				"Enter a radius: ";
			cin>>radius;
			if(radius<0)
			{
				cout<<"Invalid Entry\n";
			}
		}
		while(radius<0);

		area = pie * pow(radius,2);
		cout<<"The Area of the Circle is "<<area<<".\n";
	}
	else if(menu==2)
	{
		system("cls");
		do
		{
			cout<<"Calculate the Area of a Rectangle\n"
				"Enter a Length: ";
			cin>>length;
			cout<<"Enter a Width: ";
			cin>>width;
			if(length<0||width<0)
			{
				cout<<"Invalid Entry\n";
			}
		}
		while(length<0||width<0);
		area = length * width;
		cout<<"The Area of the Rectangle is "<<area<<".\n";
	}
	else if(menu==3)
	{
		system("cls");
		do
		{
			cout<<"Calculate the Area of a Triangle\n"
				"Enter a Base: ";
			cin>>base;
			cout<<"Enter a Height: ";
			cin>>height;
			if(base<0||height<0)
			{
				cout<<"Invalid Entry\n";
			}
		}
		while(base<0||height<0);

		area = base * height * .5;
		cout<<"The Area of the Triangle is "<<area<<".\n";
	}
	else
	{
		system("cls");
		cout<<"Goodbye\n";
	}

	return 0;
}