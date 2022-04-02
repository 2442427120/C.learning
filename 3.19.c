#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//....2^50次，效率非常低
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1)+ Fib(n - 2);
//}

//1 1 2 3 5 8 13 21 34 55......
//a b c
//c = a+b
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//当n等于4时，n--等于3，再次跳到循环判断，3>2，则进入循环，c=1+2， a=1，b=2,；n--等于2,跳出循环，返回c也就是3
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *=i;
//	}
//	return ret;
//}
//int Fac2(int n) //递归的方法求n的阶乘
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n-1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}
//递归方法求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "world";
//	int len = my_strlen(arr);
//	printf("len= %d", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len= %d", len);
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9) //递归一定要有的条件，否则会出现栈满的情况
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}