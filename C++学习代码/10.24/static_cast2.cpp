//5.����static_castʹ��������ϻ����µ�����ת��
//#include <iostream>
//
//using namespace std;
//
//class A
//{
//};
//
//class B : public A
//{
//};
//
//class C
//{
//};
//
//int main(void)
//{
//	A a;
//	B b;
//
//	//A* pa = &b;	//��ʹ��static_cast��ת������ϵͳ��ʽ��ת��
//	//��b�ĵ�ַת����A*������ת��
//	A* pa = static_cast<A*> (&b);
//	//��a�ĵ�ַת����B*������ת��
//	//B* pb = &a;	//��Ȼ����ʹ��ǿ������ת��������ת��������
//	//B* pb = (B*)&a;
//	B* pb = static_cast<B*> (&a);
//
//	return 0;
//}