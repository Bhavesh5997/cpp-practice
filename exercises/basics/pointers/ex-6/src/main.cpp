/*
 * Demonstrates null pointer.
 */

#include <iostream>

int main(void)
{
	int *ptr = nullptr;

	if (ptr == nullptr)
		std::cout << "Pointer is null\n";

	return 0;
}
