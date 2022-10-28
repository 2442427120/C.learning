//演示不适合使用auto_ptr的示例
//#include <iostream>
//#include <string>
//#include <memory>
//
//using namespace std;
//
//int main(void)
//{
//	//运用auto_ptr智能指针
//	/*auto_ptr<string> films[5] =
//	{
//		auto_ptr<string>(new string("ABC")),
//		auto_ptr<string>(new string("DEF")),
//		auto_ptr<string>(new string("HIJ")),
//		auto_ptr<string>(new string("KLM")),
//		auto_ptr<string>(new string("OPQ"))
//	};*/
//	//运用shared_ptr智能指针，在释放创建的内存空间时会引用计数，不会导致如auto_ptr产生的段错误
//	shared_ptr<string> films[5] =
//	{
//		shared_ptr<string>(new string("ABC")),
//		shared_ptr<string>(new string("DEF")),
//		shared_ptr<string>(new string("HIJ")),
//		shared_ptr<string>(new string("KLM")),
//		shared_ptr<string>(new string("OPQ"))
//	};
//
//	//auto_ptr<string> pwin;
//	shared_ptr<string> pwin;
//	pwin = films[2];	//将films[2]的所有权交给pwin
//
//	for (int i = 0; i < 5; i++)
//		cout << *films[i] << endl;
//	cout << *pwin << endl;
//
//	return 0;
//}
