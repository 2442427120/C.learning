//计算1 / 1*3 + 1 / 2*4 + 1 / 3 * 5 + ... + 1 / 98*100 + 1 / 99*101
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//方法一:第一个数是2²-1，第二个是3²-1，第三个数是4²-1,一直到100²-1
//int main(void)
//{
//	double sum = 0;
//
//	for (int n = 2; n <= 100; n++)
//	{
//		sum += (n * n - 1);
//	}
//
//	cout << 1 / sum << endl;
//
//	return 0;
//}

//方法二：第一个数分母为3，第二个数为8，第三个为15，第一个数与第二个数差值是5，第二个数与第三个数差值是7，以
//此类推，依此为9,11，... 101。
//int main(void)
//{
//	double sum = 3;
//	double result = 0;
//
//	for (int n = 3; n <= 101; n++)
//	{
//		result += sum;
//		sum += (2 * n - 1);
//	}
//
//	cout << 1 / result << endl;
//
//	return 0;
//}

//方法三，第一个数是1*3，也就是1*(1+2),第二个数是2*4,也就是2*(2+2),因此，到第n个就是n*(n+2)
//int main(void)
//{
//	double sum = 0;
//
//	for (int n = 1; n < 100; n++)
//	{
//		sum += n * (n + 2);
//	}
//
//	cout << 1 / sum << endl;
//
//	return 0;
//}

//2.求1 + (1 + 2) + (1 + 2 + 3) + .. + (1 + 2 + 3 + .. + n)
//int main(void)
//{
//	int temp;
//	double sum = 1;
//	double result = 0;
//
//	cout << "请输入n：";
//	cin >> temp;
//	for (int n = 1; n <= temp; n++)
//	{
//		result += sum;
//		sum += (n + 1);
//	}
//
//	cout << result << endl;
//
//	return 0;
//}

//int main(void)
//{
//	int n, sum = 0, result = 0;
//	printf("请输入n:");
//	scanf_s("%d", &n);
//
//	for (int i = 0; i <= n; i++)
//	{
//		result += sum;
//		sum += (i + 1);
//	}
//
//	printf("result = %d", result);
//	return 0;
//}

//int main(void)
//{
//	double n, i, j, sum = 0;
//	cout << "输入n:";
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//			sum = sum + j;
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}

int main(void)
{
	/*string a[3];

	for (int i = 0; i < 3; i++)
	{
		getline(cin, a[i]);
	}*/

	/*char *a = new char;

	for (int i = 0; i < 3; i++)
	{
		cin.getline(a, 50);
	}*/
	int a = 5;
	int* ppp = &a;
	free(ppp);

	return 0;
}