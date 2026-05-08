/*
 * Print numbers from 1 to 5 using do-while loop.
 */

#include <iostream>

int main(void)
{
	int number = 1;

	do {
		std::cout << number << '\n';

		number++;
	} while (number <= 5);

	return 0;
}
