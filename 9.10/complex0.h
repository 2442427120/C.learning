#pragma once
#ifndef __COMPLEX_0_H__
#define __COMPLEX_0_H__

#include <iostream>
using namespace std;

class complex
{
private:
	double real_part;
	double imaginary_part;
public:
	complex();
	complex(double re, double im = 0);
	~complex();
	complex operator+(const complex& co) const;
	complex operator-(const complex& co) const;
	complex operator~() const;
	complex operator*(const complex& co) const;
	friend complex operator*(double n, complex& co);
	friend ostream& operator<<(ostream& os, const complex& co);
	friend bool operator>>(istream& is, complex& co);
};

#endif