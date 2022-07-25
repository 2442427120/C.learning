#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//������
#define RATE1 0.13230	//�״�ʹ��360kwh�ķ���
#define RATE2 0.15040	//������ʹ��108kwh�ķ���
#define RATE3 0.30025	//������ʹ��252kwh�ķ���
#define RATE4 0.34025	//ʹ�ó���720kwh�ķ���
#define BREAK1 360.0	//���ʵĵ�1���ֽ��
#define BREAK2 468.0	//���ʵĵ�2���ֽ��
#define BREAK3 720.0	//���ʵĵ�3���ֽ��
#define BASE1 (RATE1 * BREAK1)	//ʹ��360kwh�ķ���
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))	//ʹ��468kwh�ķ���
#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))

int main(void)
{
	double kwh;		//ʹ��ǧ��ʱ
	double bill;	//���

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);

	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));

	printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);

	return 0;
}

//�滻�������ĸ������ĸ�ַ����ֲ���
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//
//	putchar(ch);
//
//	return 0;
//}

//�������룬�ո񲻱�
//#define SPACE ' '
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}

//if else��ƥ������
//int main(void)
//{
//	int x = 1;
//
//	if (x > 0)
//		printf("x > 0");
//	x++;
//
//	else //else û��ƥ���if����������
//		printf("x < 0");
//
//	return 0;
//}

//�ҳ�0�����µ�����ռ�������İٷֱ�
//int main(void)
//{
//	const int Freezing = 0;
//
//	float temperature = 0;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < Freezing)
//			cold_days++;
//	}
//
//	if (all_days != 0)
//		printf("%d days total: %.lf%% were below freezing.\n", 
//			all_days, 100.0 * (float) cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//
//	return 0;
//}