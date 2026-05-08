/*
 * Skip even numbers using continue.
 */

#include <iostream>

int main(void)
{
	for (int number = 1; number <= 10; number++) {
		if (number % 2 == 0)
			continue;

		std::cout << number << '\n';
	}

	return 0;
}
