/*
 * Demonstrates void pointer.
 */

#include <iostream>

int main(void)
{
	int value = 100;
	void *ptr = &value;

	std::cout << *(static_cast<int *>(ptr))
		  << '\n';

	return 0;
}
