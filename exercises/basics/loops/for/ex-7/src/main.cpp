/*
 * Demonstrates break statement.
 */

#include <iostream>

int main(void)
{
	for (int number = 1; number <= 10; number++) {
		if (number == 5)
			break;

		std::cout << number << '\n';
	}

	return 0;
}
