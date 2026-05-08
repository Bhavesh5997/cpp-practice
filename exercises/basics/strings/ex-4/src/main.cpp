/*
 * Demonstrates string user input.
 */

#include <iostream>
#include <string>

int main(void)
{
	std::string user_name;

	std::cout << "Enter name : ";

	std::getline(std::cin, user_name);

	std::cout << "Hello "
		  << user_name
		  << '\n';

	return 0;
}
