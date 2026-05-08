/* Function Overloading */

#include <iostream>
#include "calculator.hpp"

int add(int first_number, int second_number)
{
	std::cout << "Inputs are integers\n";

	return first_number + second_number;
}

double add(double first_number, double second_number)
{
	std::cout << "Inputs are doubles\n";

	return first_number + second_number;
}
