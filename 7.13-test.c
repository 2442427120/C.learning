#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣�����¼��裺
//a. �������� = 10.00��Ԫ/Сʱ
//b. �Ӱࣨ����40Сʱ�� = 1.5����ʱ��
//c. ˰��   ǰ300��ԪΪ15%
			 //��150��ԪΪ20%
			  //���µ�Ϊ25%
//��#define������ų��������������Ƿ���ϵ�ǰ˰��
#define FIRST_TARIFF 0.15
#define SECOND_TARIFF 0.2
#define THIRD_TARIFF 0.25
#define OVER_FORTY_HOURS_TIME 1.5
#define BASIC_WAGE 10.00

int main(void)
{
	double work_time;

	printf("������һ�ܵĹ���ʱ��: ");
	scanf("%lf", &work_time);

	if ()

	return 0;
}

//��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
//�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award�����������������ԡ�
//#define STOP '#'
//int main(void)
//{
//	char ch;	//�û�������ַ�
//	int count = 0;	//����ei�������ֵĴ���
//	int flag = 0;
//
//	printf("������:");
//	while ((ch = getchar()) != STOP)
//	{
//		switch (ch)
//		{
//		case 'e':
//			flag = 1;	//���ֵ��ַ�Ϊ'e',������ַ���λ��һ��������flagΪ1
//			break;
//		case 'i':	//��ֵΪ'i',��flagΪ1�����ʾǰ��һ��ֵΪ'e',ei���ֵĴ�����1��
//			if (1 == flag)
//			{
//				count++;
//			}
//			flag = 0;
//			break;
//		default:	//���ֵĲ�Ϊ'e'��'i'����flag����Ϊ0
//			flag = 0;
//			break;
//		}
//	}
//
//	printf("ei������%d��\n", count);
//
//	return 0;
//}

//ʹ��switch��д��ϰ4
//#define STOP '#'
//
//int main(void)
//{
//	char ch;
//	int replace_count = 0;
//
//	printf("�����루����'#'ֹͣ��:");
//	while ((ch = getchar()) != STOP)
//	{
//		switch (ch)
//		{
//		case '.':
//			putchar(ch - 13);
//			replace_count++;
//			break;
//		default:
//			putchar(ch);
//			break;
//		}
//	}
//
//	printf("\nһ��������%d���滻\n", replace_count);
//
//	return 0;
//}

//ʹ��if else����дһ�������ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�
//�����˶��ٴ��滻
//#define STOP '#'
//
//int main(void)
//{
//	char ch;	//�û������ֵ
//	int replace_count = 0;	//�����滻�Ĵ���
//
//	printf("������:");
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '.')	//��'.'�滻��'!'
//		{
//			replace_count++;
//			putchar(ch - 13);	//'!'ASCII��'.'��ASCII���3
//		}
//		else  //������'.'����ԭ����ӡ
//		{
//			putchar(ch);
//		}
//	}
//
//	printf("һ��������%d���滻\n", replace_count);
//
//	return 0;
//}

//��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż��(������0)��������Щż����ƽ��
//ֵ������������ĸ�������������ƽ��ֵ
//int main(void)
//{
//	int input;	//�û����������
//	int even_number = 0;	//����ż�����ܺ�
//	int odd_number = 0;		//�����������ܺ�
//	int even_count = 0;		//����ż���ĸ���
//	int odd_count = 0;		//���������ĸ���
//
//	printf("����������(����0����):");
//	while (scanf("%d", &input) == 1 && input != 0)	//�û�����0ʱֹͣ
//	{
//
//		if (input % 2 == 0)	//ż��
//		{
//			even_number += input;
//			even_count++;
//		}
//		else  //����
//		{
//			odd_number += input;
//			odd_count++;
//		}
//	}
//
//	printf("ż���ĸ�����%d\nż����ƽ������%lf\n", even_count, (double)even_number / (double)even_count);
//	printf("�����ĸ�����%d\n������ƽ������%lf\n", odd_count, (double)odd_number / (double)odd_count);
//
//	return 0;
//}