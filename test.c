#pragma once
#include<stdio.h>
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
		}
		printf("\n");

	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	/*print1(arr, 3, 5);*/
	print2(arr, 3, 5);
	return 0;
}
//����ָ�� ��ָ��
//int main()
//{
//	int* p = NULL;// p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL; // pc���ַ�ָ�� -ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	// int arr[10] = {0};
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //����ĵ�ַҪ������
//	//�����p��������ָ��
//	//����ָ�� - ָ�������ָ�� - �����������ĵ�ַ
//	return 0;
//}
//ָ������ ������
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };//����ָ������
//	//int arr2[] = { 2,3,4,5,6 };
//	//int arr3[] = { 3,4,5,6,7 };
//	//int* parr[] = { arr1,arr2,arr3 };//�������ָ�������-ָ������
//	//char ch1[] = "abcdef"; //�ַ�ָ������
//	//char ch2[] = "bcdefg";
//	//char ch3[] = "cdefgh";
//	char ch1[] = { 'a','b','c','d','e','f' };
//	char ch2[] = { 'b', 'c', 'd', 'e', 'f', 'g' };
//	char ch3[] = { 'c','d','e','f','g','h' };
//	char* pch[] = {ch1,ch2,ch3};//����ַ�ָ������� - ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%c ", *(pch[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //�����ַ����������ݲ��ܱ��޸�
//	const char* p2 = "abcdef";
//	printf("%c\n", *p1);
//	printf("%s\n", p1);
//	//�ַ���һ���Ĵ���һ����ַ
//	//p1��p2����ĵ�ַ��ͬ���������Լ��Ŀռ�
//	if (p1 == p2)
//	{
//		printf("ָ��ָ������Ԫ�ص�ַ������p1��p2��ָ�ĵ�ַ��ͬ����p1��p2����ĵ�ַ��ͬ\n");
//	}
//	else
//	{
//		printf("p1������p2");
//	}
//	/*if (arr1 == arr2)
//	{
//		printf("arr1��arr2���\n");
//	}
//	else
//	{
//		printf("arr1��arr2����ȣ���Ϊ�������˿ռ䣬���������ڴ��еĵ�ַ��ͬ");
//	}*/
//
//	return 0;
//}
//int main()
//{
//	const char*  p = "abcdef";
//	//*p = 'w';
//	p = "wbcdef";
//	printf("%s\n", p);
//	//printf("%c\n", *p);//a %c�������һ���ַ� *p��һ���ַ�
//	//printf("%s\n", p);//abcdef  %s�������һ�����ַ��� p��һ��
//	return 0;
//}
//int main()
//{
//	float n = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S = 0
//	//E = 2
//	//M = 1.011
//	//0 100 0000 1(2+127) 011 0000 0000 0000 0000 0000
//	//0X40B00000
//	//С�˴洢:00 00 b0 40
//	printf("%f\n", n);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	return 0;
//}