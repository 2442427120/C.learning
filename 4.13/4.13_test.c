#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左找到第一个偶数
		//加上left<right防止全是奇数导致越界访问
		while ((left < right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		//从右边找到第一个奇数
		//上left<right防止全是偶数导致越界访问
		while ((left < right) && (arr[right] % 2 != 1))
		{
			right--;
		}
		//交换找到的奇偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	Print(arr,sz);
	return 0;
}
//喝汽水问题
// 一元可以买一瓶汽水，两个空瓶可以换一瓶汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		total == 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	//买回的汽水
//	//total = money;
//	//empty = money;
//	////用空瓶换的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total= %d\n", total);
//	return 0;
//}

//菱形的打印
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i <line ; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <line - i - 1 ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1/*j < (2*line-1) - 2 * (i + 1)*/; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}
//打印0-100000的水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的位数，n位数
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		//2.计算i的每一位n的次方之和 sum
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//求Sn = a+aa+aaa+aaaa+...aaaaaa 之和
/*int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}*/
//用函数的方式使字符串逆序
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = left + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	/*scanf("%s", arr);*/
//	gets(arr);//有空格也会被提取进去
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n",*pa);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = *(aa + 1);
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
