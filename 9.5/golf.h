#pragma once
#ifndef __GOLF_H__
#define __GOLF_H__

#include <iostream>
#include <cstring>

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name, int hc = 0);
	Golf();
	void handicap_golf(int hc);
	void showgolf() const;
};

#endif