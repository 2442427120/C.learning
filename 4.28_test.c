#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#define PRINT(x) printf("the value of " #x " is %d\n",x);
int main()
{
	int a = 10;
	int b = 20;

	PRINT(a);
	PRINT(b);

	return 0;
}
//Ԥ������ŵ�ʹ��
//int main()
//{
//	//printf("%s\n",__FILE__);//�������ڵľ���·��
//	//printf("%d\n", __LINE__);//���������к�
//	//printf("%s\n",__DATE__);//����
//	//printf("%s\n",__TIME__);//ʱ��
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d data:%s time:%s i:%d\n",__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}