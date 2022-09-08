//#pragma once
//#include "vect.h"
//
//namespace VECTOR
//{
//	const double Rad_to_deg = 45.0 / atan(1.0);
//
//	void Vector::set_mag()
//	{
//		mag = sqrt(x * x + y * y);
//	}
//
//	void Vector::set_ang()
//	{
//		if (x == 0.0 && y == 0.0)
//			ang = 0.0;
//		else
//			ang = atan2(y, x);
//	}
//
//	void Vector::set_x()
//	{
//		x = mag * cos(ang);
//	}
//
//	void Vector::set_y()
//	{
//		y = mag * sin(ang);
//	}
//
//	Vector::Vector()
//	{
//		x = y = mag = ang = 0.0;
//		mode = RECT;
//	}
//
//	Vector::Vector(double n1, double n2, Mode form)
//	{
//		mode = form;
//
//		if (mode == RECT)
//		{
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (mode == POL)
//		{
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	void Vector::reset(double n1, double n2, Mode form)
//	{
//		mode = form;
//
//		if (mode == RECT)
//		{
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (mode == POL)
//		{
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	Vector::~Vector()
//	{
//
//	}
//
//	void Vector::polar_mode()
//	{
//		mode = POL;
//	}
//
//	void Vector::rect_mode()
//	{
//		mode = RECT;
//	}
//
//	//使用构造函数来完成相加操作，构造函数里分类了传递的参数是直角坐标表示还是极坐标表示
//	//若不使用构造函数的写法，将写成如下形式：
//	//Vector Vector::operator+(const Vector& b) const
//	//{
//	//	 Vector sum;
//	//   sum.x = x + b.x;
//	//   sum.y = y + b.y;
//	//   sum.set_mag(sum.x, sum.y);
//	//   sum.set_ang(sum.x, sum.y);
//	//   return sum
//	// }
//	//下面的减法和乘法原理相似，显然此种方式是比较麻烦的
//	Vector Vector::operator+(const Vector& b) const
//	{
//		return Vector(x + b.x, y + b.y);
//	}
//
//	Vector Vector::operator-(const Vector& b) const
//	{
//		return Vector(x - b.x, y - b.y);
//	}
//
//	//返回相反数
//	Vector Vector::operator-() const
//	{
//		return Vector(-x, -y);
//	}
//
//	Vector Vector::operator*(double n) const
//	{
//		return Vector(n * x, n * y);
//	}
//
//	Vector operator*(double n, const Vector& a)
//	{
//		return a * n;
//	}
//
//	ostream& operator<<(ostream& os, const Vector& v)
//	{
//		if (v.mode == Vector::RECT)
//			os << "(x,y) = (" << v.x << ", " << v.y << ")\n";
//		else if (v.mode == Vector::POL)
//			os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")\n";
//		else
//			os << "Vector object mode is invalid";
//		return os;
//	}
//}