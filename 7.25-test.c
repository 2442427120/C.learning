#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//计算电费
#define RATE1 0.13230	//首次使用360kwh的费率
#define RATE2 0.15040	//接着再使用108kwh的费率
#define RATE3 0.30025	//接着再使用252kwh的费率
#define RATE4 0.34025	//使用超过720kwh的费率
#define BREAK1 360.0	//费率的第1个分界点
#define BREAK2 468.0	//费率的第2个分界点
#define BREAK3 720.0	//费率的第3个分界点
#define BASE1 (RATE1 * BREAK1)	//使用360kwh的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))	//使用468kwh的费用
#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))

int main(void)
{
	double kwh;		//使用千瓦时
	double bill;	//电费

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

//替换输入的字母，非字母字符保持不变
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

//更改输入，空格不变
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

//if else不匹配问题
//int main(void)
//{
//	int x = 1;
//
//	if (x > 0)
//		printf("x > 0");
//	x++;
//
//	else //else 没有匹配的if而产生错误
//		printf("x < 0");
//
//	return 0;
//}

//找出0℃以下的天数占总天数的百分比
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