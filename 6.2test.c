#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//#define FOOT 30.48
//#define INCH 2.54
//int main(void)
//{
//	int feet;
//	double height, inches;
//	printf("Enter a height in centimeters:");
//	scanf("%LF", &height);
//
//	while (height)
//	{
//
//		feet = (int)(height / FOOT); //��double����ת��Ϊint���ͣ�Ҫ����Բ�� 
//		//Բ�� - �����������㣬��Ҫ����һ���ص����������Բ���������Բ����õ���ֵ������ʵ��ֵ��
//		inches = (height - feet * FOOT) / INCH;
//		printf("%.1LF cm = %d feet, %.1LF inches\n", height, feet, inches);
//		printf("Enter a height in centimeters (<0 to quit):");
//		scanf("%LF", &height);
//	}
//	printf("bye.\n");
//	return 0;
//}
/*int main(void)
{
	printf("%d\n", 5 > 3);
	return 0;  
}      */                                                                                                                                                                                                                                                                                                                                                                                                         
//#define SQUARES 64
//int main(void )
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("squar     grains      total      fraction of\n");                                                                                                    
//	printf("          added       grains     world total\n");
//
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
//	while (count < SQUARES)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
//	}
//	printf("That's all.\n");
//
//	return 0;
//}
//#define FOOT 30.48
//#define INCH 2.54
//int main()
//{
//	float feet = 0.0;
//	float inches = 0.0;
//	float height = 0.0;
//	printf("Enter a height in centimeters:");
//	scanf("%f", &height);
//	while (height)
//	{
//		height = 
//		feet = height / FOOT;
//		printf("%f\n", feet);
//		inches = (height - (FOOT * feet)) / INCH;
//		printf("%f\n", inches);
//
//		printf("%.1f cm %.0f feet, %.1f inches\n", height, feet, inches);
//		printf("Enter a height in centimeters:(<=0 to quit)");
//		scanf("%f", &height);
//	}
//	printf("bye");
//	return 0;
//}
//int main()
//{
//	float a = 1.0;
//	float b = 3.0;
//	printf("%.1f", a/b);
//	return 0;
//}
//#define FOOT 30.48f
//#define INCH 2.54f
//int main()
//{
//	float height = 1.0;
//	printf("Enter a height in centimeters:");
//	scanf("%f", &height);
//	printf("%.1f cm = %d feet, %.1f inches", height, height / FOOT, height % INCH);
//
//	while (height)
//	{
//		height = UserInfo();
//	}
//	printf("bye\n");
//	return 0;
//}
//
//float UserInfo(void)
//{
//	folat height = 0.0;
//	printf("Enter a height in centimeters (<0 to quit):");
//	scanf("%lf", &height);
//	printf("%.1f cm = %.0f feet, %.1f inches", height, height / FOOT, height % INCH);
//	return height;
//}
//#define WEEKEND 7
//int main()
//{
//	int day = 1;
//	while (day)
//	{
//		printf("������һ���������������ֵʱֹͣѭ��:>");
//		scanf("%d", &day);
//
//		printf("%d days are %d weeks, %d days\n", day, day/WEEKEND, day%WEEKEND);
//	}
//
//	return 0;
//}
//int main()
//{
//	int input = 0;//���ڴ洢�û�����������ĳ���
//	int count = 0;
//	printf("������һ������:>");
//	scanf("%d", &input);
//
//	//��ӡ�Ӹ������û�������������ȸ�����10������
//	while (count <= 10)
//	{
//
//		printf("%d ", input);
//		count++;
//		input++;
//	}
//
//	return 0;
//}
//#define HOUR 60.00
//int main()
//{
//	int min = 1;
//
//	while (min > 0)
//	{
//		printf("�����������,����ֵС�ڵ���0ʱֹͣ:>");
//		scanf("%d", &min);
//		printf("%d���� = %.2fСʱ, %d���� = %d����\n", min, min/HOUR, min, min);
//
//	}
//
//	return 0;
//}