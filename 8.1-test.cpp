#include <iostream>

using namespace std;

void cheers(int n);
//double cube(double x);
double cube(double);	//�����ڴ��ݲ���ʱ���Բ�����������

int main(void)
{
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;

	double voluem = cube(side);
	cout << "A " << side << "-foot cube has a voluem of " << voluem << " cubic feet.\n";

	cheers(cube(2));

	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}

//���������������úͶ���
//void simple(void);
//
//int main(void)
//{
//	using namespace std;
//
//	cout << "main() will call the simple() function:\n";
//	simple();
//
//	return 0;
//}
//
//void simple(void)
//{
//	using namespace std;
//
//	cout << "I'm but a simple function.\n";
//}