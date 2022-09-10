#include <cstring>
#include "complex0.h"

complex::complex()
{
	real_part = imaginary_part = 0;
}

complex::complex(double re, double im)
{
	real_part = re;
	imaginary_part = im;
}

complex::~complex()
{

}

complex complex::operator+(const complex& co) const
{
	return complex(real_part + co.real_part, imaginary_part + co.imaginary_part);
}

complex complex::operator-(const complex& co) const
{
	return complex(real_part - co.real_part, imaginary_part - co.imaginary_part);
}

complex complex::operator~() const
{
	return complex(real_part, -imaginary_part);
}

complex complex::operator*(const complex& co) const
{
	return complex((real_part * co.real_part - imaginary_part * co.imaginary_part), (real_part * co.imaginary_part + imaginary_part * co.real_part));
}

complex operator*(double n, complex& co)
{
	return complex(n * co.real_part, n * co.imaginary_part);
	/*complex temp;
	temp.real_part = n * co.real_part;
	temp.imaginary_part = n * co.imaginary_part;
	return temp;*/
}

ostream& operator<<(ostream& os, const complex& co)
{
	os << "(" << co.real_part << ", " << co.imaginary_part << "i)";
	return os;
}

bool operator>>(istream& is, complex& co)
{

	cout << "real: ";

	while (!(is >> co.real_part))	//防止cin失效，导致主函数中死循环
	{
		cin.clear();
		while (cin.get() != '\n')
			return false;
	}

	cout << "imaginary: ";
	is >> co.imaginary_part;
	return true;
}