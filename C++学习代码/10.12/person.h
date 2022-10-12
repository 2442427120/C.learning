#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Person
{
private:
	string fname;
	string lname;
protected:
	void Data() const;	
	void Get();	//�û��ڳ������н׶��Զ���˽�е����ݳ�Ա
public:
	Person() : fname("none"), lname("none") {}
	Person(const string& fn, const string& ln) : fname(fn), lname(ln) {}
	virtual ~Person() = 0;
	virtual void Set() = 0;
	virtual void Show() const = 0;
};

class Gunslinger : virtual public Person
{
private:
	int nicks;	//�̺���
	double drawTime;	//��ǹʱ��
protected:
	void Data() const;
	void Get();	//�Զ���Gunslinger�����˽�����ݳ�Ա
public:
	Gunslinger() : Person(), nicks(0), drawTime(0L) {}
	Gunslinger(const string& fn, const string& ln, int nk = 0, double dt = 0) : Person(fn, ln), nicks(nk), drawTime(dt) {}
	Gunslinger(const Person& ps, int nk = 0, double dt = 0) : Person(ps), nicks(nk), drawTime(dt) {}
	double Draw() { return drawTime; }
	void Set();
	void Show() const;
};

class PokerPlayer : virtual public Person
{
//protected:
//	void Data() const;
//	void Get();
public:
	PokerPlayer() {}
	PokerPlayer(const string& fn, const string& ln) : Person(fn, ln) {}
	PokerPlayer(const Person& ps) : Person(ps) {}
	int Draw();
	void Set();
	void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
//protected:
//	void Data() const;
//	void Get();
public:
	BadDude() {}
	BadDude(const string& fn, const string& ln, int nk = 0, double dt = 0L)
		: Person(fn, ln), Gunslinger(fn, ln, nk, dt), PokerPlayer(fn, ln) {}
	BadDude(const Person& ps, int nk = 0, double dt = 0L)
		: Person(ps), Gunslinger(ps, nk, dt), PokerPlayer(ps) {}
	BadDude(const Gunslinger& gl) : Person(gl), Gunslinger(gl), PokerPlayer(gl) {}
	BadDude(const PokerPlayer& pp, int nk, double dt) : Person(pp), Gunslinger(pp, nk, dt), PokerPlayer(pp) {}
	double Gdraw();
	int Ccard();
	void Set();
	void Show() const;
};

#endif
