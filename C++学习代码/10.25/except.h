#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class bad_mean : public std::logic_error
{
private:
	double x;
	double y;
public:
	bad_mean(double a, double b, const std::string& s = "invliad argument:\n") 
		: logic_error(s), x(a), y(b) {}
	void bad_val(double a, double b);
	double x_val() const { return x; }
	double y_val() const { return y; }
};

class bad_hmean : public bad_mean
{
public:
	bad_hmean(double a, double b, const std::string& s = "invalid, hmean arguments: a = -b\n") 
		: bad_mean(a, b, s) {}
	void Report() const;
};

class bad_gmean : public bad_mean
{
public:
	bad_gmean(double a, double b, const std::string& s = "invalid, gmean argument should be >= 0\n") 
		: bad_mean(a, b, s) {}
	void Report() const;
};