//3.const_cast����ʾ����;

//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int a = 10;
//	cout << a << endl;
//
//	const int* p1 = &a;
//	//*p1 = 20;	//������䲻�Ϸ�����Ϊ*p1��const�޶�,�޷��޸��������ֵ
//	//����const_cast�������p1�޸ĳ�int*,����int* p2ָ�����������Ϳ��Խ�*p1��ָ���ֵ�޸�
//	int* p2 = const_cast<int*> (p1);	
//	*p2 = 20;
//	cout << *p2 << endl;
//
//	return 0;
//}