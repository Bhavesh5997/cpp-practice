/*
 * Demonstrates switch statement.
 */

#include <iostream>

int main(void)
{
	int command = 2;

	switch (command) {
	case 1:
		std::cout << "Start\n";
		break;
	case 2:
		std::cout << "Stop\n";
		break;
	default:
		std::cout << "Invalid\n";
		break;
	}

	return 0;
}
