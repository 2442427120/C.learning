//该程序编写了一个Worker的抽象基类和其派生类Waiter和Singer
//#include "worker0.h"
//
//const int LIM = 4;
//
//int main(void)
//{
//	Waiter bob("Bob", 314L, 5);
//	Singer bev("Bev", 522L, 3);
//	Waiter w_temp;
//	Singer s_temp;
//
//	Worker* pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
//	int i;
//	for (i = 2; i < LIM; i++)
//		pw[i]->Set();
//
//	for (i = 0; i < LIM; i++)
//	{
//		pw[i]->Show();
//		cout << endl;
//	}
//
//	return 0;
//}