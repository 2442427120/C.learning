#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//写一个函数，判断一个字符串是否为另一个字符串的旋转后的字符串
//例如:给定s1 = AABCD 和s2 = BCDAA，返回1 ； 给定s1 = abcd 和s2 = ACBD，返回0
// AABCD左旋一个字符得到ABCDA
// AABCD左旋两个字符得到BCDAA
// AABCD右旋一个字符得到DAABC
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* arr,int k)
{
	int len = strlen(arr);
	assert(arr != NULL);
	assert(k <= len);

	reverse(arr, arr+k-1);//将左边k个字符逆序
	reverse(arr+k, arr+len-1);//将右边剩余字符逆序
	reverse(arr, arr+len-1);//将整体逆序
}

int is_left_move(char* s1, char* s2)
{
	int i = 0;
	int len = strlen(s1);

	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		if (strcmp(s1, s2) == 0);
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdefgh";
	char arr2[] = "defghabc";
	int ret = is_left_move(arr1, arr2);

	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

//实现一个函数，可以左旋字符串中的k个字符
// 例如
// ABCD左旋一个字符得到BCDA
// ABCD左旋两个字符得到CDAB
//暴力求解法
//void left_move(char* arr, int k)
//{
//	arrset(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		//1.将arr中的第一个元素取出存到一个临时变量中
//		char tmp = *arr;
//		//2.将arr中后面的元素全部往前挪一位
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j)= *(arr + j + 1);
//		}
//		//3.将第一个元素放到最后
//		*(arr + len - 1) = tmp;
//	}
//}
//
//三步翻转法
//abcdef
//bafedc
//cdefab
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr,int k)
//{
//	int len = strlen(arr);
//	assert(arr != NULL);
//	assert(k <= len);
//
//	reverse(arr, arr+k-1);//将左边k个字符逆序
//	reverse(arr+k, arr+len-1);//将右边剩余字符逆序
//	reverse(arr, arr+len-1);//将整体逆序
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int n = 0;
//
//	printf("\a请输入要左旋几个字符:");
//	scanf("%d", &n);
//	left_move(arr, n);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//猜名次
//A选手说:B第二，我第三
//B选手说:我第二，E第四
//C选手说:我第一，D第二
//D选手说:C最后，我第三
//E选手说:我第四，A第一
//每位选手都说对了一半，编程确定比赛名次
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//							{ 
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//								printf("\n");
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//猜凶手
//A说:不是我
//B说:是C
//C说:是D
//D说:C在胡说
//请编写一个程序来判断谁是凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//}


//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
//1 5 10 10 5 1
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][0] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for(j=0;j<line-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//00000000000000000000000011001000 - 200
//	//00000000000000000000000001100100 - 100
//	//00000000000000000000000100101100 - a+b
//	//11001000 - a
//	//01100100 - b
//	// 整形提升
//	//00000000000000000000000000101100 - c
//	printf("%d %d\n", a + b, c);
//	return 0;
//}