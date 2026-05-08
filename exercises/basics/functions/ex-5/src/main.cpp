/* Demonstrates inline functions. */

#include <iostream>
#include "math.hpp"

int main(void)
{
	int number = 5;

	std::cout << "Square : "
		  << square(number)
		  << '\n';

	std::cout << "Cube   : "
		  << cube(number)
		  << '\n';

	return 0;
}
