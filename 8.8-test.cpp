#include <iostream>

//10.���һ����Ϊcalcuate()�ĺ���������������doubleֵ��һ��ָ������ָ�룬����ָ��ĺ�����������double��
//����������һ��doubleֵ��calculate()����������Ҳ��double�������ر�ָ��ĺ���ʹ��calculate()������double
//��������õ���ֵ�����磬����add()�����Ķ������£�
//	double add(double x, double y)
//	{
//		return x + y;
// 
//	}
//�����������еĺ������ý�����calculate()��2.5��10.4���ݸ�add()������������add()�ķ���ֵ��
//	double q = calculate(2.5, 10.4, add);
//���дһ��������������������������������һ����add()���Ƶĺ������ó���ʹ��ѭ�������û��ɶԵ��������֡�
//����ÿ�����֣�����ʹ��calculate()������add()������һ�������ĺ�����������߰�ð�գ����Գ��Դ���һ��ָ
//�����飬���е�ָ��ָ��add()��ʽ�ĺ���������дһ��ѭ����ʹ����Щָ��������calculate()������Щ��������ʾ��
//��������������ָ������ķ�ʽ�����а�������ָ�룺
//	double (*pf[3])(double, double);
//���Բ��������ʼ���﷨��������������Ϊ��ַ����ʼ�����������顣

//ͨ������ָ����������������ú���
using namespace std;

double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
double calculate(double x, double y, double (*pf[4])(double, double), int i);

int main(void)
{
	double user1, user2;
	double value;
	double(*pa[4])(double, double) = { sum, sub, mul, div };

	cout << "Please enter two integer:";
	while (cin >> user1 >> user2)
	{
		for (int i = 0; i < 4; i++)
		{
			value = calculate(user1, user2, pa, i);	//ָ������pa������ǵ�ַ
			cout << "function #" << i + 1 << endl;
			cout << value << endl;
		}

		cout << "Please enter two integer again(enter q to quit): ";
	}

	return 0;
}

double sum(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mul(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double (*pf[4])(double, double), int i)
{
	return (*pf[i])(x, y);  //�ȼ���pf[i](x, y);
}


//using namespace std;
//
//double add(double x, double y);
//double calculate(double x, double y, double (*pf)(double, double));
//
//int main(void)
//{
//	double user1, user2;
//	double sum;
//
//	cout << "Please enter two integer:\n";
//	while (cin >> user1 >> user2)
//	{
//		sum = calculate(user1, user2, add);
//		cout << "The sum of " << user1 << " and " << user2 << " = " << sum << endl;
//		cout << "Please enter two integer again(enter q to quit): ";
//	}
//
//	return 0;
//}
//
//double add(double x, double y)
//{
//	return x + y;
//}
//
//double calculate(double x, double y, double (*pf)(double, double))
//{
//	return (*pf)(x, y);
//}