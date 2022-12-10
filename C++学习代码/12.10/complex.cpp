#include "complex.h"

DComplex Complex::GetReal()
{
	return realPart;
}

DComplex Complex::GetImage()
{
	return imagePart;
}

//void Complex::Add(const Complex& cp)
//{
//	realPart = realPart + cp.realPart;
//	imagePart = imagePart + cp.imagePart;
//}
//
//void Complex::Sub(const Complex& cp)
//{
//	realPart = realPart - cp.realPart;
//	imagePart = imagePart - cp.imagePart;
//}
//
//void Complex::Show() const
//{
//	cout << "Complex number is " << realPart << "." << imagePart << endl;
//}

Complex operator+(const Complex& cp1, const Complex& cp2)
{
	Complex temp;

	temp.realPart = cp1.realPart + cp2.realPart;
	temp.imagePart = cp1.imagePart + cp2.imagePart;

	return temp;
}

Complex operator-(const Complex& cp1, const Complex& cp2)
{
	Complex temp;

	temp.realPart = cp1.realPart - cp2.realPart;
	temp.imagePart = cp1.imagePart - cp2.imagePart;

	return temp;
}

ostream& operator<<(ostream& os, const Complex& cp)
{
	//如果实部为大于等于0的数，则不显示实部的正号
	if (cp.realPart > EPISON)
	{
		os.unsetf(ios::showpos);
		os << "Complex number is " << cp.realPart << showpos << cp.imagePart << endl;
	}
	else  //为复数则实部前面显示负号
		os << "Complex number is " << showpos << cp.realPart << showpos << cp.imagePart << endl;

	return os;
}