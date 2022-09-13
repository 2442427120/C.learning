//#pragma once
//#include "vect1.h"
//
////double mag = 0;
////double ang = 0;
//
//namespace VECTOR
//{
//	const double Rad_to_deg = 45.0 / atan(1.0);
//
//	/*void Vector::set_mag()
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
//	}*/
//
//	void Vector::set_x(double mag, double ang)
//	{
//		x = mag * sin(ang);
//	}
//
//	void Vector::set_y(double mag, double ang)
//	{
//		y = mag * sin(ang);
//	}
//
//	Vector::Vector()
//	{
//		x = y  = 0.0;
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
//	/*		mag = sqrt(x * x + y * y);
//			ang = atan2(y, x);*/
//			
//		}
//		else if (mode == POL)
//		{
//			/*mag = n1;
//			ang = n2 / Rad_to_deg;
//			x = mag * cos(ang);
//			y = mag * sin(ang);*/
//			set_x(n1, n2 / Rad_to_deg);
//			set_y(n1, n2 / Rad_to_deg);
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = 0.0;
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
//			/*mag = sqrt(x * x + y * y);
//			ang = atan2(y, x);*/
//
//		}
//		else if (mode == POL)
//		{
//		/*	mag = n1;
//			ang = n2 / Rad_to_deg;
//			x = mag * cos(ang);
//			y = mag * sin(ang);*/
//			set_x(n1, n2 / Rad_to_deg);
//			set_y(n1, n2 / Rad_to_deg);
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = 0.0;
//			mode = RECT;
//		}
//	}
//
//	Vector::~Vector()
//	{
//
//	}
//
//	double Vector::magval() const
//	{
//		return sqrt(x * x + y * y);
//	}
//
//	double Vector::angval() const
//	{
//		if (x == 0.0 && y == 0.0)
//			return 0.0;
//		else
//			return atan2(y, x);
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
//	//ʹ�ù��캯���������Ӳ��������캯��������˴��ݵĲ�����ֱ�������ʾ���Ǽ������ʾ
//	//����ʹ�ù��캯����д������д��������ʽ��
//	//Vector Vector::operator+(const Vector& b) const
//	//{
//	//	 Vector sum;
//	//   sum.x = x + b.x;
//	//   sum.y = y + b.y;
//	//   sum.set_mag(sum.x, sum.y);
//	//   sum.set_ang(sum.x, sum.y);
//	//   return sum
//	// }
//	//����ļ����ͳ˷�ԭ�����ƣ���Ȼ���ַ�ʽ�ǱȽ��鷳��
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
//	//�����෴��
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
//			os << "(m,a) = (" << v.magval() << ", " << v.angval() << ")\n";
//		else
//			os << "Vector object mode is invalid";
//		return os;
//	}
//}