#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"


Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strncpy(fname, fn, 24);
	fname[24] = '\0';
}

void Person::show() const
{
	if (lname == "" && fname[0] == '\0')
		cout << "No name:\n";
	else
		cout << "Person's name: " << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	if (lname == "" && fname == '\0')
		cout << "No name:\n";
	else
		cout << "Person's name: " << lname << ", " << fname << endl;
}
