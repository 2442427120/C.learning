#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//С�˴洢�����ֽڴ��ڵ͵�ַ�����ֽڴ��ڸߵ�ַ
//��˴洢�����ֽڴ��ڸߵ�ַ�����ֽڴ��ڵ͵�ַ
//0x11223344
//С�˴洢��44 33 22 11
//��ϴ洢��11 22 33 44
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//void test(void)//void ��ʾ�˺����޲�
//{
//	printf("world");
//}
//int main()
//{
//	//test(100);
//	test();
//	return 0;
//}
//�����ַ�������
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL); //��ָ֤����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//�����ַ���
//�����Ż���Ĵ���
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "my world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//����const�Ż��Ĵ���
//void my_strcpy(char* dest, const char* src) //const���ε���*src,*src���ܱ��ı�  dest - Ŀ�ĵز��ܼ�const����Ϊ��һ���ᱻ�޸�
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//while(*src++ = *dest++) Դͷ��Ŀ�ĵط��ˣ�����const����Դͷ������󲻻ᱻ����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////void my_strcpy(char* dest, char* src)
////{
////	//�������Ż�
////	assert(dest != NULL);//assert - ���� - �����д���ᱨ�����
////	assert(src != NULL);
////	while (*dest++ = *src++)
////	{
////		;
////	}
////	//�ڶ����Ż�
////	/*if (dest != NULL && src != NULL)
////	{
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	}*/
////	//��һ���Ż�
////	//while (*dest++ = *src++) //�˳���������Ϊ��ָ��(NULL)�˳�������
////	//{
////	//	;
////	//}
////	//��ʼ����
////	//while (*src != '\0')
////	//{
////	//	*dest = *src;
////	//	dest++;
////	//	src++;
////	//}
////	//*dest = *src; // '\0'
////}
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "my world";
//	my_strcpy(arr1, arr2);
//	//my_strcpy(arr1,NULL);//����Ϊ��ָ��
//	printf("%s\n", arr1);
//	return 0;
//}

//const ���ô�
//int main()
//{
//	int num = 10;
//	int n = 100;
//	//const int* p = &num; 
//	////const����ָ��������ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ��
//	//*p = 0;//err //*p���ܱ��ı�
//	//p = &n; //p���Ա��ı�
//	//int* const p = &num;
//	////const����ָ������ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	//*p = 0; // *p���Ա��ı�
//	//p = &n; //err //p�����Ա��ı�
//	const int* const p = &num;
//	//constͬʱ������������ʱ
//	*p = 0;//err
//	p = &n;//err
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//����1��+2��+3��+4��+....+n��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			//ret = ret * j;
//			ret *= j;
//		}
//		//sum = sum + ret;
//		sum += ret;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}