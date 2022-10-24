#pragma once
#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

class Remote;

class Tv
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;

public:
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;
	/*int Tv_state() const { return state; }*/
	void set_remote_state(Remote& re);
	void show_state(Remote& re);

	friend class Remote;
};

class Remote
{
private:
	int mode;
	int rstate;
public:
	enum { NORMAL, INTERACTIVE };

	Remote(int m = Tv::TV, int s = NORMAL) : mode(m), rstate(s) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	void show_state() const;

	friend class Tv;
};

inline void Tv::set_remote_state(Remote& re)
{
	if (state == On)
		re.rstate = (re.rstate == Remote::NORMAL) ? Remote::INTERACTIVE : Remote::NORMAL;
}

inline void Tv::show_state(Remote & re)
{
	re.show_state();
}

#endif