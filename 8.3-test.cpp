#include <iostream>

//用户输入x坐标和y坐标的值，通过rect_to_polar函数计算极坐标值，并通过show_polar函数显示极坐标值
using namespace std;

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}

	return 0;
}

polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);

	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;

	cout << "ditance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg << "degree" << endl;
}


//将两个时间相加，首先将分钟成员相加。然后通过整数除法得到小时值，通过求模运算符得到剩余的分钟数。用sum
//函数来计算时间，使用show_time()函数显示trave_time结构的内容
//using namespace std;
//
//struct travel_time
//{
//	int hours;
//	int mins;
//};
//
//const int Mins_per_hr = 60;
//
//travel_time sum(travel_time t1, travel_time t2);
//void show_time(travel_time t);
//
//int main(void)
//{
//	travel_time day1 = { 5, 45 };
//	travel_time day2 = { 4, 55 };
//
//	travel_time trip = sum(day1, day2);
//	cout << "Two-day total: ";
//	show_time(trip);
//
//	travel_time day3 = { 4, 32 };
//	cout << "Three_day total: ";
//	show_time(sum(trip, day3));
//
//	return 0;
//}
//
//travel_time sum(travel_time t1, travel_time t2)
//{
//	travel_time total;
//
//	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
//	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / Mins_per_hr;
//
//	return total;
//}
//
//void show_time(travel_time t)
//{
//	cout << t.hours << " hours, " << t.mins << " minutes\n";
//}

//定义一个名为buildstr()的函数，该函数返回一个指针。该函数接受两个参数：一个字符和一个数字。函数使用new
//创建一个长度与数字参数相等的字符串，将每个元素都初始化为该字符。然后，返回指向新字符串的指针。
//using namespace std;
//
//char* buildstr(char c, int n);
//
//int main(void)
//{
//	int times;
//	char ch;
//
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//
//	char* ps = buildstr(ch, times);
//	cout << ps << endl;
//	delete[] ps;
//
//	ps = buildstr('+', 20);
//	cout << ps << "-DONE-" << ps << endl;
//	delete[]ps;
//
//	return 0;
//}
//
//char* buildstr(char c, int n)
//{
//	char* pstr = new char[n + 1];
//	pstr[n] = '\0';	//将最后一个字符设为\0，防止数组越界
//
//	while (n-- > 0)
//		pstr[n] = c;
//
//	return pstr;
//}

//使用一个函数来计算特定的字符在字符串中出现的次数
//using namespace std;
//
//unsigned int c_in_str(const char* str, char ch);
//
//int main(void)
//{
//	char mmm[15] = "minimum";
//	const char* wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in" << wail << endl;
//	
//	return 0;
//}
//
//unsigned int c_in_str(const char* str, char ch)
//{
//	unsigned int count = 0;
//
//	while (*str)
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//
//	return count;
//}