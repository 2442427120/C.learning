//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ������������ʲô�취��O(n)ʱ�������
//ʾ����
//		���룺[3, 0, 1]
//		�����2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//˼·������򣻽�0��n�����������е������(�����е�����������꣬Ȼ���0-n����������򣬷�֮Ҳ����)
int main(void)
{
	//����2
	int result = 0;
	int arr[9] = { 9, 5, 6, 7, 4, 3, 1, 0, 2 };
	//�ȸ������е����������
	for (int i = 0; i < 9; i++)
	{
		result ^= arr[i];
	}
	//�ڸ�0-n�����������
	for (int j = 0; j < 10; j++)
	{
		result ^= j;
	}

	printf("%d", result);
	//����1
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

//˼·������0��n������ӣ��ټ�ȥ�����е���
//int main(void)
//{
//	int sum = 0;
//	int total = 0;
//	int arr[4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�������%d������", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		sum += arr[i];
//		total += i;
//	}
//
//	printf("���:%d", total - sum);
//
//	return 0;
//}