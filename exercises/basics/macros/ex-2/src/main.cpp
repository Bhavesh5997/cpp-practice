/*
 * Demonstrates debug logging macro.
 */

#include <iostream>

#define LOG_INFO(message)                               \
	std::cout                                       \
	<< "[INFO] "                                    \
	<< __FILE__                                     \
	<< ":"                                          \
	<< __LINE__                                     \
	<< " "                                          \
	<< __func__                                     \
	<< "() : "                                      \
	<< message                                      \
	<< '\n'

int main(void)
{
	LOG_INFO("System initialized");

	return 0;
}
