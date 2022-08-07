#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C++ Primer Plus �����ϰ��7�� C����ʵ��
#define Max 5

double* fill_array(double* begin, double* end);
void show_array(double* begin, double* p);
void revalue(double r, double* begin, double* p);

int main(void)
{
	double properties[Max];
	double factor;

	double* pos = fill_array(properties, properties + Max);
	show_array(properties, pos);

	if (pos)
	{
		printf("\nEnter revalution factor: ");

		scanf("&lf", &factor);

		revalue(factor, properties, pos);
		show_array(properties, pos);
	}

	printf("Done.\n");

	return 0;
}

double* fill_array(double *begin, double *end)
{
	double temp;
	int i;
	double* pt;

	for (i = 0, pt = begin; pt != end; pt++, i++)
	{
		printf("Enter value #%d:", i + 1);
		scanf("%lf", &temp);

		if (temp < 0)
			break;
		else
			*pt = temp;  
	}

	return pt;
}

void show_array(double* begin, double* p)
{
	double* pt;
	int i;

	for (i = 0, pt = begin; pt != p; i++, pt++)
	{
		printf("Propertoes #%d: $", i + 1);
		printf("%lf", *pt);
	}
}

void revalue(double r, double *begin, double* p)
{
	double* pt;
	int i;

	for (i = 0, pt = begin; pt != p; i++, pt++)
		(*pt) *= r;
}

//C++ Primer Plus �����ϰ��6�� C����ʵ��
//#define SIZE 10
//
//int Fill_array(double ar[], int n);
//void Show_array(double ar[], int n);
//void reserve_array(double ar[], int n);
//
//int main(void)
//{
//	double arr[SIZE];
//	int count;
//
//	count = Fill_array(arr, SIZE);
//	printf("������������ݣ�\n");
//	Show_array(arr, count);
//	reserve_array(arr, count);
//	printf("��ת�����������: \n");
//	Show_array(arr, count);
//
//	return 0;
//}
//
//int Fill_array(double ar[], int n)
//{
//
//	int i = 0;
//
//	printf("���������ʮ������:\n");
//	while (n > 0 && scanf("%lf", &ar[i]))	//n > 0������scanfǰ�棬�����Ҫ������һ��ֵ������������Խ��
//	{
//		i++;
//		n--;
//	}
//
//	return i;
//}
//
//void Show_array(double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%lf ", ar[i]);
//	printf("\n");
//}
//
//void reserve_array(double ar[], int n)
//{
//	int i, min, max;
//	double tmp;
//
//	for (i = 0, min = 1, max = n - 2; i < (n / 2 - 1); i++, min++, max--)
//	{
//		tmp = ar[min];
//		ar[min] = ar[max];
//		ar[max] = tmp;
//	}
//}

//C++ Primer Plus �����ϰ��5�� C����ʵ��
//long long factorial(int n);
//
//int main(void)
//{
//	int num;
//	long long value;
//
//	printf("������һ������ֵ��");
//	while (scanf("%d", &num))
//	{
//		value = factorial(num);
//		printf("%d! = %lld\n", num, value);
//		printf("��������һ������������qֹͣ��:");
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//long long factorial(int n)
//{
//	if (0 == n)
//		return 1;
//	return n * factorial(n - 1);
//}
//C++ Primer Plus �����ϰ��4�� C����ʵ��

//long double probability(unsigned number, unsigned picks, unsigned head);
//
//int main(void)
//{
//	double total, choices, head;
//	long double value;
//
//	printf("������������(��һ��Ϊ��һ����������������ڶ�����ΪҪ�ڵ�һ����Ҫѡ��ĺ���ĸ���");
//	printf(",��������Ϊ�ڶ����������ĸ���):\n");
//	while (scanf("%lf%lf%lf", &total, &choices, &head) && choices <= total)
//	{
//		printf("You have one chance in ");
//		value = probability(total, choices, head);
//		printf("%e of winning.\n", value);
//		printf("Next two numbers (q to quit): ");
//	}
//
//	printf("Bye.\n");
//
//	return 0;
//}
//
//long double probability(unsigned number, unsigned picks, unsigned head)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for (n = number, p = picks; p > 0; n--, p--)
//		result = result * n / p;
//	return 1 / (result * head);
//}

//C++ Primer Plus �����ϰ��3�� C����ʵ��
//struct box
//{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float voluem;
//};
//
//void show(struct box b);
//void use_box(struct box* b);
//
//int main(void)
//{
//	struct box b = { "cuboid", 30.0, 40.0, 50.0, 0.0 };
//
//	show(b);
//	use_box(&b);
//
//	return 0;
//}
//
//void show(struct box b)
//{
//	printf("%s\n%f\n%f\n%f\n%f\n", b.maker, b.height, b.width, b.length, b.voluem);
//}
//
//void use_box(struct box *b)
//{
//	b->voluem = b->height * b->width * b->length;
//	printf("%f", b->voluem);
//}

//C++ Primer Plus �����ϰ��2�� C����ʵ��
//#define SIZE 10
//
//int enter(double ar[], int n);
//void show(double ar[], int n);
//void averge(double ar[], int n);
//
//int main(void)
//{
//	double score[SIZE];
//	int count;
//
//	count = enter(score, SIZE);
//	show(score, count);
//	averge(score, count);
//
//	return 0;
//}
//
//int enter(double ar[], int n)
//{
//	int i = 0;
//	printf("������10���߶���ɼ�: ");
//	while (n > 0 && scanf("%lf", &ar[i]))
//	{
//		i++;
//		n--;
//	}
//
//	return i;
//}
//
//void show(double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%lf ", ar[i]);
//	printf("\n");
//}
//
//void averge(double ar[], int n)
//{
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += ar[i];
//	printf("ƽ��ֵ��%lf\n", sum / n);
//}