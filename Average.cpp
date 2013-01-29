//Average
//
//  Created by Christopher Ramirez on 11/10/12.
//  Copyright (c) 2012 AI. All rights reserved.
#include <iostream>
using namespace std;

int main()
{

	int number1;
	int number2;
	int number3;
	int sum;

	std::cout << "Enter first number: ";
	std::cin >> number1;

	std::cout << "Enter second number: ";
	std::cin >> number2;

	std::cout << "Enter third number: ";
	std::cin >> number3;

	sum = (number1 + number2 + number3) / 3;

	std::cout << "Average is " << sum << std::endl;
	system("pause");
	return 0;
}