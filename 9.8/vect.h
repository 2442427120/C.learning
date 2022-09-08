//#pragma once
//#pragma once
//#ifndef __VECT_H__
//#define __VECT_H__
//
//#include <iostream>
//
//using namespace std;
//
//namespace VECTOR
//{
//	class Vector
//	{
//	public:
//		//RECT fo rectangular, POL for polar modes
//		enum Mode { RECT, POL };
//	private:
//		double x;
//		double y;
//		double mag;	//length of vector
//		double ang;	//direction of vector in degree
//		Mode mode;	//RECT or POL
//	//private methods for setting values
//		void set_mag();
//		void set_ang();
//		void set_x();
//		void set_y();
//	public:
//		Vector();
//		Vector(double n1, double n2, Mode form = RECT);
//		void reset(double n1, double n2, Mode form = RECT);
//		~Vector();
//		double xval() const { return x; }
//		double yval() const { return y; }
//		double magval() const { return mag; }
//		double angval() const { return ang; }
//		void polar_mode();
//		void rect_mode();
//		//operator overloading
//		Vector operator+(const Vector& b) const;
//		Vector operator-(const Vector& b) const;
//		Vector operator-() const;
//		Vector operator*(double n) const;
//		//friends
//		friend Vector operator*(double n, const Vector& a);
//		friend ostream& operator<<(ostream& os, const Vector& v);
//	};
//}
//
//#endif
