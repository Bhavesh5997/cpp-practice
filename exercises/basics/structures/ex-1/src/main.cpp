/*
 * Demonstrates basic structure usage.
 */

#include <iostream>

struct Device {
	int id;
	float voltage;
	bool is_enabled;
};

int main(void)
{
	Device sensor;

	sensor.id = 1;
	sensor.voltage = 3.3F;
	sensor.is_enabled = true;

	std::cout << "Device ID      : "
		  << sensor.id
		  << '\n';

	std::cout << "Voltage        : "
		  << sensor.voltage
		  << '\n';

	std::cout << "Enabled        : "
		  << sensor.is_enabled
		  << '\n';

	return 0;
}
