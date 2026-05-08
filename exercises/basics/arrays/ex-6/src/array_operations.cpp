/*
 * Array operation function definitions.
 */

#include <iostream>

#include "array_operations.hpp"

void increment_array(int numbers[],
		int size)
{
	for (int index = 0; index < size; index++)
		numbers[index]++;
}

void print_array(int numbers[],
		int size)
{
	for (int index = 0; index < size; index++)
		std::cout << numbers[index]
			  << ' ';

	std::cout << '\n';
}
