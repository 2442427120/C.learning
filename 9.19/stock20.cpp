#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "stock20.h"

Stock::Stock()
{
	company = new char[1];
	company[0] = '\0';
	shares = 0;
	share_val = 0;
	total_val = 0;
}

Stock::Stock(const char* s, long n, double pr)
{
	company = new char[strlen(s) + 1];
	strcpy(company, s);
	
	if (n < 0)
	{
		cout << "Number of shares can't be negative;" << company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	delete[]company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares putchased can't be negative.Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares putchased can't be negative.Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!Transcation is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

ostream& operator<<(ostream& os, const Stock& st)
{
	os << "Company: " << st.company << " Shares: " << st.shares << endl;
	os << " Share Price: $" << st.share_val;
	os << "Total worth: $" << st.total_val << endl;

	return os;
}

const Stock& Stock::topval(const Stock& st) const
{
	if (st.total_val > total_val)
		return st;
	else
		return *this;
}