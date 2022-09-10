//《C++ Primer Plus》第十一章编程练习第7题修改
#include <iostream>
#include "complex0.h"	//to avoid confusion with complex.h

using namespace std;

int main(void)
{
	complex a(3.0, 4.0);
	complex c;


	cout << "Enter a complex number (q to quit):\n";
	while (cin >> c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complexe number (q to quit):\n";
	}
	cout << "Done!\n";

	return 0;
}

//《C++ Primer Plus》第十一章编程练习第6题修改
//#include "stonewt1.h";
//
//const int SIZE = 6;
//
//int main(void)
//{
//	double input;
//	Stonewt stone_arr[SIZE] = { 275, Stonewt(285.7), Stonewt(21, 8) };
//	Stonewt max = stone_arr[0];
//	Stonewt min = stone_arr[0];
//	Stonewt judge(11, 0.0);
//	unsigned int count = 0;
//
//	for (int i = 3; i < SIZE; i++)
//	{
//		cout << "Enter number " << i + 1 << "element (in pounds):";
//		cin >> input;
//		stone_arr[i] = Stonewt(input);
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		max = max > stone_arr[i] ? max : stone_arr[i];
//		min = min < stone_arr[i] ? min : stone_arr[i];
//		if (stone_arr[i] > judge)
//			count++;
//	}
//
//	cout << "The max weight: ";
//	max.show_lbs();
//	cout << "The min weight: ";
//	min.show_lbs();
//	cout << count << " objects are heavier than 11 stone.\n";
//
//	return 0;
//}

//《C++ Primer Plus》第十一章编程练习第5题修改
//#include "stonewt.h"
//
//int main(void)
//{
//	Stonewt incognito = 275;
//	Stonewt wolfe(285.5);
//	Stonewt taft(21, 8);
//
//	incognito.Set_Type(Stonewt::POUNDS);
//	cout << incognito;
//	wolfe.Set_Type(Stonewt::FLOATPOUNDS);
//	cout << wolfe;
//	taft.Set_Type(Stonewt::STONE);
//	cout << taft;
//
//	taft = wolfe + incognito;
//	taft.Set_Type(Stonewt::STONE);
//	cout << "taft = " << taft << endl;
//
//	taft = wolfe - incognito;
//	taft.Set_Type(Stonewt::FLOATPOUNDS);
//	cout << "taft = " << taft << endl;
//
//	wolfe = wolfe * 2;
//	wolfe.Set_Type(Stonewt::POUNDS);
//	cout << "wolfe = " << wolfe << endl;
//
//	return 0;
//}

//《C++ Primer Plus》第十一章编程练习第4题修改
//#include "time.h"
//
//int main(void)
//{
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//	Time adjusted1;
//
//	cout << "weeding time = ";
//	/*weeding.Show();*/
//	cout << weeding;	//重载<<运算符后显示类的内容
//	cout << endl;
//
//	cout << "waxing time = ";
//	/*waxing.Show();*/
//	cout << waxing;
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;	//using operator+();
//	/*total.Show();*/
//	cout << total;
//	cout << endl;
//
//	diff = weeding - waxing;	//using operator-();
//	cout << "weeding time - waxing time = ";
//	/*diff.Show();*/
//	cout << diff;
//	cout << endl;
//
//	adjusted = total * 1.5;	//using operator*()
//	cout << "adjusted work time = ";
//	/*adjusted.Show();*/
//	cout << adjusted;
//	cout << endl;
//
//	adjusted1 = 1.5 * total;	//友元函数重载*运算符，使得*左边可以使用非类
//	cout << "adjusted1 work time = ";
//	/*adjusted1.Show();*/
//	cout << adjusted1;
//	cout << endl;
//
//	cout << "**************************************\n";
//	cout << weeding << waxing;	//演示cout连续输出
//
//	return 0;
//}

//《C++ Primer Plus》第十一章编程练习第3题修改
//#include "vect2.h"
//
//using namespace VECTOR;
//
//int main(void)
//{
//	srand(time(NULL));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	int N;
//	unsigned long copy_steps_max = 0;
//	/*unsigned long copy_steps_min = 999;*/
//	unsigned long copy_steps_min = 0;
//	/*double av_steps = 0;*/
//	unsigned long av_steps = 0;
//
//	cout << "How many times do you try:";
//	cin >> N;
//	cout << "Enter target distance:";
//	cin >> target;
//	cout << "Enter step length: ";
//	cin >> dstep;
//
//	for (int i = 0; i < N; i++)
//	{
//		while (result.magval() < target)
//		{
//			direction = rand() % 360;	//随机方向
//			step.reset(dstep, direction, Vector::POL);	//以POL模式设置走一步的长度step
//			result = result + step; //使用+运算符重载，将step加到result中
//			steps++;	//走的步数加一
//		}
//		cout << "After " << steps << " steps, the subject has following location:\n";
//		cout << result;	//<<运算符的重载，以直角坐标系的形式显示
//		result.polar_mode();	//将结果设为（极坐标系）POL模式
//		cout << "or\n " << result;	//以极坐标系的形式显示
//		cout << "Average outward distance per step = " << result.magval() / steps << endl;
//
//		copy_steps_max = steps > copy_steps_max ? steps : copy_steps_max;	//得到N次中的最大值
//		if (copy_steps_min == 0)	//初始时最小值为0，为了使最小值变化，先将max值赋给min
//			copy_steps_min = copy_steps_max;
//		else
//			copy_steps_min = steps < copy_steps_min ? steps : copy_steps_min;	//得到N次中的最小值
//		av_steps += steps;	//N次的总步数
//
//		//第一轮结束后，将步数和结果距离设置为0
//		cout << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//	}
//
//	cout << "一共进行了" << N << "次测试,测试报告如下：" << endl;
//	cout << "最大步数：" << copy_steps_max << endl;
//	cout << "最小步数：" << copy_steps_min << endl;
//	cout << "平均步数: " << av_steps / N << endl;
//
//	cout << "Bye\n";
//
//	return 0;
//}

//《C++ Primer Plus》第十一章编程练习第2题修改
//#include "vect1.h"
//
//using namespace VECTOR;
//
//int main(void)
//{
//	srand(time(NULL));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target)
//	{
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		while (result.magval() < target)
//		{
//			direction = rand() % 360;	//随机方向
//			step.reset(dstep, direction, Vector::POL);	//以POL模式设置走一步的长度step
//			result = result + step; //使用+运算符重载，将step加到result中
//			steps++;	//走的步数加一
//		}
//		cout << "After " << steps << " steps, the subject has following location:\n";
//		cout << result;	//<<运算符的重载，以直角坐标系的形式显示
//		result.polar_mode();	//将结果设为（极坐标系）POL模式
//		cout << "or\n " << result;	//以极坐标系的形式显示
//		cout << "Average outward distance per step = " << result.magval() / steps << endl;
//
//		//第一轮结束后，将步数和结果距离设置为0
//		cout << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//
//	cout << "Bye\n";
//
//	return 0;
//}