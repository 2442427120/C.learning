#pragma once
#ifndef __STONEWT1_H__
#define __STONEWT1_H__

#include <iostream>

using namespace std;

class Stonewt
{
private:
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	bool operator>(const Stonewt &st);
	bool operator>=(const Stonewt& st);
	bool operator<(const Stonewt& st);
	bool operator<=(const Stonewt& st);
	bool operator==(const Stonewt& st);
	bool operator!=(const Stonewt& st);
	void show_lbs() const;
	void show_stn() const;
};


#endif
