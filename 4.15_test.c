#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "sqwer";
	//strcmp�Ƚϵ���Ԫ�ص�ASCII��ֵ
	//int ret = strcmp(p1,p2);//�Ƚϵ���a��s��ASCII��ֵ

	//strcmp����ֵ
	//��һ���ַ����Ĵ��ڵڶ����ַ���������ֵ��һ������0����
	//��һ���ַ����ĵ��ڵڶ����ַ���������ֵ��0
	//��һ���ַ�����С�ڵڶ����ַ���������ֵ��һ��С��0����
	if (strcmp(p1, p2) > 0) // ����д��if(strcmp(p1,p2) == 1),���Ƚϵ�ֵ��Ϊ1�Ļ�����vs�������¿��У����������������²�һ����
	{
		printf("p1����p2\n");
	}
	else if (strcmp(p1, p2) == 0)
	{
		printf("p1����p2\n");
	}
	else if (strcmp(p1, p2) < 0)
	{
		printf("p1С��p2");
	}
	//printf("%d\n", ret);//-1

	return 0;
}
//�Զ���strcat����
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//1.�ҵ�Ŀ��Ŀ���ַ�����'/0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷�� - ��Դ�ַ���������Ŀ���ַ�����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//�Զ���strcpy����
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����dest�ռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ�ĵ�ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "world";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	//strlen�⺯���ķ���ֵ������ size_t ��ʵ�� unsigned int ������
//	//������Զ����my_strlen����������ֵ������int���������Ա�������������������
//	if (strlen("abc") - strlen("abcdef") > 0)//�����޷����������ֵ�����޷�����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//���Ͼ���
//��һ�����־��󣬾����ÿ�д��������ǵ����ģ������ÿ�д��������ǵ����ģ���д�����������ľ����в��ҵ�һ����
//Ҫ��ʱ�临�Ӷ�С��O(N)������������ٷ���
// ����2.
//int Find_num(int arr[5][5], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	//�����Ͻǵ���ȥ��Ҫ�ҵ������бȽϣ�����������Ҫ�ҵ���k����������ڵ���û��k����ǰһ��Ѱ�ң�
//	//������Ͻǵ�����Ҫ�ҵ���kС�������û��k������һ��Ѱ��
//	while (x <= *px-1 && y >= 0)
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			//���ҵ������±��Ӧ��ֵ��������x��y
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
//	int k = 17;
//	int x = 5;
//	int y = 5;
//	//�����Ͳ��� - ������������ȥ����x��y�ĵ�ַ��ʹ���������ں����ڲ��ı亯������x��y�Ĳ���
//	int ret = Find_num(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���(%d,%d)\n",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//����1.û��ӡ���ҵ�Ԫ�ص��±�
//int Find_num(int arr[5][5], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	//�����Ͻǵ���ȥ��Ҫ�ҵ������бȽϣ�����������Ҫ�ҵ���k����������ڵ���û��k����ǰһ��Ѱ�ң�
//	//������Ͻǵ�����Ҫ�ҵ���kС�������û��k������һ��Ѱ��
//	while (x <= row-1 && y >= 0)
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
//	int k = 17;
//	int ret = Find_num(arr,k,5,5);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������ת����ַ���
//����:����s1 = AABCD ��s2 = BCDAA������1 �� ����s1 = abcd ��s2 = ACBD������0
// AABCD����һ���ַ��õ�ABCDA
// AABCD���������ַ��õ�BCDAA
// AABCD����һ���ַ��õ�DAABC
//�����������ÿ⺯��
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strncat�����Ĺ��ܿ��Ը��ַ��������һ�������ַ�����������������Ҫ�ӵ��ַ������ȣ�
//	//��strcat������ͬ����strcatֻ����������ͬ���ַ���׷������
//	strncat(str1,str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr���� - ���Ӵ� - ������ҵ���str2��str1���Ӵ����᷵��str2��Ԫ�صĵ�ַ��������ǣ��򷵻�NULL
//	char* ret = strstr(str1,str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdefgh";
//	char arr2[] = "defghabc";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}