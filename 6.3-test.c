#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 9;
	int b = 99;
	int c = 999;

	printf("��������������:>");
	scanf("%*d %d %d", &a, &b, &c);

	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}

//int main()
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 245.5;
//
//	printf("Enter a file width:\>");
//	scanf("%d", &width);
//	printf("The number is %*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//	return 0;
//}

//int main(void)
//{
//	int a, b, c;
//	int x;
//
//	printf("��������ֵ:>");
//	x = scanf("%d%d%d", &a, &b, &c);
//	printf("x = %d", x);
//	return 0;
//}
//void Temperatures(double tmp); //��������
//
//int main(void) //���㻪���¶�ת��Ϊ�����¶ȺͿ����¶�
//{
//	double tmp = 0.0; //�洢�û�����Ļ����¶�
//	printf("������һ�������¶ȣ�");//��ʾ�û�����һ�������¶�
//
//	scanf����ֵ - ��ȷ��ָ����ʽ��������ĸ�����Ҳ������ȷ���յ�ֵ�ı���������
//	����scanf("%d%d", &a, &b);
//	��a��b�����ɹ����룬��scanf�ķ���ֵ��2
//	��ֻ��a���ɹ����룬�򷵻�ֵΪ1
//	��a��b���������룬�򷵻�ֵΪ0
//	while ((scanf("%LF", &tmp)) == 1) //scanf���ض�ȡ���ݵ�������������е���˼�� - �����Ϊ���֣����ʾ������ɹ�������Ϊ1������Ϊ���֣����ʾ������ʧ�ܣ�����0
//	{
//		Temperatures(tmp);//���ڼ��㻪���¶�ת�����¶ȺͿ����¶ȵ�ֵ������ֵ��ӡ����
//		printf("����������һ�������¶�(����'q'�����������ֽ���)��");
//
//	}
//	return 0;
//}
//
//void Temperatures(double const tmp)
//{
//	double cesius = 0;//�洢�����¶�
//	double kelvin = 0;//�洢�����¶�
//
//	cesius = 5.0 / 9.0 * (tmp - 32.0);
//	kelvin = cesius + 273.16;
//	printf("%.2LF��F = %.2LF��C= %.2LFK\n", tmp, cesius, kelvin);
//}

//int main(void) //��ģ����
//{
//	int divisor = 0; //�洢��һ������
//	int dividend = 0; //�洢�ڶ�������
//	int result = 0;//�洢��ģ�Ľ��
//
//	printf("This program computes moduli.\n"); //����һ����ģ����
//	printf("Enter an integer to serve as the second operand: "); //��ʾ�û�����һ��������Ϊ�ڶ����������
//	scanf("%d", &divisor);
//	printf("Now enter the first operand: "); //��ʾ�û�����������Ϊ��һ���������
//	scanf("%d", &dividend);
//
//	while (dividend)
//	{
//		result = dividend % divisor; //ʼ�հѵ�һ��������Ϊ�ڶ������������ģ����ý��
//		printf("%d %% %d is %d\n", dividend, divisor, result);
//		printf("Enter next number for first operand (<=0 to quit):>"); //��ʾ�û�����������Ϊ��һ���������s
//		scanf("%d", &dividend);
//	}
//	printf("Done\n");
//
//	return 0;
//}

//int main(void) //����n��ƽ����
//{
//	int count, sum, input;
//
//	count = 0;//��ʼ������
//	sum = 0;
//	input = 0;
//	printf("Please enter an integer:>"); //��ʾ�û�����һ������
//	scanf("%d", &input);
//	while (count++ < input)
//	{
//		sum = count * count;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//int main(void) // ����ǰn�������ĺ�
//{
//	int count, sum, input; //����
//
//	count = 0;
//	sum = 0;
//	printf("������һ������:>");
//	scanf("%d", &input);
//	while (count++ < input)
//	{
//		sum += count;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}