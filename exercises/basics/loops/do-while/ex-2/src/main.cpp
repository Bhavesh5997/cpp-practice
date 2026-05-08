/*
 * Demonstrates do-while executes once even if condition is false.
 */

#include <iostream>

int main(void)
{
	int number = 10;

	do {
		std::cout << "Executed once\n";
	} while (number < 5);

	return 0;
}
