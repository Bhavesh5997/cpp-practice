/*
 * Demonstrates file reading.
 */

#include <fstream>
#include <iostream>
#include <string>

int main(void)
{
	std::ifstream file("output.txt");

	std::string line;

	while (std::getline(file, line))
		std::cout << line
			  << '\n';

	file.close();

	return 0;
}
