#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8������
//#define SIZE 8
//int main(void)
//{
//	int i, j = 0;
//	int arr[SIZE] = { 0 };
//
//	printf("������8������>\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("�������%d������: ", i+1);
//		scanf("%d", &arr[i]);
//	}
//
//	for (j = 0; j < i; j++) //i����һ��ѭ�����޺�ֵΪ8
//	{
//		printf("%d ", arr[i - j - 1]); //��ӡ����±�Ϊ7�Ŀ�ʼ�����ӡ
//	}
//	printf("\nDone!\n");
//
//	return 0;
//}

//��дһ������Ҫ���û�����һ������������һ��������������������޵����޷�Χ������������ƽ���ͣ�����ʾ��������
//Ȼ����������ʾ�û��������޺���������������ʾ�����ֱ���û�����������������ڻ�С����������Ϊֹ��
//int main(void)
//{
//	int lower, upper, tmp, squar_sum;//lower��upper�ֱ�洢�û������������,tmpΪ��ʱ������squar_sum�洢ƽ����
//
//	printf("Enter lower and upper integer limits:");
//	while (scanf("%d%d", &lower, &upper) && (upper - lower)) //&&���߱��ʽֵ��Ϊ��ʱѭ���Ž���
//	//�����û��Ĺ淶���� - ֻ������������������ʹ����������ȥ����������ֻ�����ֵ��ȫ���ᵼ�³������
//	//���û�����������������ڻ�С������������upper - lowerΪ����0��С��0���������ʽֵΪ�٣�ʹѭ������ 
//	{
//		for (tmp = lower, squar_sum = 0; tmp <= upper;tmp++)
//		//�������޵����޷�Χ������������ƽ����
//		//ƽ���͵ļ�����������ֵΪ��ʼֵ���㣬ֱ������ֵ++����������ֵʱ��ѭ��������Ϊ�˷�ֹ����ֵ�ı䣬��tmp�������洢����ֵ
//		{
//			squar_sum += (tmp * tmp); 
//		}
//
//		printf("The sums of the squars from %d to %d is %d\n", lower * lower , upper * upper, squar_sum);
//		printf("Enter next set of limits:");
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//float Caculate(const float a, const float b); //�������� - ������float���͵Ĳ���������ֵΪfloat���͵ĺ���
////�޸�һ�³���ʹ��һ���������ؼ�����
//int main()
//{
//	float a, b, sum; //sum�������պ�������ֵ
//
//	printf("����������������:");
//	while (scanf("%f%f", &a, &b))
//	{
//		sum = Caculate(a, b); 
//		printf("%.4f\n", sum);
//		printf("����������������(���������ʱֹͣ):");
//	}
//	printf("Done!\n");
//
//	return 0;
//}
//
//float Caculate(const float a, const float b)
//{
//	return (a - b) / (a * b); //����a��b�Ĳ��a��b�ĳ˻�
//}
//��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
//���û����������֮ǰ������Ӧѭ�����������ÿ��ֵ
//int main(void)
//{
//	float a, b;//����a��b���洢�û��������������ֵ
//
//	printf("����������������:");
//	while (scanf("%f%f", &a, &b) == 2) 
//	//scanf����ֵΪ2��ʾ�û��������������֣�ѭ�����С����û�����һ������һ��������ʱscanf����ֵΪ1
//	//�û���������������ʱscanf�ķ���ֵΪ0����������ѭ����
//	{
//		printf("sum = %.4f\n", (a-b)/(a * b));
//		printf("����������������(���������ʱѭ��ֹͣ):");
//	}
//	printf("Done!\n");
//
//	return 0;
//}

//��дһ������ѵ��ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
//#define SIZE 20 //������Ĵ�С��Ϊ20
//int main(void)
//{
//	int i, sz;
//	char arr[SIZE] = { 0 };
//	printf("������һ��Ӣ�ĵ��ʣ�");
//	scanf("%s", arr);
//	/*sz = sizeof(arr) / sizeof(arr[0]);*/
//	sz = strlen(arr);//strlen�����ַ�����ĳ���,��������/0��
//	printf("%d\n", sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[sz-1-i]);//�����һ����ĸ��ǰ��ӡ
//	}
//	printf("\nComplete!\n");
//	return 0;
//}

//��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û��������������
//int main(void)
//{
//	int upper, lower, integer; //upper�����洢�û���������ޣ�lower�洢����
//
//	printf("�������������:");
//	scanf("%d", &upper);
//	printf("�������������:");
//	scanf("%d", &lower);
//
//	printf("����  ƽ��    ����\n");
//	for (integer = lower; integer <= upper; integer++) //integer������ֵ��ʼ����ֵ��������ֵ����
//	{
//			printf("%d%7d%9d\n", integer, integer*integer, integer*integer*integer);
//	}
//	return 0;
//}

//��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//int main()
//{
//	int i, j, asc, des, count;
//	char input;//input�洢�û�����Ĵ�д��ĸ
//	printf("������һ����д��ĸ:");
//	scanf("%c", &input);
//	for (i = 0; i <= (int)input - 65; i++) //���û��������ĸ��A��ASCII�룬�õ���Ҫ��ӡ���ܲ���
//	{
//		//��ӡ�ո�
//		for (j = 0; j < (int)input - 65 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//��ӡ����
//		for (asc = 0, count = 65; asc <= i; asc++, count++) //ÿ��ѭ����ʼ��count�ĳ�ʼֵ����ΪA��ASCII��ֵ
//		{
//			printf("%c", count);
//		}
//
//		//��ӡ����
//		for (des = 0,  --count; des < i; des++, count--) //�������ӡ���count��ֵ�����������ӡ��ֵ��1,�����Ҫ--count��������ӡ��CֵΪ67��count������ѭ�����ֵ��68��
//		{
//			printf("%c", count - 1);//�ӱ��������C����ֵ��һ����ʼ�����ӡ(��C�������ֵ��67����ô����ʹ�66��ʼ��ӡ)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char input = 'E';
//	int count = 0;
//	count = (int)input - 1;
//	printf("%c\n", count);
//	return 0;
//}
//ʹ��Ƕ��ѭ���������µĸ�ʽ��ӡ��ĸ
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU
//int main()
//{
//	int i, j;
//	int count = 65; //����count������65��ʼ,��A����count��
//
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++, count++) //ÿѭ��һ�Σ�count++����count�洢��һ����д��ĸ
//		{
//			printf("%c", count);
//		}
//		printf("\n");
//	}
//	printf("Complete!\n");
//
//	return 0;
//}