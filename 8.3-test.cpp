#include <iostream>

//�û�����x�����y�����ֵ��ͨ��rect_to_polar�������㼫����ֵ����ͨ��show_polar������ʾ������ֵ
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


//������ʱ����ӣ����Ƚ����ӳ�Ա��ӡ�Ȼ��ͨ�����������õ�Сʱֵ��ͨ����ģ������õ�ʣ��ķ���������sum
//����������ʱ�䣬ʹ��show_time()������ʾtrave_time�ṹ������
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

//����һ����Ϊbuildstr()�ĺ������ú�������һ��ָ�롣�ú�����������������һ���ַ���һ�����֡�����ʹ��new
//����һ�����������ֲ�����ȵ��ַ�������ÿ��Ԫ�ض���ʼ��Ϊ���ַ���Ȼ�󣬷���ָ�����ַ�����ָ�롣
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
//	pstr[n] = '\0';	//�����һ���ַ���Ϊ\0����ֹ����Խ��
//
//	while (n-- > 0)
//		pstr[n] = c;
//
//	return pstr;
//}

//ʹ��һ�������������ض����ַ����ַ����г��ֵĴ���
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