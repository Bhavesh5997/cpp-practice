/*
 * Demonstrates dynamic array allocation.
 */

#include <iostream>

int main(void)
{
	int size = 5, *array = new int[size];

	for (int index = 0; index < size; index++)
		array[index] = index * 10;

	for (int index = 0; index < size; index++)
		std::cout << array[index]
			  << '\n';

	delete[] array;

	return 0;
}
