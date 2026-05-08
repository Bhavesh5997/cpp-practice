/*
 * Demonstrates nested structures.
 */

#include <iostream>

struct Address {
	int pin_code;
};

struct Employee {
	int id;
	Address office_address;
};

int main(void)
{
	Employee developer;

	developer.id = 101;
	developer.office_address.pin_code = 395007;

	std::cout << developer.id
		  << '\n';

	std::cout << developer.office_address.pin_code
		  << '\n';

	return 0;
}
