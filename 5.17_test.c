#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//ʵ����ĸ�Ĵ�Сдת���������������
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


//��һ����λ���ַ������
//int main()
//{
//	int n = 0;
//	printf("������һ����λ����:>");
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
//ţ����BC4:���1234�İ˽��ƺ�ʮ�����ƣ�Ҫȥ��ʾ�˽��Ƶ�0��ʮ������0x
//int main(void)
//{
//	printf("%#o %#x", 1234, 1234);
//	return 0;
//}

//ţ����BC3�������˴�
// �����ͬ���������������ڴ��е�ռ���(�ֽ�)
//int main()
//{
//	printf("The sizeof short is %d bytes.\n", sizeof(short));
//	printf("The sizeof int is %d bytes.\n",sizeof(int));
//	printf("The sizeof long is %d bytes.\n", sizeof(long));
//	printf("The sizeof long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}

//ţ����BC2�����Ǵ�V
// Ҫ�������Сдv��ɵĴ�V
//int main()
//{
//	printf("v   v\n v v\n  v\n");
//	return 0;
//}

//ţ����BC1��ʵ��������
//int main()
//{
//	printf("printice makes perfect!");
//	return 0;
//}