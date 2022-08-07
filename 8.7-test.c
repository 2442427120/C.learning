#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C++ Primer Plus 编程练习第7题 C语言实现
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

//C++ Primer Plus 编程练习第6题 C语言实现
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
//	printf("填充后数组的内容：\n");
//	Show_array(arr, count);
//	reserve_array(arr, count);
//	printf("反转后的数组内容: \n");
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
//	printf("请输入最多十个整数:\n");
//	while (n > 0 && scanf("%lf", &ar[i]))	//n > 0必须在scanf前面，否则会要多输入一个值，将导致数组越界
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

//C++ Primer Plus 编程练习第5题 C语言实现
//long long factorial(int n);
//
//int main(void)
//{
//	int num;
//	long long value;
//
//	printf("请输入一个整数值：");
//	while (scanf("%d", &num))
//	{
//		value = factorial(num);
//		printf("%d! = %lld\n", num, value);
//		printf("请在输入一个整数（输入q停止）:");
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
//C++ Primer Plus 编程练习第4题 C语言实现

//long double probability(unsigned number, unsigned picks, unsigned head);
//
//int main(void)
//{
//	double total, choices, head;
//	long double value;
//
//	printf("请输入三个数(第一个为第一区间的域号码个数，第二个数为要在第一区间要选择的号码的个数");
//	printf(",第三个数为第二区间域号码的个数):\n");
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

//C++ Primer Plus 编程练习第3题 C语言实现
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

//C++ Primer Plus 编程练习第2题 C语言实现
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
//	printf("请输入10个高尔夫成绩: ");
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
//	printf("平均值：%lf\n", sum / n);
//}