/*
 * Demonstrates logger namespace.
 */

#include <iostream>

namespace logger
{
	void info(const std::string &message)
	{
		std::cout << "[INFO] "
			  << message
			  << '\n';
	}
}

int main(void)
{
	logger::info("System started");

	return 0;
}
