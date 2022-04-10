#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
	//数组名是首元素地址
	// 1.sizeof(数组名) - 数组名表示整个数组
	// 2.&数组名 - 数组名表示整个数组
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%zd\n", sizeof(a));//16 sizeof(数组名) - 计算的是数组总大小，单位是字节
	//printf("%zd\n", sizeof(a+0));//4/8 数组名这里表示首元素地址,a+0还是首元素地址，地址大小是4/8 
	//printf("%zd\n", sizeof(*a));//4 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	//printf("%zd\n", sizeof(a+1));//4/8 数组名表示首元素地址，a+1是第二个元素的地址，地址大小是4/8 
	//printf("%zd\n", sizeof(a[1]));//4 第二个元素的大小
	//printf("%zd\n", sizeof(&a));//4/8 &a取出的数组的地址，但是数组的地址那也是地址，地址大小是4/8 
	//printf("%zd\n", sizeof(*&a));//16 &a是数组的地址，数组的地址解引用访问数组，sizeof计算的就是数组的大小，单位是字节
	//printf("%zd\n", sizeof(&a+1));//4/8 &a是数组的地址，&a+1虽然地址跳过了整个数组，但还是地址，大小就是4/8
	//printf("%zd\n", sizeof(&a[0]));//&a[0]是第一个元素地址
	//printf("%zd\n", sizeof(&a[0]+1));//&a[0]+1是第二个元素地址

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f'};
	//printf("%zd\n", strlen(arr));//随机值
	//printf("%zd\n", strlen(arr+0));//随机值
	////printf("%zd\n", strlen(*arr));//err
	////printf("%zd\n", strlen(arr[1]));//err
	//printf("%zd\n", strlen(&arr));//随机值
	//printf("%zd\n", strlen(&arr+1));//随机值-6
	//printf("%zd\n", strlen(&arr[0]+1));//随机值-1
	//printf("%zd\n", sizeof(arr));//6 sizeof计算的是数组大小，6*1=6字节
	//printf("%zd\n", sizeof(arr+0));//4/8 arr是首元素地址，arr+0还是首元素地址，地址大小是4/8
	//printf("%zd\n", sizeof(*arr));//1 arr是首元素地址，*arr就是首元素，首元素字符大小是1个字节
	//printf("%zd\n", sizeof(arr[1]));//1
	//printf("%zd\n", sizeof(&arr));//4/8 &arr是数组地址，地址的大小是4/8
	//printf("%zd\n", sizeof(&arr+1));//4/8 &arr+1虽然跳过了一个数组，但还是地址，地址大小是4/8
	//printf("%zd\n", sizeof(&arr[0]+1));//4/8 第二个元素的额地址，地址的大小是4/8
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
////	struct stu s[4] = { {"张三",27,"13688888888"},{"李四",25,"12366666666"},{"王五",26,"15617777777"},{"小六",29,"18699999999"} };
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
////自定义冒泡排序函数bubble_sort - 可排序所有类型的数组
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		//每一趟比较的对数
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//比较第一个元素和第二个元素的大小
//			//char类型只操作一个字节的数，当元素的大小为width时，加上一个width就找到了下一个元素
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//自定义两个元素交换的函数
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
//	//使用bubble_sort函数的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
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
//	struct stu s[4] = { {"张三",27,"13688888888"},{"李四",25,"12366666666"},{"王五",26,"15617777777"},{"小六",29,"18699999999"} };
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
	////打印short类型使用h前缀
	////十进制
	//printf("%hd\n", i);
	//printf("%#hd\n", i);
	////八进制
	//printf("%ho\n", i);
	////显示c语言前缀
	//printf("%#ho\n", i);
	////十六进制
	//printf("%hx\n", i);
	//printf("%#hx\n", i);
	//float a = 3.14;
	////.3来修饰f表示显示小数点后三位
	//printf("%.3f\n", a);
	//char b = 65;
	//printf("%c \n", b); //A

	//char c = 'A';
	//printf("%d \n", c);
	//printf("Hello!\007\n");// \007 - 付出一声蜂鸣
//	float aboat = 32000.0;
//	//%e - 打印指数计数法的数字
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
