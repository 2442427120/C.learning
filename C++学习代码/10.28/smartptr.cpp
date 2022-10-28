//1.演示如何使用全部三种智能指针。每个智能指针都放在一个代码块内，这样离开代码块时指针将过期。Report类使用
//方法报告对象的创建和销毁。
//#include <iostream>
//#include <string>
//#include <memory>	//使用智能指针必须包含此头文件
//
//using namespace std;
//
//class Report
//{
//private:
//	string str;
//public:
//	Report(const string& s) : str(s) { cout << "Object created\n"; }
//	~Report() { cout << "Object deleted\n"; }
//	void comment() const { cout << str << endl; }
//};
//
//int main(void)
//{
//	{
//		auto_ptr<Report> ps(new Report("using auto_ptr"));
//		ps->comment();
//	}
//
//	{
//		shared_ptr<Report> ps(new Report("using shared_ptr"));
//		ps->comment();
//	}
//
//	{
//		unique_ptr<Report> ps(new Report("using unique_ptr"));
//		ps->comment();
//	}
//
//	return 0;
//}