/* Range-based for loop example. */

#include <iostream>

int main(void)
{
	int numbers[] = {1, 2, 3, 4, 5};

	for (int number : numbers)
		std::cout << number << '\n';

	return 0;
}
