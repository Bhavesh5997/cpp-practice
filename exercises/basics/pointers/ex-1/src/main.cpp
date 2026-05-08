/*
 * Demonstrates basic pointer usage.
 */

#include <iostream>

int main(void)
{
	int temperature = 25;

	int *temperature_ptr = &temperature;

	std::cout << "Value    : "
		  << temperature
		  << '\n';

	std::cout << "Address  : "
		  << temperature_ptr
		  << '\n';

	std::cout << "Dereference : "
		  << *temperature_ptr
		  << '\n';

	return 0;
}
