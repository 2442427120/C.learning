#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入存储在char类型的数组中，假设每行字符不超过255.
//#define SIZE 255
//int main(void)
//{
//	int i, j;
//	char ch;
//	char arr[SIZE] = { 0 };
//
//	printf("请输入一行文字:");
//	for (i = 0, ch = 0; i < SIZE && ch != '\n'; i++) //循环读入字符到数组中，结束时\n会存入最后，如输入10个字符，arr[11]会存入\n
//	{
//		scanf("%c", &ch);
//		arr[i] = ch;
//	}
//
//	for (j = --i; j >= 0; j--) //j = --1表示从有元素的数组末尾开始
//	{
//		printf("%c", arr[j-1]); //最后一个元素arr[j]为\n,arr[j-1]表示从\n前一位开始打印
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%c", arr);
//	return 0;
//}

//编写一个程序，创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入8个值。第二个数组元素的值设为第一个数组
//对应元素的累积之和。例如，第二个数组的第4个元素的值是第一个数组前4个元素之和，第二个数组的第5个元素的值是第一个数组前5个元
//素之和(用嵌套循环可以完成，但是利用第二个数组的第5个元素第二个数组的第4个元素与第一个数组的第5个元素之和，只用一个循环就能
//完成任务，不需要使用嵌套循环)。最后，使用循环显示两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，
//而且每个元素都与第一个数组各元素相对应

//int main(void)
//{
//	int i, j, n;
//	double sum = 0.0;
//	double arr1[8] = { 0.0 };
//	double arr2[8] = { 0.0 };
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("请输入第%d个元素的值:", i+1);
//		scanf("%LF", &arr1[i]);//给arr1数组的8个元素依次赋值
//		sum += arr1[i]; //直接利用arr1的前n-1个元素的值累加再加上arr1的第n个元素的值，将得到的结果赋给sum
//		/*for (j = 0, sum = 0.0; j <= i; j++) //使用嵌套循环，每次计算都从arr1的第一个元素累加到arr1最后一个元素
//		{
//			sum += arr1[j]; //将arr1数组的n个元素的值累加赋给sum
//		}*/
//
//		/*j--;*/
//		/*arr2[j] = sum;*/ //使用嵌套循环时用sum给arr2赋值
//
//		arr2[i] = sum; //不使用嵌套循环的赋值
//		/*printf("%lf\n", arr2[j]);*/
//	}
//
//	for (n = 0; n < 8; n++)
//	{
//		printf("%-14.4LF ", arr1[n]);
//	}
//	printf("\n");
//	for (n = 0; n < 8; n++)
//	{
//		printf("%-14.4LF ", arr2[n]);
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
//使用for循环设置数组元素的值，使用do while循环显示数组元素的值
//int main(void)
//{
//	int i, tmp; 
//	int n = 0;
//	int arr[8] = { 0 };
//
//	for (i = 0, tmp = 1; i < 8; i++)
//	{
//		tmp = 2 * tmp;//下一次为上一次的2倍
//		arr[i] = tmp;
//	}
//	do
//	{
//		printf("%d ", arr[n]);//先打印第1个元素的值
//	} while (++n < 8); //先++再比较，从1到7，打印7次，加上上面一次总共打印8次
//	printf("\nDone!\n");
//
//	return 0;
//}

//编写一个程序，计算以下两个无限序列的总和，直到到达某次数
//1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
//1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
//double Add_sequence(double mol, double des, int n);
//double Mix_sequence(double mol, double des, int n);
//int main(void)
//{
//	int n; // n用来存储用户决定的到哪次停下
//	double add_seq, mix_seq; //add_seq存储第一个序列的和，mix_seq存储第二个序列的和
//	double mol = 1.0; //存储分子
//	double des = 0.0; //存储分母
//
//	printf("请输入要计算的次数:");
//	while (scanf("%d", &n) == 1 && n > 0)
//	{
//		add_seq = Add_sequence(mol, des, n);//求第一个序列的和的函数
//		mix_seq = Mix_sequence(mol, des, n);//求第二个序列的和的函数
//		printf("add_seq = %.12LF\nmix_seq = %.12LF\n", add_seq, mix_seq);
//		printf("请输入计算的次数(输入0或负数时停止):");
//	}
//	printf("Done!\n");
//	return 0;
//}
//
//double Add_sequence(double mol, double des, int n)
//{
//	int i;
//	double sum;
//
//	for (i = 0, des = 1.0, sum = 0.0; i < n; i++, des++) //分子不变，分母每次比上一次大1
//	{
//		sum += (mol / des);
//	}
//
//	return sum;
//}
//
//double Mix_sequence(double mol, double des, int n)
//{
//	double sum;
//	int i, tmp;
//
//	for (i = 0, des = 1.0, tmp = -1, sum = 0; i < n; i++, des++) 
//		//分母为奇数时为正，为偶数时为负，用tmp来存储符号的变化，再用tmp与des相乘得到分母的值
//		//-1*-1 = 1， -1*-1*-1 = -1， -1*-1*-1*-1 = 1，tmp每次都为上一次的相反数
//	{
//		tmp = -tmp;
//		sum += (mol / (des * tmp));
//	}
//
//	return sum;
//}
//int main()
//{
//	float a = 1.0;
//
//	printf("%.2f", ++a);
//	return 0;
//}