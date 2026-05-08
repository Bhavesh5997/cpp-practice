/*
 * Demonstrates file writing.
 */

#include <fstream>
#include <iostream>

int main(void)
{
	std::ofstream file("output.txt");

	file << "Hello World\n";
	file << "C++ File Handling\n";

	file.close();

	std::cout << "File written\n";

	return 0;
}
