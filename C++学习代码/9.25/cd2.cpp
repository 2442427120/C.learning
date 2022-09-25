#define _CRT_SECURE_NO_WARNINGS
#include "cd2.h"
#include <cstring>

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	lable = new char[strlen(s2)];
	strcpy(lable, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	delete[]performers;
	delete[]lable;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	lable = new char[strlen(d.lable)];
	strcpy(lable, d.lable);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = NULL;
	lable = NULL;
	selections = playtime = 0;
}

Cd::~Cd()
{
	delete[]performers;
	delete[]lable;
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Lable: " << lable << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
		return *this;

	delete[]performers;
	delete[]lable;

	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	lable = new char[strlen(d.lable) + 1];
	strcpy(lable, d.lable);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

//������
Classic::Classic() : Cd()
{
	cd_name = NULL;
}

Classic::Classic(const char* cn, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	cd_name = new char[strlen(cn) + 1];
	strcpy(cd_name, cn);
}

Classic::Classic(const char* cn, const Cd& d) : Cd(d)
{
	cd_name = new char[strlen(cn) + 1];
	strcpy(cd_name, cn);
}

Classic::Classic(const Classic& cs) : Cd(cs)
{
	delete[]cd_name;
	cd_name = new char[strlen(cs.cd_name) + 1];
	strcpy(cd_name, cs.cd_name);
}

Classic::~Classic()
{
	delete[]cd_name;
}

void Classic::Report() const
{
	Cd::Report();
	cout << "Cd_name: " << cd_name << endl;
}

Classic& Classic::operator=(const Classic& cs)
{
	if (this == &cs)
		return *this;

	Cd::operator=(cs);
	delete[]cd_name;
	cd_name = new char[strlen(cs.cd_name) + 1];
	strcpy(cd_name, cs.cd_name);
	return *this;
}