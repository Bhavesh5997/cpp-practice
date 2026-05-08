/*
 * Demonstrates function pointer.
 */

#include <iostream>

int add(int first_number, int second_number)
{
	return first_number
		+ second_number;
}

int main(void)
{
	int (*operation_ptr)(int, int) = add;

	int result = operation_ptr(10, 20);

	std::cout << result
		  << '\n';

	return 0;
}
