#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strncat(char* front, char* src, int count)
{
	char* start = front;

	while (*front++)
		;
	front--;

	while (count--)
		if (!(*front++ = *src++))
			return(start);

	*front = '\0';
	return(start);
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "my world";
	char* ret = my_strncat(arr1, arr1, 8);
	printf("%s\n", ret);
	return 0;
}
//�Զ���ʵ��strncpy
//char* my_strncpy(char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	char* start = dest;
//	//��Դ�ַ���������Ŀ���ַ����У���countΪ0��Դ�ַ���ȫ��������Ŀ���ַ���ʱֹͣѭ��
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	//��Դ�ַ���ȫ��������Ŀ���ַ����У������ĸ�������Ϊ0ʱ����Ŀ���ַ����ĺ��油'\0'
//	if (count != 0)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1[7] = "welcom";
//	char arr2[] = "hello";
//	char* ret = my_strncpy(arr1,arr2,5);
//
//	printf("%s\n",ret);
//	return 0;
//}
//�Զ���ʵ��strcmp����
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 == *str2)
//	{
//		if (str1 == '\0')
//		{
//			return 0; //���
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//{
//	//	return 1;// ����
//	//}
//	//else
//	//{
//	//	return -1;//С��
//	//}
//	return *str1 - *str2; // �����϶����д��
//	//�ڲ����У���ĸ����Сд������£�����Ҫ�Ƚϵĵ�һ���ַ�������ĸ��c���ڶ�����d���򷵻�Ϊ-1��
//	//��һ��c���ڶ���Ϊe��������-2���䷵��ֵ��������֮�����ĵ��ʸ���
//}
//int main()
//{
//	char arr1[] = "abCcef";
//	char arr2[] = "abaegf";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//strcmp�Ƚϵ���Ԫ�ص�ASCII��ֵ
//	//int ret = strcmp(p1,p2);//�Ƚϵ���a��s��ASCII��ֵ
//
//	//strcmp����ֵ
//	//��һ���ַ����Ĵ��ڵڶ����ַ���������ֵ��һ������0����
//	//��һ���ַ����ĵ��ڵڶ����ַ���������ֵ��0
//	//��һ���ַ�����С�ڵڶ����ַ���������ֵ��һ��С��0����
//	if (strcmp(p1, p2) > 0) // ����д��if(strcmp(p1,p2) == 1),���Ƚϵ�ֵ��Ϊ1�Ļ�����vs�������¿��У����������������²�һ����
//	{
//		printf("p1����p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1����p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1С��p2");
//	}
//	//printf("%d\n", ret);//-1
//
//	return 0;
//}