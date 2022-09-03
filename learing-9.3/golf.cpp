#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "golf.h"
#include <cstring>

Golf::Golf(const char* name, int hc)
{
	strncpy(fullname, name, Len - 1);
	fullname[Len - 1] = '\0';
	handcap = hc;
}

int Golf::setgolf()
{
	char name[Len];
	int hc;

	std::cout << "请输入姓名: ";
	std::cin.getline(name, Len);
	if (strcmp(name, "") == 0)
		return 0;

	std::cout << "请输入等级: ";
	std::cin >> hc;
	std::cin.get();
	*this = Golf(name, hc);

	return 1;
}

void Golf::handicap(int hc)
{
	handcap = hc;
}

void Golf::showgolf() const
{
	std::cout << "Name: " << fullname << ", Handicap: " << handcap << std::endl;
}