#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
	//����������Ԫ�ص�ַ
	// 1.sizeof(������) - ��������ʾ��������
	// 2.&������ - ��������ʾ��������
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%zd\n", sizeof(a));//16 sizeof(������) - ������������ܴ�С����λ���ֽ�
	//printf("%zd\n", sizeof(a+0));//4/8 �����������ʾ��Ԫ�ص�ַ,a+0������Ԫ�ص�ַ����ַ��С��4/8 
	//printf("%zd\n", sizeof(*a));//4 ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%zd\n", sizeof(a+1));//4/8 ��������ʾ��Ԫ�ص�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ����ַ��С��4/8 
	//printf("%zd\n", sizeof(a[1]));//4 �ڶ���Ԫ�صĴ�С
	//printf("%zd\n", sizeof(&a));//4/8 &aȡ��������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ��С��4/8 
	//printf("%zd\n", sizeof(*&a));//16 &a������ĵ�ַ������ĵ�ַ�����÷������飬sizeof����ľ�������Ĵ�С����λ���ֽ�
	//printf("%zd\n", sizeof(&a+1));//4/8 &a������ĵ�ַ��&a+1��Ȼ��ַ�������������飬�����ǵ�ַ����С����4/8
	//printf("%zd\n", sizeof(&a[0]));//&a[0]�ǵ�һ��Ԫ�ص�ַ
	//printf("%zd\n", sizeof(&a[0]+1));//&a[0]+1�ǵڶ���Ԫ�ص�ַ

	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f'};
	//printf("%zd\n", strlen(arr));//���ֵ
	//printf("%zd\n", strlen(arr+0));//���ֵ
	////printf("%zd\n", strlen(*arr));//err
	////printf("%zd\n", strlen(arr[1]));//err
	//printf("%zd\n", strlen(&arr));//���ֵ
	//printf("%zd\n", strlen(&arr+1));//���ֵ-6
	//printf("%zd\n", strlen(&arr[0]+1));//���ֵ-1
	//printf("%zd\n", sizeof(arr));//6 sizeof������������С��6*1=6�ֽ�
	//printf("%zd\n", sizeof(arr+0));//4/8 arr����Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ����ַ��С��4/8
	//printf("%zd\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ���ַ���С��1���ֽ�
	//printf("%zd\n", sizeof(arr[1]));//1
	//printf("%zd\n", sizeof(&arr));//4/8 &arr�������ַ����ַ�Ĵ�С��4/8
	//printf("%zd\n", sizeof(&arr+1));//4/8 &arr+1��Ȼ������һ�����飬�����ǵ�ַ����ַ��С��4/8
	//printf("%zd\n", sizeof(&arr[0]+1));//4/8 �ڶ���Ԫ�صĶ��ַ����ַ�Ĵ�С��4/8
//	return 0;
//}
//void qsort(void* base, size_t num, size_t size,int (*cmp)(const void* e1, const void* e2));
//struct stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//};
////int cmp_str_by_name(const void* e1, const void* e2)
////{
////	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
////}
////void test1()
////{
////	struct stu s[4] = { {"����",27,"13688888888"},{"����",25,"12366666666"},{"����",26,"15617777777"},{"С��",29,"18699999999"} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_str_by_name);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%s %d %s \n", s[i].name, s[i].age, s[i].tele);
////	}
////}
//
////
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////�Զ���ð��������bubble_sort - �������������͵�����
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		//ÿһ�˱ȽϵĶ���
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//�Ƚϵ�һ��Ԫ�غ͵ڶ���Ԫ�صĴ�С
//			//char����ֻ����һ���ֽڵ�������Ԫ�صĴ�СΪwidthʱ������һ��width���ҵ�����һ��Ԫ��
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//�Զ�������Ԫ�ؽ����ĺ���
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//test2()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�����ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_str_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test3()
//{
//	struct stu s[4] = { {"����",27,"13688888888"},{"����",25,"12366666666"},{"����",26,"15617777777"},{"С��",29,"18699999999"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_str_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %s \n", s[i].name, s[i].age, s[i].tele);
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	test3();
//	return 0;
//}
//int main()
//{
	//short i = 10;
	////��ӡshort����ʹ��hǰ׺
	////ʮ����
	//printf("%hd\n", i);
	//printf("%#hd\n", i);
	////�˽���
	//printf("%ho\n", i);
	////��ʾc����ǰ׺
	//printf("%#ho\n", i);
	////ʮ������
	//printf("%hx\n", i);
	//printf("%#hx\n", i);
	//float a = 3.14;
	////.3������f��ʾ��ʾС�������λ
	//printf("%.3f\n", a);
	//char b = 65;
	//printf("%c \n", b); //A

	//char c = 'A';
	//printf("%d \n", c);
	//printf("Hello!\007\n");// \007 - ����һ������
//	float aboat = 32000.0;
//	//%e - ��ӡָ��������������
//	printf("%f\n%e\n", aboat, aboat);
//	return 0;
//}

int main(void)
{
	/*float salary;
	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");*/
	//long long a = 700000000000LL;
	//printf("%lld\n", a);
	/*short b = 10;
	printf("%#hx\n", b);*/
	/*float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);*/
	/*int a = 0;
	scanf("%d", &a);
	printf("%c", a);*/
	//printf("\aStartled by the sudden sound,Sally shouted,\"By the Great Pumkin,what was that!\"");
	//float f = 3.14;
	//scanf("%f", &f);
	//printf("The input is %f or %e\n",f,f);
	/*int age; 
	double seconds;
	printf("please enter your age:_\b");
	scanf("%d", &age);
	seconds = age * 3.156e7;
	printf("age = %d\nseconds= %e\n", age, seconds);*/
	//double water_m;
	//double water_n;
	//int quart_n;
	//printf("please enter quart number:");
	//scanf("%d", &quart_n);
	//water_n = quart_n * 950 / 3e-23;
	//printf("water_n = %lf", water_n);
	float cm;
	float height;
	double inch;
	printf("please enter you height:   cm\b\b\b\b\b");
	scanf("%f", &cm);
	inch = cm/2.54;
	printf("height = %lfinch\n", inch); 
	return 0;
}
