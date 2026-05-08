/*
 * Demonstrates state machine using enum.
 */

#include <iostream>

enum class SystemState {
	IDLE,
	RUNNING,
	ERROR
};

int main(void)
{
	SystemState current_state = SystemState::RUNNING;

	switch (current_state) {
	case SystemState::IDLE:
		std::cout << "Idle\n";
		break;

	case SystemState::RUNNING:
		std::cout << "Running\n";
		break;

	case SystemState::ERROR:
		std::cout << "Error\n";
		break;
	}

	return 0;
}
