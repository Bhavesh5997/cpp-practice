/*
 * Modify variable using pointer.
 */

#include <iostream>

int main(void)
{
	int speed = 100;

	int *speed_ptr = &speed;

	*speed_ptr = 200;

	std::cout << speed
		  << '\n';

	return 0;
}
