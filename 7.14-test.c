#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 255	//�����������󳤶�

typedef struct
{
	char ch[MAXLEN + 1];	//�洢����һά����
	int length;	//���ĵ�ǰ����

}SString;

//��������������
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
	printf("------��ֵ����------\n");
	SString S1;
	InitString(&S1);
	char ch[] = "321";
	StrAssign(&S1, ch);
	StrPrint(&S1);
	int tmp1 = StrLength(&S1);
	printf("���ĳ���Ϊ%d\n\n", tmp1);

	printf("------���Ʋ���------\n");
	SString S2;
	StrCopy(&S2, &S1);
	StrPrint(&S2);
	int tmp2 = StrLength(&S2);
	printf("���ĳ���Ϊ%d\n\n", tmp2);

	printf("------���Ӳ���------\n");
	SString S3;
	StrContact(&S3, &S2, &S1);
	StrPrint(&S3);
	int tmp3 = StrLength(&S3);
	printf("���ĳ���Ϊ%d\n\n", tmp3);

	printf("------���Ӵ�����------\n");
	int pos, len;
	SString S4;
	printf("�����뿪ʼλ��: ");
	scanf("%d", &pos);
	printf("�������Ӵ��ĳ���: ");
	scanf("%d", &len);
	if (SubString(&S4, &S3, pos, len))
	{
		printf("�Ӵ�����, ");
		StrPrint(&S4);
		int tmp4 = StrLength(&S4);
		printf("���ĳ���Ϊ%d\n\n", tmp4);
	}
	else
	{
		printf("�Ӵ���ΧԽ��!\n\n");
	}

	printf("------�Ƚϲ���------\n");
	//S1��S2�ıȽ�
	printf("S1����S2���ıȽϣ�\n");
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

	//S1����S3���ıȽ�
	printf("S1����S3���ıȽϣ�\n");
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

	//S3��S4�ıȽ�
	printf("S3����S4���ıȽϣ�\n");
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

	printf("------��λ����------\n");
	if (Index(&S3, &S4) == 0)
	{
		printf("S4����S3���Ӵ�\n");
	}
	else
	{
		printf("�Ӵ�S4��S3�е�λ����%d\n", Index(&S3, &S4));
	}

	return 0;
}

//˳�򴮵ĳ�ʼ��
void InitString(SString *S)
{
	S->length = 0;
}

//˳�򴮵ĸ�ֵ����
void StrAssign(SString* S, char ch[])
{
	int i = 0;
	while (ch[i])
	{
		S->ch[++S->length] = ch[i];	//˳�򴮵ĵ�һ��λ�ò��洢Ԫ�أ���S->ch[0]���洢ֵ
		i++;
	}
}

//˳�򴮵ı���
void StrPrint(SString* S)
{
	printf("���е�ֵΪ:\n");
	for (int i = 1; i <= S->length; i++)
	{
		printf("%c ", S->ch[i]);
	}

	printf("\n");
}

//˳�򴮵ĸ��� - ��S1���Ƶ�S2��
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

//˳�򴮵����Ӳ��� - ��S1��S2���ӵ�S3
void StrContact(SString *S3, SString *S2, SString *S1)
{
	//��S1����S3��
	for (int i = 1; i <= S1->length; i++)
	{
		S3->ch[i] = S1->ch[i];
	}
	//��S2����S3�У���S2����S1֮��
	for (int i = 1; i <= S2->length + S1->length; i++)
	{
		S3->ch[i + S1->length] = S2->ch[i];
	}

	S3->length = S2->length + S1->length;	//S3�ĳ���Ϊ�Ž�ȥ�Ĵ����ܳ���
}

//˳�򴮵����Ӵ����� - ��ָ��λ����ָ�����ȵ��Ӵ����浽S4��
bool SubString(SString* S4, SString *S3, int pos, int len)
{
	if ((pos + len - 1) > S3->length)	//�Ӵ���ΧԽ��
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

//˳���󴮵ĳ���
int StrLength(SString* S)
{
	return S->length;
}


//˳�򴮵ıȽϲ��� - �����������бȽ�
int StrCompare(SString* S, SString* T)
{
	//��S>T������ֵ����0��S=T������ֵ����0��S<T������ֵС��0
	for (int i = 1; i < S->length && i < T->length; i++)
	{
		if (S->ch[i] != T->ch[i])
		{
			return S->ch[i] - T->ch[i];
		}
	}

	//ɨ����ַ�����ͬ����Խ������Խ��
	return S->length - T->length;
}

//˳�򴮵��Ӵ���λ���� - ������S3�ж�λS4�Ӵ����ڵ�λ��
int Index(SString* S, SString* T)
{
	int i = 1;
	int m = StrLength(S);
	int n = StrLength(T);
	SString sub;	//�����ݴ��Ӵ�

	if (T->length < 0)	//Ҫ��λ���Ӵ�S4������
	{
		printf("S4������\n");
	}
	else  //S4����
	{
		while (i <= m - n + 1)	//m - n + 1 ����ȡ�������ֵ
		{
			SubString(&sub, S, i, n);	//��i��ʼȡ����Ϊn���Ӵ�

			if (StrCompare(&sub, T) != 0)	//����Ӵ�sub��S4��ͬ����i+1��ȡ����Ϊn���Ӵ�
			{
				i++;
			}
			else  //�Ӵ�sub��ͬ���򷵻��Ӵ�������S3�е�λ��
			{
				return i;
			}
		}
	}

	return 0;
}