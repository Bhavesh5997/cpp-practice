/*
 * Demonstrates string traversal.
 */

#include <iostream>
#include <string>

int main(void)
{
	std::string message = "HELLO";

	for (char character : message)
		std::cout << character
			  << '\n';

	return 0;
}
