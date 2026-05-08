/*
 * Demonstrates structure function argument.
 */

#include <iostream>

struct Device {
	int id;
	float voltage;
};

void print_device(Device device)
{
	std::cout << device.id
		  << '\n';

	std::cout << device.voltage
		  << '\n';
}

int main(void)
{
	Device sensor = {
		10,
		5.0F
	};

	print_device(sensor);

	return 0;
}
