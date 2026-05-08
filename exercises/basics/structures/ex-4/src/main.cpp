/*
 * Demonstrates structure pointer.
 */

#include <iostream>

struct Device {
	int id;
	float voltage;
};

int main(void)
{
	Device sensor = {1, 3.3F};

	Device *device_ptr = &sensor;

	std::cout << device_ptr->id
		  << '\n';

	std::cout << device_ptr->voltage
		  << '\n';

	return 0;
}
