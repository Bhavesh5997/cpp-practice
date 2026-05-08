/*
 * Demonstrates bitwise AND.
 */

#include <iostream>
#include <bitset>

int main(void)
{
	std::uint8_t first_value = 0b1100, second_value = 0b1010, result;

	result = first_value & second_value;

	std::cout << std::bitset<4>(result)
		  << '\n';

	return 0;
}
