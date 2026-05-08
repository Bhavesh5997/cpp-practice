/*
 * Demonstrates pointer arithmetic.
 */

#include <iostream>

int main(void)
{
	int numbers[3] = {10, 20, 30};

	int *ptr = numbers;

	std::cout << *ptr << '\n';

	ptr++;

	std::cout << *ptr << '\n';

	ptr++;

	std::cout << *ptr << '\n';

	return 0;
}
