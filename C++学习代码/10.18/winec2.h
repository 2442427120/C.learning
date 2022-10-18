#pragma once
#ifndef __WINEC_2_H__
#define __WINEC_2_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

//声明Pair模板类，使得typedef能够找到Pair
template<typename T1, typename T2> class Pair;
typedef valarray<int> ArrayInt;
typedef Pair<valarray<int>, valarray<int>> PairArray;

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
};

class Wine : private string, private PairArray
{
private:
	//string lable;
	int years_count;
	//PairArray pa;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	const string& Lable();
	void Show() const;
	int sum();
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

#endif
