#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%#x,%#x\n",ptr1[-1],*ptr2);
 	return 0;
}
//struct Test
//{
//	int num;
//	char* pcName;
//	short sdata;
//	char cha[2];
//	short sBa[4];
//}* p;
////p��ֵ��0x100000
////�ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//pת��Ϊunsigned long���ͣ�����+1����ֵ��1
//	printf("%p\n", (unsigned int*)p + 0x1);//pת��Ϊunsigned int*���ͣ�����ָ��ֵ��4����1������ָ����Ǽ�4
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//48
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//16 - a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])����������������sizeof()��,������ǵ�һ�еĴ�С
//	printf("%zd\n", sizeof(a[0]+1));//4/8 - a[0]�ǵ�һ������������������ʱ����Ԫ�ص�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ��
//	                                //����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//
//	printf("%zd\n", sizeof(*(a[0]+1)));//4 - *(a[0]+1)���ǵ�һ�еڶ���Ԫ��
//	printf("%zd\n", sizeof(a+1));//4/8 - a�Ƕ�ά�������������û��sizeof(a)��Ҳû��&a,����a����Ԫ�ص�ַ�����Ѷ�ά���鿴��һά����ʱ��
//	                             //��ά�������Ԫ�ص�ַ�ǵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ��a+1���ǵڶ��еĵ�ַ
//
//	printf("%zd\n", sizeof(*(a+1)));//16 sizeof(*(a+1))������ǵڶ��еĴ�С��
//	printf("%zd\n", sizeof(&a[0]+1));//4/8 - �ڶ��еĵ�ַ
//	printf("%zd\n", sizeof(*a));//16 - a����Ԫ�ص�ַ����һ�еĵ�ַ��sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%zd\n", sizeof(a[3]));//16 - sizeof()�ڲ��ı��ʽ��������ʵ���㣬����sizeof(arr[3])�Ǻ�sizeof(arr[0])һ����
//	return 0;
//}
//int main(void)
//{
//	//char* p = "abcdef";
//	//printf("%zd\n", strlen(p));//6
//	//printf("%zd\n", strlen(p + 1));//5
//	////printf("%zd\n", strlen(*p));//err
//	////printf("%zd\n", strlen(p[0]));//err
//	//printf("%zd\n", strlen(&p)); //���ֵ p�����ĵ�ַ
//	//printf("%zd\n", strlen(&p + 1));//���ֵ
//	//printf("%zd\n", strlen(&p[0] + 1));//5
//
//	//char *p = "abcdef";
//	//printf("%zd\n", sizeof(p));//4/8 ����ָ�����p�Ĵ�С
//	//printf("%zd\n", sizeof(p+1));//4/8 p+1�õ�����b�ĵ�ַ
//	//printf("%zd\n", sizeof(*p));//1 *p�����ַ����ĵ�һ���ַ� - 'a'
//	//printf("%zd\n", sizeof(p[0]));//1 int arr[10]; arr[0] = *(arr+0) - p[0] = *(p+0)
//	//printf("%zd\n", sizeof(&p)); //4/8 ȡ����p�����ĵ�ַ����������a�ĵ�ַ
//	//printf("%zd\n", sizeof(&p+1));//4/8 ��ַ
//	//printf("%zd\n", sizeof(&p[0]+1));//4/8 ��ַ
//	//char arr[] = "abcdef";
//	//printf("%zd\n", strlen(arr));//6
//	//printf("%zd\n", strlen(arr + 0));//6
//	////printf("%zd\n", strlen(*arr));//err strlen���յĲ�����ҪΪ��ַ����*arr��Ϊһ��Ԫ��
//	////printf("%zd\n", strlen(arr[1]));//err
//	//printf("%zd\n", strlen(&arr));//6 &arr - ����ĵ�ַ - char(*p) = &arr
//	//printf("%zd\n", strlen(&arr + 1));//���ֵ
//	//printf("%zd\n", strlen(&arr[0] + 1));//5
//
//	//printf("%zd\n",sizeof(arr));//7 sizeof(arr)�����������Ĵ�С����λ���ֽ�
//	//printf("%zd\n", sizeof(arr+0));//4/8 ������ǵ�ַ�Ĵ�С��arr+0����Ԫ�ص�ַ
//	//printf("%zd\n", sizeof(*arr));//1 *arr��Ԫ�أ�sizeof(*arr)�Ǽ�����Ԫ�صĴ�С
//	//printf("%zd\n", sizeof(arr[1]));//1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	//printf("%zd\n", sizeof(&arr));//4/8 &arr��Ȼ������ĵ�ַ�������ǵ�ַ��������4/8���ֽ�
//	//printf("%zd\n", sizeof(&arr+1));//4/8 &arr1��Ȼ��������������ĵ�ַ�������ǵ�ַ
//	//printf("%zd\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}