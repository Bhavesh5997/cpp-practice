/*
 * File        : main.cpp
 * Description : Demonstrates basic C++ variable types and printing
 *               using std::cout.
 *
 * Concepts Covered:
 * 1. Integer variables
 * 2. Fixed-width integer types
 * 3. Floating-point variables
 * 4. Character and boolean variables
 * 5. Constant variables
 * 6. auto keyword
 * 7. Console output using std::cout
 */

#include <iostream>
#include <cstdint>

int main(void)
{
	/* Integer variables */
	int temperature = 25;
	int speed = 100;

	/* Fixed width integer types */
	std::int8_t small_number = 10;
	std::uint32_t device_id = 1000U;

	/* Floating point variables */
	float voltage = 3.3F;
	double pi = 3.141592;

	/* Character variable */
	char grade = 'A';

	/* Boolean variable */
	bool is_system_ready = true;

	/* Constant variable */
	const int max_retry_count = 3;

	/* 
	 * Auto keyword
	 * Compiler automatically detects type
	 */
	auto timeout_ms = 500;

	/* Print variables */
	std::cout << "temperature      : " << temperature << '\n';
	std::cout << "speed            : " << speed << '\n';

	std::cout << "small_number     : "
		<< static_cast<int>(small_number) << '\n';

	std::cout << "device_id        : " << device_id << '\n';

	std::cout << "voltage          : " << voltage << '\n';
	std::cout << "pi               : " << pi << '\n';

	std::cout << "grade            : " << grade << '\n';

	std::cout << "is_system_ready  : "
		<< is_system_ready << '\n';

	std::cout << "max_retry_count  : "
		<< max_retry_count << '\n';

	std::cout << "timeout_ms       : "
		<< timeout_ms << '\n';

	return 0;
}
