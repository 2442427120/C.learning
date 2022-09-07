//使用类来描述二维矢量
//* 用大小（长度）和方向（角度）描述矢量
//* 用分量x和y来表示矢量
//此程序实现了对一个矢量的一些操作。首先将矢量分为直角坐标系表示和极坐标表示；通过枚举创建两个常量来表示这两种模式；在
//设计这个类时，用户修改矢量的一种表示模式，对象将自动更新另一种表示；同时，使用了运算符重载和友元函数的方法将矢量操作
//实现。
// 该程序演示如何使用Vector类：
// 该程序模拟了著名的醉鬼走路问题。其意思是，将一个人领到街灯柱下。这个人开始走动，但每一步的方向都是随机的（与前一步
// 不同）。这个问题的一种表述是，这个人走到离灯柱50英尺处需要多少步，从矢量的角度看，这相当于不断将方向随机的矢量相加，
// 直到长度超多50尺。
// 该程序允许用户选择行走距离和步长。该程序用一个变量来表示位置（一个矢量），并报告到达指定距离处（用两种格式表示）所
// 需的步数。可以看到，行走着前进得相当慢。虽然走了1000步，每步的距离为2英尺，但距离起点可能只有50英尺。这个程序将行走
// 者所走的净距离（这里为50英尺）除以步数，来指出这种行走方式的低效性。随机改变方向使得平均值远远小于步长。为了随机选
// 择方向，该程序使用了标准库函数rand()、srand()和time()。
//
#include "vect.h"
#include <cstdlib>
#include <ctime>

using namespace VECTOR;

int main(void)
{
	srand(time(NULL));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;	//随机方向
			step.reset(dstep, direction, Vector::POL);	//以POL模式设置走一步的长度step
			result = result + step; //使用+运算符重载，将step加到result中
			steps++;	//走的步数加一
		}
		cout << "After " << steps << " steps, the subject has following location:\n";
		cout << result;	//<<运算符的重载，以直角坐标系的形式显示
		result.polar_mode();	//将结果设为（极坐标系）POL模式
		cout << "or\n " << result;	//以极坐标系的形式显示
		cout << "Average outward distance per step = " << result.magval() / steps << endl;

		//第一轮结束后，将步数和结果距离设置为0
		cout << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye\n";

	return 0;
}

//常用的友元：重载<<运算符
//#include "mytime3.h"
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