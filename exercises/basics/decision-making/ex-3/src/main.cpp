/*
 * Demonstrates if-else-if-else ladder.
 */

#include <iostream>

int main(void)
{
	int temperature = 0;

	if (temperature > 35)
		std::cout << "High Temperature\n";
	else if (temperature == 25)
		std::cout << "Room Temperature\n";
	else if (temperature < 20)
		std::cout << "Cold Temperature\n";
	else
		std::cout << "Between room and cold\n";

	return 0;
}
