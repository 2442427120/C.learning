#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Rabnud��ʿ������һ���罻Ȧ���������5�����ѡ���ע�⵽������������������ķ�ʽ��������һ������1�����ѣ�ʣ�µ����������������ڶ�
//������2�����ѣ�ʣ�µ���������������һ����ԣ���N������N�����ѣ�ʣ�µ�����������������дһ�����򣬼��㲢��ʾRabnud��ʿÿ�ܵ�����
//�������ó���һֱ���У�ֱ�������˰������˰����ǳ��Թ���һ�������罻Ȧ�����ȶ���ϵ�ĳ�Ա�����ֵ����ֵ��Լ��150
#define INITIAL 5 //�����ʼ����������Ϊ5
#define DUNBAR_NUMBER 150 //�˰���Ϊ150
int main(void)
{
	int week, total;//����week�����洢�ܣ�����total�����洢���ѵ�����

	for (week = 1, total = INITIAL; total <= DUNBAR_NUMBER; week++) 
	{
		total = (total - week) * 2; 
		printf("��%d��Rabnud��ʿ������������:%d\n", week, total);
	}
	printf("Complete!\n");

	return 0;
}

//Chuckie LuckyӮ����100����Ԫ(˰��)�����ѽ������������8%���˻�����ÿ������һ�죬Chuckieȡ��10����Ԫ����дһ�����򣬼������
//���Chuckie��ȡ���˻���Ǯ
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
//	printf("�ܹ�%d���Chuckie��ȡ���˻���Ǯ\n", --year);
//
//	return 0;
//}

//Daphne��10%�ĵ���ϢͶ����100��Ԫ��Ҳ����˵��ÿ��Ͷ�ʻ����൱��ԭʼͶ�ʵ�10%����Deirdre��5%�ĸ�����ϢͶ����100��Ԫ��Ҳ����˵��
//��Ϣ�ǵ�ǰ����5%������֮ǰ����Ϣ������дһ�����򣬼�����Ҫ������Dirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ���˵�Ͷ�ʶ�
//#define FUND 100
//int main(void)
//{
//	int year;
//	double total_Daphne, total_Deirdre;
//
//	for (year = 1, total_Daphne = FUND, total_Deirdre = FUND; total_Deirdre <= total_Daphne; year++)
//		//year��1��ʼ����ѭ������ʱyear����1�Σ���Ҫ��1����Ǹ���Ҫ������
//	{
//		total_Daphne += FUND * 0.1; //ÿ������10$
//		total_Deirdre += total_Deirdre * 0.05; //ÿ�����ӵ�ǰ����0.05
//	}
//	printf("��%d��Dirdre��Ͷ�ʶ��Daphne\nDirdre��Ͷ�ʶ�:%.4LF$	Daphne��Ͷ�ʶ�:%.4LF$\n", --year, total_Deirdre, total_Daphne);
//	//total_Deirdre = 100*(1+0.05)^n;    total_Daphne = 100+10n
//	return 0;
//}

