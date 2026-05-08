/*
 * Demonstrates ternary operator.
 */

#include <iostream>

int main(void)
{
	int temperature = 40;

	const char *status = (temperature > 35) ? "HIGH" : "NORMAL";

	std::cout << status
		  << '\n';

	return 0;
}
