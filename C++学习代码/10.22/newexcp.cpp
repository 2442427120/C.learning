////3.演示bad_alloc和new。捕获到异常后，程序将显示继承的what()方法返回的消息(该消息随实现而异)，然后终止
//#include <iostream>
//#include <new>
//#include <cstdlib>
//
//using namespace std;
//
//struct Big
//{
//	double stuff[20000];
//};
//
//int main(void)
//{
//	Big* pb;
//
//	try
//	{
//		cout << "Trying to get a big block of memory:\n";
//		pb = new Big[10000];
//		cout << "Got past the new request:\n";
//	}
//	catch (bad_alloc& ba)
//	{
//		cout << "Caught the exception!\n";
//		cout << ba.what() << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Memory successfully allocated\n";
//	pb[0].stuff[0] = 4;
//	cout << pb[0].stuff[0] << endl;
//	delete[]pb;
//
//	return 0;
//}