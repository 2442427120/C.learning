//3.修改程序清单11.15，使之报告N次测试中的最高、最低和平均步数(其中N是用户输入的整数)，而不是报告每次测试
//的结果
#include "vect2.h"

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
	int count = 0;
	unsigned long copy_steps_max = 0;
	unsigned long copy_steps_min = 999;
	double av_steps = 0;
	

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		count++;
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

		copy_steps_max = steps > copy_steps_max ? steps : copy_steps_max;	//得到N次中的最大值
		copy_steps_min = steps < copy_steps_min ? steps : copy_steps_min;	//得到N次中的最小值
		av_steps += steps;	//N次的总步数

		//第一轮结束后，将步数和结果距离设置为0
		cout << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "一共进行了" << count << "次测试,测试报告如下：" << endl;
	cout << "最大步数：" << copy_steps_max << endl;
	cout << "最小步数：" << copy_steps_min << endl;
	cout << "平均步数: " << av_steps / count << endl;

	cout << "Bye\n";

	return 0;
}

//2.对Vector类的头文件（程序清单11.13）和实现文件（程序清单11.14）进行修改，使其不再存储矢量的长度和角度，
// 而是在magval()和angval()被调用时计算它们。
// 应保留公有接口不变（公有方法及参数不变），但对私有部分（包括一些私有方法）和方法实现进行修改。然后，使
// 使用程序清单11.15对修改后的版本进行测试，结果应该与以前相同，因为Vector类的公有接口与原来相同。
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

//1.修改程序清单11.15，使之将一系列连续的随机漫步者位置写入到文件中。对于每个位置，用步号进行表示。另外，让
//该程序将初始条件（目标距离和步长）以及结果小结写入该文件中。该文件的内容与下面类似：
// Target Distanc: 100, Step Size: 20
// 0: (x, y) = (0, 0)
// 1: (x, y) = (-11.4715, 16.383)
// ...
// 28: (x, y) = (58.6749, -89.7309)
// After 28 steps, the subject has the following location:
// (x, y) = (58.6749, -89.7309)
// or
// (m,a) = (107.212, -56.8194)
// Average outward distance per step = 3.97081
//#include "vect.h"
//#include <cstdlib>
//#include <ctime>
//#include <fstream>
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
//	int i = 0;
//
//	//创建文件的对象，将后面的cout都改为outFile即可将内容写入到文档中
//	//此程序没有在控制台输出，只写入文件中，因此内容只会在文件中显示
//	ofstream outFile;
//	outFile.open("user_vect.txt");
//	
//
//	cout << "Enter target distance (q to quit): ";
//	cin >> target;
//	cout << "Enter step length: ";
//	if (!(cin >> dstep))
//		return 0;
//
//	outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
//	outFile << i << ": " << result;
//	while (result.magval() < target)
//	{
//		i++;
//		direction = rand() % 360;	//随机方向
//		step.reset(dstep, direction, Vector::POL);	//以POL模式设置走一步的长度step
//		result = result + step; //使用+运算符重载，将step加到result中
//		steps++;	//走的步数加一
//
//		outFile << i << ": " << result;
//	}
//	outFile << "After " << steps << " steps, the subject has following location:\n";
//	outFile << result;	//<<运算符的重载，以直角坐标系的形式显示
//	result.polar_mode();	//将结果设为（极坐标系）POL模式
//	outFile << "or\n " << result;	//以极坐标系的形式显示
//	outFile << "Average outward distance per step = " << result.magval() / steps << endl;
//
//	//第一轮结束后，将步数和结果距离设置为0
//	outFile << endl;
//	steps = 0;
//	result.reset(0.0, 0.0);
// 
//	//while (cin >> target)
//	//{
//	//	cout << "Enter step length: ";
//	//	if (!(cin >> dstep))
//	//		break;
//
//	//	while (result.magval() < target)
//	//	{
//	//		direction = rand() % 360;	//随机方向
//	//		step.reset(dstep, direction, Vector::POL);	//以POL模式设置走一步的长度step
//	//		result = result + step; //使用+运算符重载，将step加到result中
//	//		steps++;	//走的步数加一
//	//	}
//	//	cout << "After " << steps << " steps, the subject has following location:\n";
//	//	cout << result;	//<<运算符的重载，以直角坐标系的形式显示
//	//	result.polar_mode();	//将结果设为（极坐标系）POL模式
//	//	cout << "or\n " << result;	//以极坐标系的形式显示
//	//	cout << "Average outward distance per step = " << result.magval() / steps << endl;
//
//	//	//第一轮结束后，将步数和结果距离设置为0
//	//	cout << endl;
//	//	steps = 0;
//	//	result.reset(0.0, 0.0);
//	//	cout << "Enter target distance (q to quit): ";
//	//}
//
//	cout << "Bye\n";
//
//	return 0;
//}

//演示使用转换函数 - 隐式调用转换函数和显示调用转换函数
//#include "stonewt1.h"
//
//int main(void)
//{
//	Stonewt poppins(9, 2.8);
//	double p_wt = poppins;	//隐式调用转换为double类型的转换函数
//	cout << p_wt << " pounds\n";
//	cout << (int)poppins << " pounds\n";	//显式调用转换为int类型的转换函数
//	/*Stonewt poppins(9, 2.8);
//	double host = poppins;*/
//	/*Stonewt opppins = 125.8;*/
//
//	return 0;
//}

//使用类的构造函数初始化了一些Stonewt对象，并处理类型转换
//#include "stonewt.h"
//
//void display(const Stonewt& st, int n);
//
//int main(void)
//{
//	Stonewt incognito = (Stonewt)275; //Stonewet incognito(275);  或者 Stonewt incognito = Stonewt(275);
//	Stonewt wolfe(285.7);
//	Stonewt taft(21, 8);
//
//	incognito.show_stn();
//	wolfe.show_stn();
//	taft.show_lbs();
//
//	cout << "*************************************\n";
//	incognito = (Stonewt)276.8;
//	taft = (Stonewt)325;
//
//	incognito.show_stn();
//	taft.show_lbs();
//	taft.show_stn();
//
//	cout << "**************************************\n";
//	display(taft, 2);
//	display((Stonewt)422, 2);	//类的自动类型转换
//
//	return 0;
//}
//
//void display(const Stonewt& st, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Wow! ";
//		st.show_stn();
//	}
//}