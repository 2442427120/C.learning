//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有什么办法在O(n)时间完成吗？
//示例：
//		输入：[3, 0, 1]
//		输出：2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//思路三，异或；将0到n的数与数组中的数异或(数组中的数依此异或完，然后和0-n的所有数异或，反之也可以)
int main(void)
{
	//方法2
	int result = 0;
	int arr[9] = { 9, 5, 6, 7, 4, 3, 1, 0, 2 };
	//先跟数组中的所有数异或
	for (int i = 0; i < 9; i++)
	{
		result ^= arr[i];
	}
	//在跟0-n的所有数异或
	for (int j = 0; j < 10; j++)
	{
		result ^= j;
	}

	printf("%d", result);
	//方法1
	//int result = 0;
	//int arr[10] = { 9, 5, 6, 7, 4, 3, 1, 0, 2 };
	///*int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/

	//for (int i = 0; i < 10; i++)
	//{
	//	result = result ^ arr[i] ^i;
	//}

	//printf("%d", result);

	return 0;
}

//思路二，将0到n的数相加，再减去数组中的数
//int main(void)
//{
//	int sum = 0;
//	int total = 0;
//	int arr[4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("请输入第%d个数：", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		sum += arr[i];
//		total += i;
//	}
//
//	printf("输出:%d", total - sum);
//
//	return 0;
//}