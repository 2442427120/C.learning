//4.��дһ��������ʽ���ӿڵĺ�������ԭ�����£�
//int reduce(long ar[], int n);
//ʵ��Ӧ���������������е�Ԫ�ظ������ú����������������ɾ���ظ���ֵ�����������������е�Ԫ����Ŀ����ʹ��
//STL������д�ú���(�������ʹ��ͨ�õ�unique()��������ע���������ؽ������Ľ�β)��ʹ��һ��С���������Ըú�
//����

//#include <iostream>
//#include <list>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//const int NUM = 10;
//
//int reduce(long ar[], int n);
//void outlong(long n);
//
//int main(void)
//{
//	long arr[NUM] = { 2, 3, 3, 5, 6, 7, 2, 1, 9, 6 };
//
//	int len = reduce(arr, NUM);
//	cout << "This string's length: " << len << endl;
//
//	return 0;
//}
//
//int reduce(long ar[], int n)
//{
//	list<int> li;
//	li.insert(li.begin(), ar, ar + n);  //���������ݶ����뵽li��
//	li.sort();	//����������
//	li.unique(); //ʹ��unique()�������ظ���Ԫ��ɾ��
//	for_each(li.begin(), li.end(), outlong);  //��ʾ��ǰli������
//	cout << endl;
//
//	return li.size();	//���ش�ʱliԪ�صĸ���
//}
//
//void outlong(long n)
//{
//	cout << n << " ";
//}