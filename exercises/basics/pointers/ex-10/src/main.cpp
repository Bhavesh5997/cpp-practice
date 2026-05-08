/*
 * Demonstrates callback function.
 */

#include <iostream>

void button_pressed_handler(void)
{
	std::cout << "Button Pressed\n";
}

void register_callback(void (*callback)(void))
{
	std::cout << "Callback registred\n";
	callback();
}

int main(void)
{
	register_callback(button_pressed_handler);

	return 0;
}
