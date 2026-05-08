/*
 * Demonstrates array of structures.
 */

#include <iostream>

struct Student {
	int roll_number;
	int marks;
};

int main(void)
{
	Student students[3] = {
		{1, 80},
		{2, 90},
		{3, 70}
	};

	for (int index = 0; index < 3; index++)
		std::cout << students[index].roll_number
			  << " : "
			  << students[index].marks
			  << '\n';

	return 0;
}
