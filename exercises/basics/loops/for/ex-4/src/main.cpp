/* Demonstrates nested for loops.*/

#include <iostream>

int main(void)
{
	for (int row = 1; row <= 3; row++) {
		for (int column = 1; column <= 3; column++)
			std::cout << "("<< row << "," << column << ") ";

		std::cout << '\n';
	}

	return 0;
}
