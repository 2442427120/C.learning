//��C++ Primer Plus����ʮ���±����ϰ��4���޸�
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
//
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//
//	return 0;
//}
//
//int reduce(long ar[], int n)
//{
//	//list<int> li;
//	//li.insert(li.begin(), ar, ar + n);  //���������ݶ����뵽li��
//	//li.sort();	//����������
//	//li.unique(); //ʹ��unique()�������ظ���Ԫ��ɾ��
//	//for_each(li.begin(), li.end(), outlong);  //��ʾ��ǰli������
//	//cout << endl;
//
//	//return li.size();	//���ش�ʱliԪ�صĸ���
//	sort(ar, ar + n);
//	long* pl = unique(ar, ar + n);	//unique()�������ص��ǽ������Ľ�β
//
//	return pl - ar;
//}

//void outlong(long n)
//{
//	cout << n << " ";
//}