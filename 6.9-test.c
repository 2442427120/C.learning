#pragma once
#include <stdio.h>
#include <ctype.h>

//�滻�������ĸ������ĸ�ַ����ֲ���
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch) != 0) //isalpha - ���ch��һ����ĸ���򷵻ط�0�����򷵻�0
		{
			putchar(ch + 1); //��ʾ����ĸ����һ���ַ�
		}
		else
		{
			putchar(ch); //ԭ����ʾ�������ĸ
		}
	}
	putchar(ch); //��ʾ���з�

	return 0;
}

//��һ���������´�ӡ���������Ƿǿո񶼱��滻��ԭ�ַ���ASCII�����е���һ���ַ����ո񲻱䡣
//#define SPACE ' ' //SPACE��ʾ�ո�
//int main(void)
//{
//	char ch;
//
//	ch = getchar(); //��ȡһ���ַ�
//	while (ch != '\n')//�������з�(�û��س�)ʱѭ������
//	{
//		if (ch == SPACE) //���¿ո�
//		{
//			putchar(ch); //���ַ�����
//		}
//		else 
//		{
//			putchar(ch + 1);//�ı�ǿո��ַ� 
//		}
//		ch = getchar();		//��ȡ��һ����
//	}
//	putchar(ch);//��ӡ���з�
//
//	return 0;
//}