/*
 * Search element in array.
 */

#include <iostream>

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50}, target = 30;
	bool found = false;

	for (int index = 0; index < 5; index++) {
		if (numbers[index] == target) {
			found = true;
			break;
		}
	}

	if (found)
		std::cout << "Element found\n";
	else
		std::cout << "Element not found\n";

	return 0;
}
