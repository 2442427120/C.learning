#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 9;
	int b = 99;
	int c = 999;

	printf("请输入三个整数:>");
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
//	printf("输入三个值:>");
//	x = scanf("%d%d%d", &a, &b, &c);
//	printf("x = %d", x);
//	return 0;
//}
//void Temperatures(double tmp); //函数声明
//
//int main(void) //计算华氏温度转换为摄氏温度和开氏温度
//{
//	double tmp = 0.0; //存储用户输入的华氏温度
//	printf("请输入一个华氏温度：");//提示用户输入一个华氏温度
//
//	scanf返回值 - 正确按指定格式输入变量的个数，也即能正确接收到值的变量个数。
//	例如scanf("%d%d", &a, &b);
//	若a，b都被成功读入，则scanf的返回值是2
//	若只有a被成功读入，则返回值为1
//	若a，b都不被读入，则返回值为0
//	while ((scanf("%LF", &tmp)) == 1) //scanf返回读取数据的数量，在语句中的意思是 - 输入的为数字，则表示被读入成功，返回为1，若不为数字，则表示被读入失败，返回0
//	{
//		Temperatures(tmp);//用于计算华氏温度转摄氏温度和开氏温度的值，并将值打印出来
//		printf("请重新输入一个华氏温度(输入'q'或其他非数字结束)：");
//
//	}
//	return 0;
//}
//
//void Temperatures(double const tmp)
//{
//	double cesius = 0;//存储摄氏温度
//	double kelvin = 0;//存储开氏温度
//
//	cesius = 5.0 / 9.0 * (tmp - 32.0);
//	kelvin = cesius + 273.16;
//	printf("%.2LF°F = %.2LF°C= %.2LFK\n", tmp, cesius, kelvin);
//}

//int main(void) //求模运算
//{
//	int divisor = 0; //存储第一个整数
//	int dividend = 0; //存储第二个整数
//	int result = 0;//存储求模的结果
//
//	printf("This program computes moduli.\n"); //这是一个求模计算
//	printf("Enter an integer to serve as the second operand: "); //提示用户输入一个整数作为第二个运算对象
//	scanf("%d", &divisor);
//	printf("Now enter the first operand: "); //提示用户输入整数作为第一个运算对象
//	scanf("%d", &dividend);
//
//	while (dividend)
//	{
//		result = dividend % divisor; //始终把第一个整数作为第二个运算对象求模并获得结果
//		printf("%d %% %d is %d\n", dividend, divisor, result);
//		printf("Enter next number for first operand (<=0 to quit):>"); //提示用户输入整数作为第一个运算对象s
//		scanf("%d", &dividend);
//	}
//	printf("Done\n");
//
//	return 0;
//}

//int main(void) //计算n的平方和
//{
//	int count, sum, input;
//
//	count = 0;//初始化变量
//	sum = 0;
//	input = 0;
//	printf("Please enter an integer:>"); //提示用户输入一个整数
//	scanf("%d", &input);
//	while (count++ < input)
//	{
//		sum = count * count;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//int main(void) // 计算前n个整数的和
//{
//	int count, sum, input; //声明
//
//	count = 0;
//	sum = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &input);
//	while (count++ < input)
//	{
//		sum += count;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}