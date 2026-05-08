/*
 * Demonstrates passing array to function.
 */

#include "array_operations.hpp"

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};

	print_array(numbers, 5);
	increment_array(numbers, 5);
	print_array(numbers, 5);

	return 0;
}
