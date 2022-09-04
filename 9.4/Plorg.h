#pragma once
#ifndef __PLORG_H__
#define __PLORG_H__

class Plorg
{
private:
	static const int MAX = 20;
	char fullname[MAX];
	int CI;
public:
	Plorg(const char name[MAX] = "Plorg", int c = 50);
	void revise_ci(int c);
	void show_plorg() const;
};

#endif