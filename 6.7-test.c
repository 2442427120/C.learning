#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。第一周少了1个朋友，剩下的朋友数量翻倍；第二
//周少了2个朋友，剩下的朋友数量翻倍。一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每周的朋友
//数量。该程序一直运行，直到超过邓巴数。邓巴数是初略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150
#define INITIAL 5 //定义初始的朋友数量为5
#define DUNBAR_NUMBER 150 //邓巴数为150
int main(void)
{
	int week, total;//变量week用来存储周，变量total用来存储朋友的总数

	for (week = 1, total = INITIAL; total <= DUNBAR_NUMBER; week++) 
	{
		total = (total - week) * 2; 
		printf("第%d周Rabnud博士的朋友总数是:%d\n", week, total);
	}
	printf("Complete!\n");

	return 0;
}

//Chuckie Lucky赢得了100万美元(税后)，他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie取出10万美元。编写一个程序，计算多少
//年后Chuckie会取完账户的钱
//#define TOTAL_GOLD 1000000
//#define PICK 100000
//int main(void)
//{
//	int year;
//	double sum;
//
//	for (year = 1, sum = TOTAL_GOLD; sum > 0; year++)
//	{
//		sum += sum * 0.08 - PICK;
//	}
//	printf("总共%d年后Chuckie回取完账户的钱\n", --year);
//
//	return 0;
//}

//Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。Deirdre以5%的复合利息投资了100美元（也就是说，
//利息是当前余额的5%，包含之前的利息）。编写一个程序，计算需要多少年Dirdre的投资额才会超过Daphne，并显示两人的投资额
//#define FUND 100
//int main(void)
//{
//	int year;
//	double total_Daphne, total_Deirdre;
//
//	for (year = 1, total_Daphne = FUND, total_Deirdre = FUND; total_Deirdre <= total_Daphne; year++)
//		//year从1开始，而循环结束时year会多加1次，需要减1年才是刚需要的年数
//	{
//		total_Daphne += FUND * 0.1; //每年增加10$
//		total_Deirdre += total_Deirdre * 0.05; //每年增加当前金额的0.05
//	}
//	printf("第%d年Dirdre的投资额超过Daphne\nDirdre的投资额:%.4LF$	Daphne的投资额:%.4LF$\n", --year, total_Deirdre, total_Daphne);
//	//total_Deirdre = 100*(1+0.05)^n;    total_Daphne = 100+10n
//	return 0;
//}

