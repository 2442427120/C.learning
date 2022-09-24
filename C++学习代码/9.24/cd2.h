#pragma once
#ifndef __CD_2_H__
#define __CD_2_H__

#include <iostream>
using namespace std;

//base class
class Cd	//resprent a CD disk
{
private:
	char* performers;
	char lable[20];
	int selections;	//number of selections
	double playtime;	//playing time in minutes
public:
	Cd(const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0.0);
	Cd(const Cd& d);
	/*Cd();*/
	virtual ~Cd();
	virtual void Report() const;	//reports all CD data
	Cd& operator=(const Cd& d);
};
class Classic : public Cd
{
private:
	char* cd_name;
public:
	Classic(const char* cn = "none", const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0.0);
	Classic(const char* cn, const Cd& d);
	Classic(const Classic& cs);
	virtual ~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& cs);
};

#endif
