/*
 * Simple menu-driven program using do-while.
 */

#include <iostream>

int main(void)
{
	int choice = 0;

	do {
		std::cout << "\n-----------\n";
		std::cout << "Menu\n";
		std::cout << "-----------\n";
		std::cout << "1. Start\n";
		std::cout << "2. Stop\n";
		std::cout << "3. Exit\n";

		std::cout << "Enter choice : ";
		std::cin >> choice;

		if (choice == 1)
			std::cout << "\nSystem Started\n";
		else if (choice == 2)
			std::cout << "\nSystem Stopped\n";
		else if (choice == 3)
			std::cout << "\nShutdown\n";
		else
			std::cout << "\nInvalid choice\n";
	} while (choice != 3);

	return 0;
}
