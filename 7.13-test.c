#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
//a. 基本工资 = 10.00美元/小时
//b. 加班（超过40小时） = 1.5倍的时间
//c. 税率   前300美元为15%
			 //续150美元为20%
			  //余下的为25%
//用#define定义符号常量。不用在意是否符合当前税法
#define FIRST_TARIFF 0.15
#define SECOND_TARIFF 0.2
#define THIRD_TARIFF 0.25
#define OVER_FORTY_HOURS_TIME 1.5
#define BASIC_WAGE 10.00

int main(void)
{
	double work_time;

	printf("请输入一周的工作时间: ");
	scanf("%lf", &work_time);

	if ()

	return 0;
}

//编写程序读取输入，读到#停止，报告ei出现的次数。
//该程序要记录前一个字符和当前字符。用“Receive your eieio award”这样的输入来测试。
//#define STOP '#'
//int main(void)
//{
//	char ch;	//用户输入的字符
//	int count = 0;	//计算ei连续出现的次数
//	int flag = 0;
//
//	printf("请输入:");
//	while ((ch = getchar()) != STOP)
//	{
//		switch (ch)
//		{
//		case 'e':
//			flag = 1;	//出现的字符为'e',则将这个字符定位第一个，并让flag为1
//			break;
//		case 'i':	//若值为'i',且flag为1，则表示前面一个值为'e',ei出现的次数加1。
//			if (1 == flag)
//			{
//				count++;
//			}
//			flag = 0;
//			break;
//		default:	//出现的不为'e'或'i'，则将flag重置为0
//			flag = 0;
//			break;
//		}
//	}
//
//	printf("ei出现了%d次\n", count);
//
//	return 0;
//}

//使用switch重写练习4
//#define STOP '#'
//
//int main(void)
//{
//	char ch;
//	int replace_count = 0;
//
//	printf("请输入（输入'#'停止）:");
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
//	printf("\n一共进行了%d次替换\n", replace_count);
//
//	return 0;
//}

//使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告
//进行了多少次替换
//#define STOP '#'
//
//int main(void)
//{
//	char ch;	//用户输入的值
//	int replace_count = 0;	//计算替换的次数
//
//	printf("请输入:");
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '.')	//将'.'替换成'!'
//		{
//			replace_count++;
//			putchar(ch - 13);	//'!'ASCII与'.'的ASCII码差3
//		}
//		else  //若不是'.'，则原样打印
//		{
//			putchar(ch);
//		}
//	}
//
//	printf("一共进行了%d次替换\n", replace_count);
//
//	return 0;
//}

//编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数(不包括0)个数、这些偶数的平均
//值、输入的奇数的个数及其奇数的平均值
//int main(void)
//{
//	int input;	//用户输入的数字
//	int even_number = 0;	//计算偶数的总和
//	int odd_number = 0;		//计算奇数的总和
//	int even_count = 0;		//计算偶数的个数
//	int odd_count = 0;		//计算奇数的个数
//
//	printf("请输入整数(输入0结束):");
//	while (scanf("%d", &input) == 1 && input != 0)	//用户输入0时停止
//	{
//
//		if (input % 2 == 0)	//偶数
//		{
//			even_number += input;
//			even_count++;
//		}
//		else  //奇数
//		{
//			odd_number += input;
//			odd_count++;
//		}
//	}
//
//	printf("偶数的个数：%d\n偶数的平均数：%lf\n", even_count, (double)even_number / (double)even_count);
//	printf("奇数的个数：%d\n奇数的平均数：%lf\n", odd_count, (double)odd_number / (double)odd_count);
//
//	return 0;
//}