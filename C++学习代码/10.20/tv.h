//#pragma once
//#ifndef __TV_H__
//#define __TV_H__
//
//#include <iostream>
//
//using namespace std;
//
//class Tv;	//前置声明，解决循环依赖的问题
//
//class Remote
//{
//private:
//	int mode;
//
//	enum { Off, On };
//	enum { MinVal, MaxVal = 20 };
//	enum { Antenna, Cable };
//	enum { TV, DVD };
//public:
//	Remote(int m = TV) : mode(m) {}
//	bool volup(Tv& t);
//	bool voldown(Tv& t);
//	void onoff(Tv& t);
//	void chanup(Tv& t);
//	void chandown(Tv& t);
//	void set_chan(Tv& t, int c);
//	void set_mode(Tv& t);
//	void set_input(Tv& t);
//};
//
//class Tv
//{
//private:
//
//	int state;
//	int volume;
//	int maxchannel;
//	int channel;
//	int mode;
//	int input;
//
//public:
//	enum { Off, On };
//	enum { MinVal, MaxVal = 20 };
//	enum { Antenna, Cable };
//	enum { TV, DVD };
//
//	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
//	void onoff() { state = (state == On) ? Off : On; }
//	bool ison() const { return state == On; }
//	bool volup();
//	bool voldown();
//	void chanup();
//	void chandown();
//	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
//	void set_input() { input = (input == TV) ? DVD : TV; }
//	void settings() const;
//
//	friend void Remote::set_chan(Tv& t, int c);
//};
//
////将Remote类中的方法全部设为内联函数，使得Remote的方法能够知道Tv类中的方法
//inline bool Remote::volup(Tv& t) { return t.volup(); }
//inline bool Remote::voldown(Tv& t) { return t.voldown(); }
//inline void Remote::onoff(Tv& t) { t.onoff(); }
//inline void Remote::chanup(Tv& t) { t.chanup(); }
//inline void Remote::chandown(Tv& t) { t.chandown(); }
//inline void Remote::set_chan(Tv& t, int c) { t.channel = c; }
//inline void Remote::set_mode(Tv& t) { t.set_mode(); }
//inline void Remote::set_input(Tv& t) { t.set_input(); }
//
//#endif