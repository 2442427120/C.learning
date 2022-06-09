#pragma once
#include <stdio.h>
#include <ctype.h>

//替换输入的字母，非字母字符保持不变
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch) != 0) //isalpha - 如果ch是一个字母，则返回非0，否则返回0
		{
			putchar(ch + 1); //显示该字母的下一个字符
		}
		else
		{
			putchar(ch); //原样显示这个非字母
		}
	}
	putchar(ch); //显示换行符

	return 0;
}

//把一行输入重新打印出来，但是非空格都被替换成原字符在ASCII序列中的下一个字符，空格不变。
//#define SPACE ' ' //SPACE表示空格
//int main(void)
//{
//	char ch;
//
//	ch = getchar(); //读取一个字符
//	while (ch != '\n')//遇到换行符(用户回车)时循环结束
//	{
//		if (ch == SPACE) //留下空格
//		{
//			putchar(ch); //该字符不变
//		}
//		else 
//		{
//			putchar(ch + 1);//改变非空格字符 
//		}
//		ch = getchar();		//获取下一个字
//	}
//	putchar(ch);//打印换行符
//
//	return 0;
//}