/* Demonstrates std::array. */

#include <iostream>
#include <array>

int main(void)
{
	std::array<int, 5> numbers =
	{
		10,
		20,
		30,
		40,
		50
	};

	for (int value : numbers)
		std::cout << value
			  << '\n';

	return 0;
}
