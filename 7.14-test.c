#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 255	//定义数组的最大长度

typedef struct
{
	char ch[MAXLEN + 1];	//存储串的一维数组
	int length;	//串的当前长度

}SString;

//函数的声明部分
void InitString(SString *S);
void StrAssign(SString *S, char ch[]);
void StrPrint(SString *S);
void StrCopy(SString *S2, SString *S1);
void StrContact(SString *S3, SString *S2, SString *S1);
bool SubString(SString *S4, SString *S3, int pos, int len);
int StrLength(SString* S);
int StrCompare(SString *S, SString *T);
int Index(SString *S, SString *T);

int main(void)
{
	printf("------赋值操作------\n");
	SString S1;
	InitString(&S1);
	char ch[] = "321";
	StrAssign(&S1, ch);
	StrPrint(&S1);
	int tmp1 = StrLength(&S1);
	printf("串的长度为%d\n\n", tmp1);

	printf("------复制操作------\n");
	SString S2;
	StrCopy(&S2, &S1);
	StrPrint(&S2);
	int tmp2 = StrLength(&S2);
	printf("串的长度为%d\n\n", tmp2);

	printf("------联接操作------\n");
	SString S3;
	StrContact(&S3, &S2, &S1);
	StrPrint(&S3);
	int tmp3 = StrLength(&S3);
	printf("串的长度为%d\n\n", tmp3);

	printf("------求子串操作------\n");
	int pos, len;
	SString S4;
	printf("请输入开始位置: ");
	scanf("%d", &pos);
	printf("请输入子串的长度: ");
	scanf("%d", &len);
	if (SubString(&S4, &S3, pos, len))
	{
		printf("子串存在, ");
		StrPrint(&S4);
		int tmp4 = StrLength(&S4);
		printf("串的长度为%d\n\n", tmp4);
	}
	else
	{
		printf("子串范围越界!\n\n");
	}

	printf("------比较操作------\n");
	//S1与S2的比较
	printf("S1串与S2串的比较：\n");
	if (StrCompare(&S1, &S2) < 0)
	{
		printf("S1 < S2\n");
	}
	else if (StrCompare(&S1, &S2) == 0)
	{
		printf("S1 = S2\n");
	}
	else
	{
		printf("S1 > S2\n");
	}
	printf("\n");

	//S1串与S3串的比较
	printf("S1串与S3串的比较：\n");
	if (StrCompare(&S1, &S3) < 0)
	{
		printf("S1 < S3\n");
	}
	else if (StrCompare(&S1, &S3) == 0)
	{
		printf("S1 = S3\n");
	}
	else
	{
		printf("S1 > S3\n");
	}
	printf("\n");

	//S3与S4的比较
	printf("S3串与S4串的比较：\n");
	if (StrCompare(&S3, &S4) < 0)
	{
		printf("S3 < S4\n");
	}
	else if (StrCompare(&S3, &S4) == 0)
	{
		printf("S3 = S4\n");
	}
	else
	{
		printf("S3 > S4\n");
	}
	printf("\n");

	printf("------定位操作------\n");
	if (Index(&S3, &S4) == 0)
	{
		printf("S4不是S3的子串\n");
	}
	else
	{
		printf("子串S4在S3中的位置是%d\n", Index(&S3, &S4));
	}

	return 0;
}

//顺序串的初始化
void InitString(SString *S)
{
	S->length = 0;
}

//顺序串的赋值操作
void StrAssign(SString* S, char ch[])
{
	int i = 0;
	while (ch[i])
	{
		S->ch[++S->length] = ch[i];	//顺序串的第一个位置不存储元素，即S->ch[0]不存储值
		i++;
	}
}

//顺序串的遍历
void StrPrint(SString* S)
{
	printf("串中的值为:\n");
	for (int i = 1; i <= S->length; i++)
	{
		printf("%c ", S->ch[i]);
	}

	printf("\n");
}

//顺序串的复制 - 将S1复制到S2中
void StrCopy(SString *S2, SString *S1)
{
	/*S2->length = 0;*/
	for (int i = 1; i <= S1->length; i++)
	{
		S2->ch[i] = S1->ch[i];
		/*S2->length++;*/
	}

	S2->length = S1->length;
}

//顺序串的联接操作 - 将S1、S2联接到S3
void StrContact(SString *S3, SString *S2, SString *S1)
{
	//将S1放入S3中
	for (int i = 1; i <= S1->length; i++)
	{
		S3->ch[i] = S1->ch[i];
	}
	//将S2放入S3中，且S2放在S1之后
	for (int i = 1; i <= S2->length + S1->length; i++)
	{
		S3->ch[i + S1->length] = S2->ch[i];
	}

	S3->length = S2->length + S1->length;	//S3的长度为放进去的串的总长度
}

//顺序串的求子串操作 - 从指定位置求指定长度的子串并存到S4中
bool SubString(SString* S4, SString *S3, int pos, int len)
{
	if ((pos + len - 1) > S3->length)	//子串范围越界
	{
		return false;
	}
	for (int i = pos; i < pos + len; i++)
	{
		S4->ch[i - pos + 1] = S3->ch[i];
	}

	S4->length = len;

	return true;
}

//顺序串求串的长度
int StrLength(SString* S)
{
	return S->length;
}


//顺序串的比较操作 - 将两个串进行比较
int StrCompare(SString* S, SString* T)
{
	//若S>T，返回值大于0；S=T，返回值等于0；S<T，返回值小于0
	for (int i = 1; i < S->length && i < T->length; i++)
	{
		if (S->ch[i] != T->ch[i])
		{
			return S->ch[i] - T->ch[i];
		}
	}

	//扫描的字符都相同，则串越长，串越大
	return S->length - T->length;
}

//顺序串的子串定位操作 - 在主串S3中定位S4子串所在的位置
int Index(SString* S, SString* T)
{
	int i = 1;
	int m = StrLength(S);
	int n = StrLength(T);
	SString sub;	//用于暂存子串

	if (T->length < 0)	//要定位的子串S4不存在
	{
		printf("S4不存在\n");
	}
	else  //S4存在
	{
		while (i <= m - n + 1)	//m - n + 1 是能取到的最大值
		{
			SubString(&sub, S, i, n);	//从i开始取长度为n的子串

			if (StrCompare(&sub, T) != 0)	//如果子串sub与S4不同，从i+1处取长度为n的子串
			{
				i++;
			}
			else  //子串sub相同，则返回子串在主串S3中的位置
			{
				return i;
			}
		}
	}

	return 0;
}