#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));

	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//realloc�������Ը���̬���ٵĿռ����ӻ���ٿռ�
	//realloc����ʹ�õ�ע������
	//1.���¿��ٵĿռ������ԭ�ռ��׷���Ҳ���Խ����ʵ���һ�������˵Ŀռ�ʱ(Ҳ����pָ��Ŀռ�֮�����㹻���ڴ�ռ�)��
	//  ֱ����ԭ�ռ��׷�ӣ���ʱԭ�ռ��ַ����ı䣬���ݲ���(����p)

	//2.�����ٵĿռ����ֱ����ԭ�ռ����׷�ӻ�Ƿ�Խ����ʵ���һ���Ѿ������˵Ŀռ�(Ҳ����pָ��Ŀռ�֮��û���㹻���ڴ�ռ�)��
	//  ���Դ�ʱrealloc���������¿���һ������������µĿռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻����¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ��������þɵģ�����realloc��������ΪNULLʱ���ɵ��Ǹ�ָ��ͻ��Ҳ���
	int* ptr = realloc(p, 40);

	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;

		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}

		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	free(p);
	p = NULL;

	return 0;
}
//calloc������ʹ��
//int main()
//{
//	//malloc��calloc��֮ͬ������malloc�������ٿռ�ʱ������ռ���ÿ���ֽڳ�ʼ��
//	//��calloc������Ὣ�ռ��е�ÿ���ֽڶ���ʼ��Ϊ0
//	int* p= (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//}
//malloc�������ٵ�ʹ�� ,һ��Ҫ���з���ֵ���ж�
//int main()
//{
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ�����Ϣ
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//ʹ�ÿ��ٺõĿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�ð�����������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	struct S s[n];//c�����ǿ��Դ����䳤����ģ�C99�������ˣ����������б�������֧��
//	return 0;
//}