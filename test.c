#pragma once
#include<stdio.h>
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello world");
	return 0;
}
//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��
//int Add(int x, int y)
//{
//	int z =x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%d\n", Add(a, b));*/
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int (*pa)(int, int) = &Add;//�溯���ĵ�ַ
//	printf("%d\n",(*pa)(2, 3));//5
//	return 0;
//}
//����ָ�봫��
//void test(int** p) //int** p���Խ���test1,test2,test3�����Ĳ���
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** ps = &p;
//	int* arr[10] = {0};
//	test1(ps);//������ָ��ps������д���
//	test2(&p);//��һ��ָ��ĵ�ַ���д���
//	test(arr);//���������Ԫ�ص�ַ���д���
//	return 0;
//}
//һ��ָ�봫��
//void test(int* p)
//{}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	//test1��test2���Ĳζ����Ա�test����
//	test1(p);//������ָ��p����
//	test2(&a);//������a�ĵ�ַ
//	return 0;
//}
//��ά���鴫��
//void test1(int arr[3][5])
//{}
//void test2(int arr[][5]) //��λ���鴫��ʱ�������ֵ��п���ʡ�ԣ��в���
//{}
//void test3(int(*arr)[5]) //arr����Ԫ�ص�ַ��5��Ԫ�أ�Ҳ���Ǹö�ά����ĵ�һ�� - ��ָ��ָ�����������Ԫ�ص�����
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}
//һά����Ĵ���
//void test(int arr[])
// {}
//void test(int arr[10])
// {}
//void test(int* arr //arr-��Ԫ�ص�ַ-����Ԫ�ص�ַ����int*��ָ����
// {}
//void test(int* arr[20])
// {}
//void test(int **arr) //*arr-��Ԫ�ص�ַ-����Ԫ�ص�ַ����int*ָ����
// {}
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr1);
//	test(arr2);
//	return 0;
//}
//int main()
//{
//	int arr[10];//arr��һ��10��Ԫ�ص�����������
//	int* parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//	int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ����һ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ص�������int - parr2������ָ��
//	int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ������һ������ָ�룬������ָ��ָ��ĵ�������5��Ԫ�أ�ÿ��Ԫ����int
//	return 0;
//}