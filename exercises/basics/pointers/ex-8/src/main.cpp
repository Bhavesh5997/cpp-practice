/*
 * Demonstrates dynamic memory allocation.
 */

#include <iostream>

int main(void)
{
	int *ptr = new int;

	*ptr = 500;

	std::cout << *ptr
		  << '\n';

	delete ptr;

	return 0;
}
