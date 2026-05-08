/*
 * Demonstrates relational operators.
 */

#include <iostream>

int main(void)
{
	int temperature = 35;

	std::cout << (temperature > 30)
	          << '\n';

	std::cout << (temperature < 30)
		  << '\n';

	std::cout << (temperature == 35)
		  << '\n';

	return 0;
}
