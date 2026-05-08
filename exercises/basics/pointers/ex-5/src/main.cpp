/*
 * Demonstrates double pointer.
 */

#include <iostream>

int main(void)
{
	int value = 10, *ptr = &value, **double_ptr = &ptr;

	std::cout << **double_ptr
		  << '\n';

	return 0;
}
