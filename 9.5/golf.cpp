#define _CRT_SECURE_NO_WARNINGS
#include "golf.h"

Golf::Golf(const char* name, int hc)
{
	strncpy(fullname, name, Len - 1);
	fullname[Len - 1] = '\0';
	handicap = hc;
}

Golf::Golf()
{
	std::cout << "����������: ";
	std::cin.getline(fullname, Len);

	std::cout << "������ȼ�: ";
	std::cin >> handicap;
	std::cin.get();
}

void Golf::handicap_golf(int hc)
{
	handicap = hc;
}

void Golf::showgolf() const
{
	std::cout << "Name: " << fullname << ", Handicap: " << handicap << std::endl;
}