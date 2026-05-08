/*
 * Demonstrates string concatenation.
 */

#include <iostream>
#include <string>

int main(void)
{
	std::string first_name = "Bhavesh";

	std::string last_name = "Sarvaiya";

	std::string full_name = first_name + " " + last_name;

	std::cout << full_name
		  << '\n';

	return 0;
}
