//管理虚方法：override和final
//#include <iostream>
//
//using namespace std;
//
//class Action
//{
//	int a;
//public:
//	Action(int i = 0) : a(i) {}
//	int val() const { return a; }
//	//final表示此条方法不允许在派生类中再定义
//	virtual void f(char ch) const final{ cout << val() << ch << "\n"; }
//};
//
//class Bingo : public Action
//{
//public:
//	Bingo(int i = 0) : Action(i) {}
//	//在派生类的虚方法里加上override，表示这个方法是需要覆盖基类的方法的，因此基类中也得有此方法
//	virtual void f(char ch) const override{ cout << val() << ch << "\n!"; }
//};
//
//int main(void)
//{
//	Bingo b(10);
//	b.f('@');
//
//	return 0;
//}