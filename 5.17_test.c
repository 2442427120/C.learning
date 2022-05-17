#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//实现字母的大小写转换，多组输入输出
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", ch+32);
		getchar();
	}

	return 0;
}


//将一个四位数字反向输出
//int main()
//{
//	int n = 0;
//	printf("请输入一个四位数字:>");
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	printf("\n");
//	return 0;
//}
//牛客网BC4:输出1234的八进制和十六进制，要去显示八进制的0，十六进制0x
//int main(void)
//{
//	printf("%#o %#x", 1234, 1234);
//	return 0;
//}

//牛客网BC3：有容乃大
// 输出不同整形数据类型在内存中的占多大(字节)
//int main()
//{
//	printf("The sizeof short is %d bytes.\n", sizeof(short));
//	printf("The sizeof int is %d bytes.\n",sizeof(int));
//	printf("The sizeof long is %d bytes.\n", sizeof(long));
//	printf("The sizeof long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}

//牛客网BC2：我是大V
// 要求输出由小写v组成的大V
//int main()
//{
//	printf("v   v\n v v\n  v\n");
//	return 0;
//}

//牛客网BC1：实践出真资
//int main()
//{
//	printf("printice makes perfect!");
//	return 0;
//}