/*
 * Demonstrates basic namespace usage.
 */

#include <iostream>

namespace math
{
	int add(int first_number, int second_number)
	{
		return first_number + second_number;
	}
}

int main(void)
{
	int result = math::add(10, 20);

	std::cout << result
		  << '\n';

	return 0;
}
