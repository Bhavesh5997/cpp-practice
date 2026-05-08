/*
 * Demonstrates if-else statement.
 */

#include <iostream>

int main(void)
{
	int temperature = 25;

	if (temperature > 35)
		std::cout << "High Temperature\n";
	else
		std::cout << "Normal Temperature\n";

	return 0;
}
