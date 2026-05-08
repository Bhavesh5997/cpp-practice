/*
 * Demonstrates basic functions in C++.
 */

#include <iostream>
#include "math_operations.hpp"

int main(void)
{
	print_message();

	int result = add(10, 20);

	std::cout << "Sum        : "
		  << result
		  << '\n';

	result = subtract(30, 10);

	std::cout << "Difference : "
		  << result
		  << '\n';

	return 0;
}
