#include <iostream>

//2.��дһ������Ҫ���û��������10���߶���ɼ��������ɼ��洢��һ�������С����������û�����������룬��
//��һ������ʾ���гɼ���Ȼ�󱨸�ƽ���ɼ�����ʹ��3�����鴦�������ֱ�������룬��ʾ�ͼ���ƽ���ɼ�
using namespace std;

const int Size = 10;

int main(void)
{
	double score[Size];

	for (int i = 0; i < Size; i++)
	{
		
	}

	return 0;
}

//1.��дһ�����򣬲���Ҫ���û�������������ֱ�����е�һ��Ϊ0������ÿ������������ʹ��һ���������������ǵ�
//����ƽ����������������ظ�main()�������߽�������������ƽ����ָ���ǵ���ƽ��ֵ�ĵ��������㹫ʽ���£�
//						����ƽ���� = 2.0 * x * y / (x + y)
//using namespace std;
//
//double harmonic_mean(double x, double y);
//
//int main(void)
//{
//	double user1, user2, value;
//
//	cout << "Please enter two integer: ";
//	while (cin >> user1 >> user2 && user1 != 0 && user2 != 0)
//	{
//		value = harmonic_mean(user1, user2);
//		cout << "Harmonic mean = " << value << endl;
//		cout << "Please enter next two integer(enter 0 to quit): ";
//	}
//
//	cout << "Done.\n";
//
//	return 0;
//}
//
//double harmonic_mean(double x, double y)
//{
//	return (2.0 * x * y / (x + y));
//}

//����̽�ֺ���ָ��
//using namespace std;
//
//const double* f1(const double* ar, int n);
//const double* f2(const double ar[], int n);
//const double* f3(const double ar[], int n);
//
//int main(void)
//{
//	double av[3] = {1112.3, 1542.6, 2227.9};
//
//	//pointer to a function
//	const double* (*p1)(const double*, int) = f1;
//	auto p2 = f2;		//�ȼ���const double* (*p2)(const double*, int) = f2;
//
//	cout << "Using pointers to functions:\n";
//	cout << "Address           Value\n";
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
//
//	//pa an array of pointers
//	//auto doesn't work with list initialization
//	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };
//	auto pb = pa;		//�ȼ���const double* (*pb[3])(const double*, int) = pa;
//	cout << "\nUsing an array of pointers to functions:\n";
//	cout << "Address           Value\n";
//	for (int i = 0; i < 3; i++)
//		cout << pa[i](av, 3) << ": " << * pa[i](av, 3) << endl;
//	for (int i = 0; i < 3; i++)
//		cout << pb[i](av, 3) << ": " << * pb[i](av, 3) << endl;
//	//cout << "----------------------------------------\n";
//	//cout << f1 << endl << f2 << endl << f3 << endl;
//	//cout << pa << endl << pb << endl;
//	//cout << "----------------------------------------\n";
//	//cout << &av[0] << endl << &av[1] << endl << &av[2] << endl;
//
//	cout << "\nUsing pointer to a pointer to a function:\n";
//	cout << "Address           Value\n";
//	auto pc = &pa;		//�ȼ���const double* (*(*pc)[3])(const double*, int) = &pa;
//	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
//	const double* (*(*pd)[3])(const double*, int) = &pa;
//	const double* pdb = (*pd)[1](av, 3);
//	cout << pdb << ": " << *pdb << endl;
//	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
//	//�ȼ��������д����cout << (*pd)[2](av, 3) << ": " << *(*pd)[2](av, 3) << endl;
//
//	return 0;
//}
//
//const double* f1(const double* ar, int n)
//{
//	return ar;
//}
//
//const double* f2(const double ar[], int n)
//{
//	return ar + 1;
//}
//
//const double* f3(const double ar[], int n)
//{
//	return ar + 2;
//}

//��ʾʹ�ú���ָ�롣�����ε���estimate()������һ�δ���betsy()�����ĵ�ַ����һ���򴫵�pam()�����ĵ�ַ����
//��һ������£�estimate()ʹ��betsy()���������Сʱ�����ڵڶ�������£�estimate()ʹ��pam()���м���
//using namespace std;
//
//double betsy(int lns);
//double pam(int lns);
//void estimate(int lines, double (*pf)(int));
//
//int main(void)
//{
//	int code;
//
//	cout << "How many lines of code do you need? ";
//	cin >> code;
//
//	cout << "Here's Betsy's estimate:\n";
//	estimate(code, betsy);
//	cout << "Here's Pam's estimate:\n";
//	estimate(code, pam);
//}
//
//double betsy(int lns)
//{
//	return 0.05 * lns;
//}
//
//double pam(int lns)
//{
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double (*pf)(int))
//{
//	cout << lines << " lines will take ";
//	cout << (*pf)(lines) << " hours\n";
//}

//��������ݹ���õĵݹ�
//subdivide()����ʹ��һ���ַ��������ַ���������Ϊ|�ַ��⣬����ȫ��Ϊ�ո�main����ʹ��ѭ������subdivide()
//����6�Σ�ÿ�μ۸�ݹ��ż�1������ӡ�õ����ַ�����������ÿ�������ʾһ��ݹ顣
//using namespace std;
//
//const int Len = 66;
//const int Divs = 6;
//
//void subdivide(char ar[], int low, int high, int level);
//
//int main(void)
//{
//	char ruler[Len];
//	int i;
//
//	for (i = 1; i < Len - 2; i++)
//		ruler[i] = ' ';
//
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//
//	for (i = 1; i <= Divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)	//��ʣ�����������Ϊ�հ�
//			ruler[j] = ' ';
//	}
//
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//		return;
//
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}

//��ʾ�ݹ����Ϊ
//using namespace std;
//
//void countdown(int n);
//
//int main(void)
//{
//	countdown(4);
//
//	return 0;
//}
//
//void countdown(int n)
//{
//	cout << "Counting down ... " << n << "(n at address: " << &n << ")" << endl;		//���1
//
//	if (n > 0)
//		countdown(n - 1);
//
//	cout << n << ": Kaboom!" << "(n ar address: " << &n << ")" << endl;		//���2
//}