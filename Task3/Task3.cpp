// Task3.cpp: ��।���� ��� �室� ��� �ਫ������.
//

#include "Task3.h"


int main()
{
	std::cout << "������ ���: ";
	std::string name{};
	std::cin >> name;
	Leavings::Leaver leaver{};
	std::cout << leaver.leave(name);

	return 0;
}
