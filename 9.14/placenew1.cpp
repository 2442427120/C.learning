//使用new定位运算符合常规new运算符给对象分配内存，其中定义的类的构造函数和析构函数都会显示一些信息。
//但该程序会出现一些问题，比如调用了4个构造函数，但却只有2个析构函数，而且将不同内容定位到了同一个buffer空间
//#include <iostream>
//#include <string>
//#include <new>
//
//using namespace std;
//
//const int BUF = 512;
//
//class JustTesting
//{
//private:
//	string words;
//	int number;
//public:
//	JustTesting(const string& s = "JustTesting", int n = 0)
//	{
//		words = s; number = n; cout << words << " constructed\n";
//	}
//	~JustTesting() { cout << words << " destroyed\n"; }
//	void Show() const { cout << words << ", " << number << endl; }
//};
//
//int main(void)
//{
//	char* buffer = new char[BUF];
//	JustTesting* pc1, * pc2;
//
//	pc1 = new(buffer) JustTesting;
//	pc2 = new JustTesting("Heap1", 2);
//
//	cout << "Memory block address:\n" << "buffer" << (void*)buffer << " heap: " << pc2 << endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting* pc3, * pc4;
//	pc3 = new(buffer) JustTesting("Bad Idea", 6);
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "Memory content:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;
//	delete pc4;
//	delete[]buffer;
//	cout << "Done\n";
//
//	return 0;
//}