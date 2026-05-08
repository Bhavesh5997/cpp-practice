/*
 * Demonstrates pointer function argument.
 */

#include <iostream>

void update_value(int *value_ptr, int value)
{
	*value_ptr = value;
}

int main(void)
{
	int value = 100;

	update_value(&value, 500);

	std::cout << value
		  << '\n';

	return 0;
}
