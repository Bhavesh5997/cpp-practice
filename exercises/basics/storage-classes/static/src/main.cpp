/*
 * Demonstrates static local variable.
 */

#include <iostream>

void counter(void)
{
	static int count = 0;

	count++;

	std::cout << count
		  << '\n';
}

int main(void)
{
	counter();
	counter();
	counter();

	return 0;
}
