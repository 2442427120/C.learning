#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ���������԰�����洢��char���͵������У�����ÿ���ַ�������255.
//#define SIZE 255
//int main(void)
//{
//	int i, j;
//	char ch;
//	char arr[SIZE] = { 0 };
//
//	printf("������һ������:");
//	for (i = 0, ch = 0; i < SIZE && ch != '\n'; i++) //ѭ�������ַ��������У�����ʱ\n��������������10���ַ���arr[11]�����\n
//	{
//		scanf("%c", &ch);
//		arr[i] = ch;
//	}
//
//	for (j = --i; j >= 0; j--) //j = --1��ʾ����Ԫ�ص�����ĩβ��ʼ
//	{
//		printf("%c", arr[j-1]); //���һ��Ԫ��arr[j]Ϊ\n,arr[j-1]��ʾ��\nǰһλ��ʼ��ӡ
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%c", arr);
//	return 0;
//}

//��дһ�����򣬴�����������8��Ԫ�ص�double�������飬ʹ��ѭ����ʾ�û�Ϊ��һ����������8��ֵ���ڶ�������Ԫ�ص�ֵ��Ϊ��һ������
//��ӦԪ�ص��ۻ�֮�͡����磬�ڶ�������ĵ�4��Ԫ�ص�ֵ�ǵ�һ������ǰ4��Ԫ��֮�ͣ��ڶ�������ĵ�5��Ԫ�ص�ֵ�ǵ�һ������ǰ5��Ԫ
//��֮��(��Ƕ��ѭ��������ɣ��������õڶ�������ĵ�5��Ԫ�صڶ�������ĵ�4��Ԫ�����һ������ĵ�5��Ԫ��֮�ͣ�ֻ��һ��ѭ������
//������񣬲���Ҫʹ��Ƕ��ѭ��)�����ʹ��ѭ����ʾ������������ݣ���һ��������ʾ��һ�У��ڶ���������ʾ�ڵ�һ���������һ�У�
//����ÿ��Ԫ�ض����һ�������Ԫ�����Ӧ

//int main(void)
//{
//	int i, j, n;
//	double sum = 0.0;
//	double arr1[8] = { 0.0 };
//	double arr2[8] = { 0.0 };
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("�������%d��Ԫ�ص�ֵ:", i+1);
//		scanf("%LF", &arr1[i]);//��arr1�����8��Ԫ�����θ�ֵ
//		sum += arr1[i]; //ֱ������arr1��ǰn-1��Ԫ�ص�ֵ�ۼ��ټ���arr1�ĵ�n��Ԫ�ص�ֵ�����õ��Ľ������sum
//		/*for (j = 0, sum = 0.0; j <= i; j++) //ʹ��Ƕ��ѭ����ÿ�μ��㶼��arr1�ĵ�һ��Ԫ���ۼӵ�arr1���һ��Ԫ��
//		{
//			sum += arr1[j]; //��arr1�����n��Ԫ�ص�ֵ�ۼӸ���sum
//		}*/
//
//		/*j--;*/
//		/*arr2[j] = sum;*/ //ʹ��Ƕ��ѭ��ʱ��sum��arr2��ֵ
//
//		arr2[i] = sum; //��ʹ��Ƕ��ѭ���ĸ�ֵ
//		/*printf("%lf\n", arr2[j]);*/
//	}
//
//	for (n = 0; n < 8; n++)
//	{
//		printf("%-14.4LF ", arr1[n]);
//	}
//	printf("\n");
//	for (n = 0; n < 8; n++)
//	{
//		printf("%-14.4LF ", arr2[n]);
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
//ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ
//int main(void)
//{
//	int i, tmp; 
//	int n = 0;
//	int arr[8] = { 0 };
//
//	for (i = 0, tmp = 1; i < 8; i++)
//	{
//		tmp = 2 * tmp;//��һ��Ϊ��һ�ε�2��
//		arr[i] = tmp;
//	}
//	do
//	{
//		printf("%d ", arr[n]);//�ȴ�ӡ��1��Ԫ�ص�ֵ
//	} while (++n < 8); //��++�ٱȽϣ���1��7����ӡ7�Σ���������һ���ܹ���ӡ8��
//	printf("\nDone!\n");
//
//	return 0;
//}

//��дһ�����򣬼������������������е��ܺͣ�ֱ������ĳ����
//1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
//1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
//double Add_sequence(double mol, double des, int n);
//double Mix_sequence(double mol, double des, int n);
//int main(void)
//{
//	int n; // n�����洢�û������ĵ��Ĵ�ͣ��
//	double add_seq, mix_seq; //add_seq�洢��һ�����еĺͣ�mix_seq�洢�ڶ������еĺ�
//	double mol = 1.0; //�洢����
//	double des = 0.0; //�洢��ĸ
//
//	printf("������Ҫ����Ĵ���:");
//	while (scanf("%d", &n) == 1 && n > 0)
//	{
//		add_seq = Add_sequence(mol, des, n);//���һ�����еĺ͵ĺ���
//		mix_seq = Mix_sequence(mol, des, n);//��ڶ������еĺ͵ĺ���
//		printf("add_seq = %.12LF\nmix_seq = %.12LF\n", add_seq, mix_seq);
//		printf("���������Ĵ���(����0����ʱֹͣ):");
//	}
//	printf("Done!\n");
//	return 0;
//}
//
//double Add_sequence(double mol, double des, int n)
//{
//	int i;
//	double sum;
//
//	for (i = 0, des = 1.0, sum = 0.0; i < n; i++, des++) //���Ӳ��䣬��ĸÿ�α���һ�δ�1
//	{
//		sum += (mol / des);
//	}
//
//	return sum;
//}
//
//double Mix_sequence(double mol, double des, int n)
//{
//	double sum;
//	int i, tmp;
//
//	for (i = 0, des = 1.0, tmp = -1, sum = 0; i < n; i++, des++) 
//		//��ĸΪ����ʱΪ����Ϊż��ʱΪ������tmp���洢���ŵı仯������tmp��des��˵õ���ĸ��ֵ
//		//-1*-1 = 1�� -1*-1*-1 = -1�� -1*-1*-1*-1 = 1��tmpÿ�ζ�Ϊ��һ�ε��෴��
//	{
//		tmp = -tmp;
//		sum += (mol / (des * tmp));
//	}
//
//	return sum;
//}
//int main()
//{
//	float a = 1.0;
//
//	printf("%.2f", ++a);
//	return 0;
//}