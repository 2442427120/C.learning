//#pragma once
//#ifndef __STONEWT_H__
//#define __STONEWT_H__
//
//#include <iostream>
//
//using namespace std;
//
//class Stonewt
//{
//private:
//	enum {Lbs_per_stn = 14};
//	/*static const int Lbs_per_stn = 14;*/
//	enum Mode {STONE, POUND};
//	int stone;
//	double pds_left;
//	double pounds;
//	Mode mode;
//	void set_stone(Stonewt& st);
//	void set_pound(Stonewt& st);
//public:
//	Stonewt();
//	Stonewt(double po, Mode form = POUND);
//	~Stonewt();
//	void stone_mode();
//	void pound_mode();
//	Stonewt operator+(const Stonewt& st) const;
//	Stonewt operator-(const Stonewt& st) const;
//	Stonewt operator*(double n) const;
//	friend Stonewt operator*(double n, Stonewt& st);
//	friend ostream& operator<<(ostream& os, const Stonewt& st);
//
//	//void show_lbs() const;
//	//void show_stn() const;
//};
//
//
//#endif
