/* Calculate sum from 1 to 10.*/

#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0;

	for (int number = 1; number <= 10; number++)
		sum += number;

	cout << "Sum : " << sum << '\n';

	return 0;
}
