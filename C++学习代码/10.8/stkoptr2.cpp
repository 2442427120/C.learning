//����̽��ģ����2:��ȷʹ��ָ��ջ
//�������¶�����Stack<Type>�࣬ʹStack���캯���ܹ�����һ����ѡ��С�Ĳ��������漰���ڲ�ʹ�ö�̬���飬��ˣ�
//Stack�������һ������������һ����ֵ���캯����һ����ֵ����������⣬ͨ�������������Ϊ���������������˴���.
//�ó�������ǰ���ܵ�ģ������ʹ��rand()��srand()��time()��������������������������0��1����ģ����Ӳ�ҵĽ��
//#include "stacktp2.h"
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//const int Num = 10;
//
//int main(void)
//{
//	srand(time(0));
//	cout << "Please enter stack size: ";
//	int stacksize;
//	cin >> stacksize;
//	Stack<const char*> st(stacksize);
//
//	const char* in[Num] = {
//		"1: Hank", "2: Kiki", "3: Betty", "4: Ian", "5: Wolf",
//		"6: Protia", "7: Joy", "8: Xaverie", "9: Juan", "10: Misha"
//	};
//
//	const char* out[Num];
//
//	int processed = 0;
//	int nextin = 0;
//	while (processed < Num)
//	{
//		if (st.isempty())
//			st.push(in[nextin++]);
//		else if (st.isfull())
//			st.pop(out[processed++]);
//		else if (rand() % 2 && nextin < Num)
//			st.push(in[nextin++]);
//		else
//			st.pop(out[processed++]);
//	}
//	for (int i = 0; i < Num; i++)
//		cout << out[i] << endl;
//
//	cout << "Bye.\n";
//
//	return 0;
//}