//深入探讨模板类2:正确使用指针栈
//程序重新定义了Stack<Type>类，使Stack构造函数能够接受一个可选大小的参数。这涉及在内部使用动态数组，因此，
//Stack类需包含一个析构函数、一个赋值构造函数和一个赋值运算符。另外，通过将多个方法作为内联函数，精简了代码.
//该程序像以前介绍的模拟那样使用rand()、srand()、time()来生成随机数，这里是随机生成0和1，来模拟掷硬币的结果
//#include "stacktp2.h"
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//const int Num = 10;
//
//int main(void)
//{
//	srand(time(0));
//	cout << "Please enter stack size: ";
//	int stacksize;
//	cin >> stacksize;
//	Stack<const char*> st(stacksize);
//
//	const char* in[Num] = {
//		"1: Hank", "2: Kiki", "3: Betty", "4: Ian", "5: Wolf",
//		"6: Protia", "7: Joy", "8: Xaverie", "9: Juan", "10: Misha"
//	};
//
//	const char* out[Num];
//
//	int processed = 0;
//	int nextin = 0;
//	while (processed < Num)
//	{
//		if (st.isempty())
//			st.push(in[nextin++]);
//		else if (st.isfull())
//			st.pop(out[processed++]);
//		else if (rand() % 2 && nextin < Num)
//			st.push(in[nextin++]);
//		else
//			st.pop(out[processed++]);
//	}
//	for (int i = 0; i < Num; i++)
//		cout << out[i] << endl;
//
//	cout << "Bye.\n";
//
//	return 0;
//}