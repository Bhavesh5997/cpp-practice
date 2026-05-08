/*
 * Demonstrates arithmetic operators.
 */

#include <iostream>

int main(void)
{
	int first_number = 20, second_number = 10;

	std::cout << "Addition       : "
		  << first_number + second_number
		  << '\n';

	std::cout << "Subtraction    : "
		  << first_number - second_number
		  << '\n';

	std::cout << "Multiplication : "
		  << first_number * second_number
		  << '\n';

	std::cout << "Division       : "
		  << first_number / second_number
		  << '\n';

	std::cout << "Modulo         : "
		  << first_number % second_number
		  << '\n';

	return 0;
}
