/*
 * Demonstrates infinite while loop with delay.
 */

#include <iostream>
#include <thread>
#include <chrono>

int main(void)
{
	while (true) {
		std::cout << "Hello World\n";

		std::this_thread::sleep_for(
				std::chrono::seconds(1));
	}

	return 0;
}
