#pragma once
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <iostream>

using namespace std;

typedef double DComplex;
const double EPISON = 1e-7;

class Complex
{
private:
	DComplex realPart;
	DComplex imagePart;
public:
	Complex(DComplex rp = 0, DComplex ip = 0) : realPart(rp), imagePart(ip) {}
	DComplex GetReal();
	DComplex GetImage();
	//void Add(const Complex& cp);
	//void Sub(const Complex& cp);
	//void Show() const;
	
	//运用重载的运算符实现加、减和显示
	friend Complex operator+(const Complex& cp1, const Complex& cp2);
	friend Complex operator-(const Complex& cp1, const Complex& cp2);
	friend ostream& operator<<(ostream& os, const Complex& cp);
};

#endif
