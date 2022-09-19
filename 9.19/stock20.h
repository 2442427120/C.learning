#pragma once
#ifndef __STOCK_20_H__
#define __STOCK_20_H__

#include <iostream>

using namespace std;

class Stock
{
private:
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char* s, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);

	friend ostream& operator<<(ostream& os, const Stock& st);
	const Stock& topval(const Stock& st) const;
};


#endif
