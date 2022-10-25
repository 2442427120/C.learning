#include "except.h"

void bad_mean::bad_val(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_hmean(a, b);
	if (a == -b)
		throw bad_gmean(a, b);
}

void bad_hmean::Report() const
{
	cout << "In bad_hmean object:\n";
	cout << "x = " << bad_mean::x_val() << ", y = " << bad_mean::y_val() << endl;
}

void bad_gmean::Report() const
{
	cout << "In bad_hmean object:\n";
	cout << "x = " << bad_mean::x_val() << ", y = " << bad_mean::y_val() << endl;
}