////修改placenew1中出现的问题
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
//	pc3 = new(buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);	//使new定位不会覆盖前面的内容
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
//	
//	pc3->~JustTesting();	//显式地为定位new运算符创建的对象调用析构函数
//	pc1->~JustTesting();	//从最后一个创建的对象往前调用
//	delete[]buffer;
//
//	cout << "Done\n";
//
//	return 0;
//}