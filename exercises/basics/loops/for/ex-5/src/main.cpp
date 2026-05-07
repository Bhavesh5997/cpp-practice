/* Print triangle star pattern. */

#include <iostream>

using namespace std;

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int column = 1; column <= row; column++)
			std::cout << "* ";

		cout << '\n';
	}

	return 0;
}
