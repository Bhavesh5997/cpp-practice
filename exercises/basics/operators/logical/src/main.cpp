/*
 * Demonstrates logical operators.
 */

#include <iostream>

int main(void)
{
	bool is_power_on = true, is_clock_ready = false;

	if (is_power_on || is_clock_ready)
		std::cout << "Partial Ready\n";

	is_clock_ready = true;

	if (is_power_on && is_clock_ready)
		std::cout << "System Ready\n";

	if (!is_power_on)
		std::cout << "Power Off\n";

	return 0;
}
