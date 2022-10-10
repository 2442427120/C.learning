#pragma once
#pragma once
#ifndef __WINEC_2_H__
#define __WINEC_2_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

template<typename T1, typename T2>
class Pair
{
private:
	T1 years;
	T2 bottles;
public:
	T1& first();
	T2& second();
	T1 first() const { return years; }
	T2 second() const { return bottles; }
	Pair(const T1& y, const T2& b) : years(y), bottles(b) {}
	Pair() {}
	Pair& operator=(const Pair& p);
};

template<typename T1, typename T2>
T1& Pair<T1, T2>::first()
{
	return years;
}

template<typename T1, typename T2>
T2& Pair<T1, T2>::second()
{
	return bottles;
}

template<typename T1, typename T2>
Pair<T1, T2>& Pair<T1, T2>::operator=(const Pair& p)
{
	years = p.years;
	bottles = p.bottles;

	return *this;
}

typedef valarray<int> ArrayInt;
typedef Pair<valarray<int>, valarray<int>> PairArray;

class Wine : private PairArray, private string
{
private:
	//string lable;
	int years_count;
	PairArray pa;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	string& Lable();
	void Show() const;
	int sum();
};

#endif
