#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������ת����ַ���
//����:����s1 = AABCD ��s2 = BCDAA������1 �� ����s1 = abcd ��s2 = ACBD������0
// AABCD����һ���ַ��õ�ABCDA
// AABCD���������ַ��õ�BCDAA
// AABCD����һ���ַ��õ�DAABC
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

	reverse(arr, arr+k-1);//�����k���ַ�����
	reverse(arr+k, arr+len-1);//���ұ�ʣ���ַ�����
	reverse(arr, arr+len-1);//����������
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

//ʵ��һ�����������������ַ����е�k���ַ�
// ����
// ABCD����һ���ַ��õ�BCDA
// ABCD���������ַ��õ�CDAB
//������ⷨ
//void left_move(char* arr, int k)
//{
//	arrset(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		//1.��arr�еĵ�һ��Ԫ��ȡ���浽һ����ʱ������
//		char tmp = *arr;
//		//2.��arr�к����Ԫ��ȫ����ǰŲһλ
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j)= *(arr + j + 1);
//		}
//		//3.����һ��Ԫ�طŵ����
//		*(arr + len - 1) = tmp;
//	}
//}
//
//������ת��
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
//	reverse(arr, arr+k-1);//�����k���ַ�����
//	reverse(arr+k, arr+len-1);//���ұ�ʣ���ַ�����
//	reverse(arr, arr+len-1);//����������
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int n = 0;
//
//	printf("\a������Ҫ���������ַ�:");
//	scanf("%d", &n);
//	left_move(arr, n);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//������
//Aѡ��˵:B�ڶ����ҵ���
//Bѡ��˵:�ҵڶ���E����
//Cѡ��˵:�ҵ�һ��D�ڶ�
//Dѡ��˵:C����ҵ���
//Eѡ��˵:�ҵ��ģ�A��һ
//ÿλѡ�ֶ�˵����һ�룬���ȷ����������
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


//������
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C�ں�˵
//���дһ���������ж�˭������
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
//	// ��������
//	//00000000000000000000000000101100 - c
//	printf("%d %d\n", a + b, c);
//	return 0;
//}