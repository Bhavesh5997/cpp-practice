/*
 * Demonstrates string length.
 */

#include <iostream>
#include <string>

int main(void)
{
	std::string device_name = "UART_DRIVER";

	std::cout << "Length : "
		  << device_name.length()
		  << '\n';

	return 0;
}
