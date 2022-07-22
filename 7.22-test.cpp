#include <iostream>
#include <string>

//6.完成编程练习5，但这一次使用一个二维数组来存储输入----3年中每个月的销售量。程序将报告每年销售量以及三年
//的总销售量。
const int Years_month = 12;

int main(void)
{
	using namespace std;

	int quantity[3][12];
	int sum = 0;

	string month[Years_month] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	cout << "请输入3年中每个月的销售量" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "年" << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << month[j] << ":";
			cin >> quantity[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "年" << endl;
		for (int j = 0; j < 12; j++)
		{
			/*if (6 == j)
			{
				cout << endl;

			}*/
			cout << month[j] << ":";
			cout << quantity[i][j];
			cout << "\t";
		}

		cout << endl;
	}

	return 0;
}

//5.假设要销售C++ For Fools一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。程序
//通过循环，使用初始化为月份字符串的char*数组(或string对象数组)逐月进行提示，并将输入的数据储存在一个int
//数组中。然后，程序计算数组中各元素的总和，并报告这一年的销售情况。
//const int Years_month = 12;
//
//int main(void)
//{
//	using namespace std;
//
//	int quantity[Years_month];
//	int sum = 0;
//
//	string month[Years_month] =
//	{
//		"January: ",
//		"February: ",
//		"March: ",
//		"April: ",
//		"May: ",
//		"June: ",
//		"July: ",
//		"August: ",
//		"September: ",
//		"October: ",
//		"November: ",
//		"December: "
//	};
//	/*const char* month[Years_month] =
//	{
//		"January: ",
//		"February: ",
//		"March: ",
//		"April: ",
//		"May: ",
//		"June: ",
//		"July: ",
//		"August: ",
//		"September: ",
//		"October: ",
//		"November: ",
//		"December: "
//	};*/
//
//	cout << "请输入每个月份的销售量" << endl;
//	for (int i = 0; i < Years_month; ++i)
//	{
//		cout << month[i];
//		cin >> quantity[i];
//		sum += quantity[i];
//	}
//
//	cout << "全年的销售量：" << sum << endl;
//
//	return 0;
//}

//4.Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元：
//利息 = 0.10 * 原始存款
//而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款(包括获得的利息)的5%;
//利息 = 0.05 * 当前存款
//Cleo在第一年投资100美元的盈利是5%----得到105美元。下一年的盈利是105美元的5%----即5.2美元，依此类推。请
//编写一个程序，计算多少年后，Celo的投资价值才能超过Dapha的投资价值，并显示此时两个人的投资价值。
//const int Principal = 100;
//const double Daphna = 0.1;
//const double Cleo = 0.05;
//
//int main(void)
//{
//	using namespace std;
//
//	int i;
//	double daphna_funds, cleo_funds;
//	daphna_funds = cleo_funds = Principal;
//
//	for (i = 0; daphna_funds >= cleo_funds; ++i)
//	{
//		daphna_funds += Principal * Daphna;
//		cleo_funds += cleo_funds * Cleo;
//	}
//
//	cout << "第" << i << "年" << "Cleo的投资价值才能超过Daphna" << endl;
//	cout << "Daphna资金: $" << daphna_funds << endl;
//	cout << "Cleo资金: $" << cleo_funds << endl;
//
//	return 0;
//}