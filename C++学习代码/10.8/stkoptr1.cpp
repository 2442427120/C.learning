////深入探讨模板类1:正确使用指针栈
//#include "stacktp1.h"
//#include <iostream>
//
//using namespace std;
//
//const int Num = 10;
//
//int main(void)
//{
//	int nextin = 0;
//	int processed = 0;
//
//	const char* in[Num] = {
//		"1: Hank", "2: Kiki", "3: Betty", "4: Ian", "5: Wolf",
//		"6: Protia", "7: Joy", "8: Xaverie", "9: Juan", "10: Misha"
//	};
//	//将十个元素的地址入栈
//	Stack<const char*> st;
//	while (!st.isfull())
//	{
//		st.push(in[nextin++]);
//	}
//	//出栈
//	const char* out[Num];
//	while (!st.isempty())
//	{
//		st.pop(out[processed++]);
//	}
//	//显示出栈的内容
//	for (int i = 0; i < Num; i++)
//		cout << out[i] << endl;
//
//	return 0;
//}