/*
 * Demonstrates multiple namespaces.
 */

#include <iostream>

namespace uart
{
	void init(void)
	{
		std::cout << "UART Init\n";
	}
}

namespace spi
{
	void init(void)
	{
		std::cout << "SPI Init\n";
	}
}

int main(void)
{
	uart::init();
	spi::init();

	return 0;
}
