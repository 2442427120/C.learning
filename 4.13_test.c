#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�����ҵ���һ��ż��
		//����left<right��ֹȫ����������Խ�����
		while ((left < right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		//���ұ��ҵ���һ������
		//��left<right��ֹȫ��ż������Խ�����
		while ((left < right) && (arr[right] % 2 != 1))
		{
			right--;
		}
		//�����ҵ�����ż��
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
//����ˮ����
// һԪ������һƿ��ˮ��������ƿ���Ի�һƿ��ˮ
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
//	//��ص���ˮ
//	//total = money;
//	//empty = money;
//	////�ÿ�ƿ������ˮ
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total= %d\n", total);
//	return 0;
//}

//���εĴ�ӡ
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0; i <line ; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <line - i - 1 ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1/*j < (2*line-1) - 2 * (i + 1)*/; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}
//��ӡ0-100000��ˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ����nλ��
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		//2.����i��ÿһλn�Ĵη�֮�� sum
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��Sn = a+aa+aaa+aaaa+...aaaaaa ֮��
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
//�ú����ķ�ʽʹ�ַ�������
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
//	gets(arr);//�пո�Ҳ�ᱻ��ȡ��ȥ
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