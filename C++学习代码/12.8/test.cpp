//�����鷽����override��final
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
//	//final��ʾ�������������������������ٶ���
//	virtual void f(char ch) const final{ cout << val() << ch << "\n"; }
//};
//
//class Bingo : public Action
//{
//public:
//	Bingo(int i = 0) : Action(i) {}
//	//����������鷽�������override����ʾ�����������Ҫ���ǻ���ķ����ģ���˻�����Ҳ���д˷���
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