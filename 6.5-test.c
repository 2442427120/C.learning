#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数
//#define SIZE 8
//int main(void)
//{
//	int i, j = 0;
//	int arr[SIZE] = { 0 };
//
//	printf("请输入8个整数>\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("请输入第%d个整数: ", i+1);
//		scanf("%d", &arr[i]);
//	}
//
//	for (j = 0; j < i; j++) //i在上一个循环借宿后值为8
//	{
//		printf("%d ", arr[i - j - 1]); //打印因从下表为7的开始倒序打印
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。
//然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数等于或小于下限整数为止。
//int main(void)
//{
//	int lower, upper, tmp, squar_sum;//lower和upper分别存储用户输入的上下限,tmp为临时变量，squar_sum存储平方和
//
//	printf("Enter lower and upper integer limits:");
//	while (scanf("%d%d", &lower, &upper) && (upper - lower)) //&&两边表达式值都为真时循环才进行
//	//限制用户的规范输入 - 只有输入两个整数才能使程序运行下去，输入非数字或输入值不全都会导致程序结束
//	//若用户输入的上限整数等于或小于下限整数，upper - lower为等于0或小于0的数，表达式值为假，使循环结束 
//	{
//		for (tmp = lower, squar_sum = 0; tmp <= upper;tmp++)
//		//计算下限到上限范围内所有整数的平方和
//		//平方和的计算是以下限值为初始值计算，直到下限值++到超过上限值时，循环结束，为了防止下限值改变，用tmp变量来存储下限值
//		{
//			squar_sum += (tmp * tmp); 
//		}
//
//		printf("The sums of the squars from %d to %d is %d\n", lower * lower , upper * upper, squar_sum);
//		printf("Enter next set of limits:");
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//float Caculate(const float a, const float b); //函数声明 - 有两个float类型的参数，返回值为float类型的函数
////修改一下程序，使用一个函数返回计算结果
//int main()
//{
//	float a, b, sum; //sum用来接收函数返回值
//
//	printf("请输入两个浮点数:");
//	while (scanf("%f%f", &a, &b))
//	{
//		sum = Caculate(a, b); 
//		printf("%.4f\n", sum);
//		printf("请输入两个浮点数(输入非数字时停止):");
//	}
//	printf("Done!\n");
//
//	return 0;
//}
//
//float Caculate(const float a, const float b)
//{
//	return (a - b) / (a * b); //返回a与b的差除a与b的乘积
//}
//编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
//在用户输入非数字之前，程序应循环处理输入的每对值
//int main(void)
//{
//	float a, b;//变量a，b来存储用户输入的两个浮点值
//
//	printf("请输入两个浮点数:");
//	while (scanf("%f%f", &a, &b) == 2) 
//	//scanf返回值为2表示用户输入了两个数字，循环进行。若用户输入一个数字一个非数字时scanf返回值为1
//	//用户输入两个非数字时scanf的返回值为0，都将结束循环。
//	{
//		printf("sum = %.4f\n", (a-b)/(a * b));
//		printf("请输入两个浮点数(输入非数字时循环停止):");
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//编写一个程序把单词读入一个字符数组中，然后倒序打印这个单词。
//#define SIZE 20 //将数组的大小设为20
//int main(void)
//{
//	int i, sz;
//	char arr[SIZE] = { 0 };
//	printf("请输入一个英文单词：");
//	scanf("%s", arr);
//	/*sz = sizeof(arr) / sizeof(arr[0]);*/
//	sz = strlen(arr);//strlen计算字符数组的长度,不包含‘/0’
//	printf("%d\n", sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[sz-1-i]);//从最后一个字母往前打印
//	}
//	printf("\nComplete!\n");
//	return 0;
//}

//编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限
//int main(void)
//{
//	int upper, lower, integer; //upper用来存储用户输入的上限，lower存储下限
//
//	printf("请输入表格的上限:");
//	scanf("%d", &upper);
//	printf("请输入表格的下限:");
//	scanf("%d", &lower);
//
//	printf("整数  平方    立方\n");
//	for (integer = lower; integer <= upper; integer++) //integer从下限值开始计算值，到上限值结束
//	{
//			printf("%d%7d%9d\n", integer, integer*integer, integer*integer*integer);
//	}
//	return 0;
//}

//编写一个程序，提示用户输入大写字母，使用嵌套循环以下面金字塔型的格式打印字母
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//int main()
//{
//	int i, j, asc, des, count;
//	char input;//input存储用户输入的大写字母
//	printf("请输入一个大写字母:");
//	scanf("%c", &input);
//	for (i = 0; i <= (int)input - 65; i++) //用用户输入的字母减A的ASCII码，得到需要打印的总层数
//	{
//		//打印空格
//		for (j = 0; j < (int)input - 65 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印升序
//		for (asc = 0, count = 65; asc <= i; asc++, count++) //每次循环开始，count的初始值都设为A的ASCII码值
//		{
//			printf("%c", count);
//		}
//
//		//打印降序
//		for (des = 0,  --count; des < i; des++, count--) //在升序打印完后，count的值会比升序最后打印的值大1,因此需要--count（如最后打印的C值为67，count出升序循环后的值是68）
//		{
//			printf("%c", count - 1);//从比升序完后C最后的值后一个开始降序打印(如C升序完后值是67，那么降序就从66开始打印)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char input = 'E';
//	int count = 0;
//	count = (int)input - 1;
//	printf("%c\n", count);
//	return 0;
//}
//使用嵌套循环，按以下的格式打印字母
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU
//int main()
//{
//	int i, j;
//	int count = 65; //定义count变量从65开始,将A存入count中
//
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++, count++) //每循环一次，count++，即count存储下一个大写字母
//		{
//			printf("%c", count);
//		}
//		printf("\n");
//	}
//	printf("Complete!\n");
//
//	return 0;
//}