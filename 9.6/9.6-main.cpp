//-��*�������������ʾ������ʾ���*�����������ʱ���ֵ����⣨���ݵ�ʵ����*��������������
//��һ�֣�����������һ��*����������غ��������ں����е�����ĳ�Ա�������ڶ���ͨ��������Ԫ���������
#include "mytime2.h"

int main(void)
{
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;
	Time adjusted1;

	cout << "weeding time = ";
	weeding.Show();
	cout << endl;

	cout << "waxing time = ";
	waxing.Show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;	//using operator+();
	total.Show();
	cout << endl;

	diff = weeding - waxing;	//using operator-();
	cout << "weeding time - waxing time = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;	//using operator*()
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	adjusted1 = 1.5 * total;
	cout << "adjusted1 work time = ";
	adjusted1.Show();
	cout << endl;

	return 0;
}

//������������Ƶ���ʾ
//#include <iostream>
//
//using namespace std;
//
//class Num
//{
//private:
//	int n;
//public:
//	Num();
//	Num(int m);
//	void operator=(int m);
//};
//
//Num::Num()
//{
//	n = 0;
//	cout << "hello world\n";
//}
//
//Num::Num(int m)
//{
//	n = m;
//	cout << "good morning\n";
//}
//
//void Num::operator=(int m)
//{
//	n = m;
//	cout << "Successful\n";
//}
//
//int main(void)
//{
//	Num a;
//
//	//a = 10; //������û������=�����ʱ��Ч������a(10);
//	a = 10; //����������=������������,��ֻ�������ص�=�����
//
//	return 0;
//}

//�ó��򽫵���operator+���������ֱ�﷨�����������ʾ���У���������Ķ�������Ϊcoding���ǵ��ö�����
//����ұߵĶ�������Ϊfixing������Ϊ���������ݵĶ���
//#include "mytime1.h"
//
//int main(void)
//{
//	Time Planning;
//		Time coding(2, 40);
//		Time fixing(5, 55);
//		Time total;
//	
//		cout << "Planning time = ";
//		Planning.Show();
//		cout << endl;
//	
//		cout << "coding timr = ";
//		coding.Show();
//		cout << endl;
//	
//		cout << "fixing time = ";
//		fixing.Show();
//		cout << endl;
//	
//		total = coding + fixing;	//�������ʾ��
//		cout << "coding + fixing = ";
//		total.Show();
//		cout << endl;
//
//		Time morefixing(3, 28);
//		cout << "more fixing time = ";
//		morefixing.Show();
//		cout << endl;
//		total = morefixing.operator+(total);	//������ʾ��
//		cout << "morefixing.operator+(total) = ";
//		total.Show();
//		cout << endl;
//	
//		return 0;
//}

//����һ��ʹ�÷���������ٷ���Time�ࡣ����ʹ��һ����ΪSum()�ĳ��淽��
//#include "mytime0.h"
//
//int main(void)
//{
//	Time Planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "Planning time = ";
//	Planning.Show();
//	cout << endl;
//
//	cout << "coding timr = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding.Sum(fixing);
//	cout << "coding.sum(fixing) = ";
//	total.Show();
//	cout << endl;
//
//	return 0;
//}