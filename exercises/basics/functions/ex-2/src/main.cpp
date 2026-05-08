/*
 * Demonstrates basic function in C++.
 */

#include <iostream>
#include "swap.hpp"

int main(void)
{
	int num1 = 50, num2 = 100;

	std::cout << "Before swap\n"
		  << "Num1 : " << num1
		  << "\n"
		  << "Num2 : " << num2
		  << "\n";

	swap(&num1, &num2);

	std::cout << "After swap\n"
		  << "Num1 : " << num1
		  << "\n"
		  << "Num2 : " << num2
		  << "\n";

	return 0;
}
