#pragma once
#include<stdio.h>
#include<string.h>
int main()
{
	//有符号(signed) char -128,-127,-126 ... -1 0 1 2 3 .... 127
	//从0开始顺时针到-1为结尾
	//所以127后面一位是-128  所以在char中128 是-128  129为-127
	//
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
		//-1,-2,-3,-4 ...... -127,-128,127,126,125 ...... 3,2,1,0    逆时针转
		//a[]中有128+127 = 255 ->  a[255]
	}
	printf("%d\n", strlen(a));
	return 0;
}
//int main()
//{
//	char a = -128;
//	char b = 128; //127+1
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//11111111111111111111111110000000 -补码
//	printf("%u\n",a); //%u - 打印无符号数
//	printf("%u\n",b);
//	return 0;
//}
//封装成函数实现
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//最终优化
//	//char* p = (char*)&a;
//	////返回1，小端 
//	////返回0，大端
//	//return *p; //第一次优化
//	/*if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret = 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	int a = 1;
//	char* p =(char*) & a;
//	//返回1，小端
//	//返回0，大端
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
