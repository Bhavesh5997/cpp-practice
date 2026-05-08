/*
 * Print numbers from 5 to 1.
 */

#include <iostream>

int main(void)
{
	int number = 5;

	while (number >= 1) {
		std::cout << number << '\n';

		number--;
	}

	return 0;
}
