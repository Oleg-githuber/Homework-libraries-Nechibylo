// Task3.cpp: определяет точку входа для приложения.
//

#include "Task3.h"


int main()
{
	std::cout << "Введите имя: ";
	std::string name{};
	std::cin >> name;
	Leavings::Leaver leaver{};
	std::cout << leaver.leave(name);

	return 0;
}
