/*
 * Demonstrates log append.
 */

#include <fstream>
#include <iostream>

int main(void)
{
	std::ofstream log_file("system.log", std::ios::app);

	log_file << "System started\n";

	log_file.close();

	return 0;
}
