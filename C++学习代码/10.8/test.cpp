//��ʾģ��ľ��廯:��ʽʵ��������ʾʵ��������ʾ���廯�����־��廯
//#include <iostream>
//
//using namespace std;
//
//template<class T1, class T2>
//class Test
//{
//public:
//	void show() const;
//};
//
//template<class T1, class T2>
//void Test<T1, T2>::show() const
//{
//	cout << "implicit instantiation\n";
//}
//
////��ʾʵ��������δʵ��������֮ǰ���ڴ��о��Ѿ�������
//template class Test<double, double>;
//
////��ʾ����������Ͷ���
//template<>
//class Test<int, int>
//{
//public:
//	void show() const;
//};
//
//void Test<int, int>::show() const
//{
//	cout << "explicit specialization\n";
//}
//
////���־��廯�������Ͷ���
//template<class T1>
//class Test<T1, int>
//{
//public:
//	void show() const;
//};
//
//template<class T1>
//void Test<T1, int>::show() const
//{
//	cout << "partial specialization\n";
//}
//
//int main(void)
//{
//	//��ʽʵ�����ĵ���
//	Test<char, char> test1;	
//	test1.show();
//
//	//��ʾ���廯�ĵ���
//	Test<int, int> test3;
//	test3.show();
//
//	//���־��廯�ĵ���
//	Test<char, int> test4;
//	test4.show();
//
//	return 0;
//}