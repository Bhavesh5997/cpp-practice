/*
 * Demonstrates enum class.
 */

#include <iostream>

enum class DeviceState {
	OFF,
	ON,
	ERROR
};

int main(void)
{
	DeviceState state = DeviceState::ON;

	if (state == DeviceState::ON)
		std::cout << "Device ON\n";

	return 0;
}
