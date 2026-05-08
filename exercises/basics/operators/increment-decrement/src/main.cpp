/*
 * Demonstrates increment and decrement operators.
 */

#include <iostream>

int main(void)
{
	int counter = 10;

	std::cout << "Initial : "
		  << counter
		  << '\n';
	std::cout << "Post Increment : "
		  << counter++
		  << '\n';
	std::cout << "Pre Increment : "
		  << ++counter
		  << '\n';
	std::cout << "Post Decrement : "
		  << counter--
		  << '\n';
	std::cout << "Pre Decrement : "
		  << --counter
		  << '\n';

	return 0;
}
