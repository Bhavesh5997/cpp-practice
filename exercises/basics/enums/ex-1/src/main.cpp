/*
 * Demonstrates basic enum.
 */

#include <iostream>

enum DeviceState {
	OFF,
	ON,
	ERROR
};

int main(void)
{
	DeviceState state = ON;

	std::cout << state
		  << '\n';

	return 0;
}
