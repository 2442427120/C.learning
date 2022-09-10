#include "time.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

//Time Time::operator+(const Time& t) const
//{
//	Time sum;
//
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//
//	return sum;
//}
Time operator+(const Time& t1, const Time& t2)	//友元函数的方法实现+运算符的重载
{
	Time sum;

	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes = sum.minutes % 60;

	return sum;
}

//Time Time::operator-(const Time& t) const
//{
//	Time diff;
//	int tot1, tot2;
//
//	tot1 = t.minutes + 60 * t.hours;
//	tot2 = minutes + 60 * hours;
//	diff.minutes = (tot2 - tot1) % 60;
//	diff.hours = (tot2 - tot1) / 60;
//
//	return diff;
//}
Time operator-(const Time& t1, const Time& t2)
{
	Time diff;
	int tot1, tot2;

	tot1 = t1.hours * 60 + t1.minutes;
	tot2 = t2.hours * 60 + t2.minutes;
	/*diff.minutes = (t2.hours * 60 + t2.minutes) - (t1.hours * 60 + t1.minutes);*/
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;

	return diff;
}

Time operator*(const Time& t, double mult) 
{
	Time result;
	long totalminutes = t.hours * mult * 60 + t.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

//void Time::Show() const
//{
//	cout << hours << " hours, " << minutes << " minutes";
//}

ostream& operator<<(ostream& os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes" << endl;
	return os;
}

//方法1
//Time operator*(double n, const Time& t)
//{
//	return t * n;
//}

//方法2
Time operator*(double mult, const Time& t)
{
	Time result;
	long totalminutes = t.hours * mult * 60 + t.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}