/*
 * Demonstrates conditional compilation.
 */

#include <iostream>

#define DEBUG

int main(void)
{
#ifdef DEBUG
	std::cout << "Debug Enabled\n";
#endif

	return 0;
}
