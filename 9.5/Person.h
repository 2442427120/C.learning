#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Person
{
private:
	static const int LIMIT = 25;
	std::string lname;	//Person's last name
	char fname[LIMIT];	//Person's first name
public:
	Person() { lname = ""; fname[0] = '\0'; }	//#1
	Person(const std::string& ln, const char* fn = "Heyyou");	//#2
	//the following methods display lname and fname
	void show() const;	//firstname lastname format
	void FormalShow() const; //	lastname, firstname format
};

#endif