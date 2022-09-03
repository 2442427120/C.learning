#pragma once
#ifndef __GOLF_H__
#define __GOLF_H__

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handcap;
public:
	Golf(const char* name = "", int hc = 0);
	int setgolf();
	void handicap(int hc);
	void showgolf() const;
};

#endif