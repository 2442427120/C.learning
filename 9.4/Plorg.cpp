#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Plorg.h"

Plorg::Plorg(const char name[], int c)
{
	int len = strlen(name);
	if (len > MAX - 1)
	{
		std::cout << "Name is too long.\n";
		return;
	}

	strncpy(fullname, name, len);
	fullname[len] = '\0';
	CI = c;
}

void Plorg::revise_ci(int c)
{
	CI = c;
}

void Plorg::show_plorg() const
{
	std::cout << "Name: " << fullname << ", CI: " << CI << std::endl;
}