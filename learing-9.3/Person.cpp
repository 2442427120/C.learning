#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Person.h"
#include <cstring>

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strncpy(fname, fn, 24);
	fname[24] = '\0';
}

void Person::show() const
{
	std::cout << "First name: " << fname << ", Last name: " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << "Last name: " << lname << ", First name: " << fname << std::endl;
}
