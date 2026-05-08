/*
 * Print array elements using loop.
 */

#include <iostream>

int main(void)
{
	int numbers[5] = {1, 2, 3, 4, 5};

	for (int index = 0; index < 5; index++) {
		std::cout << numbers[index]
			  << '\n';
	}

	return 0;
}
