#include <iostream>
#include <string>

//6.��ɱ����ϰ5������һ��ʹ��һ����ά�������洢����----3����ÿ���µ������������򽫱���ÿ���������Լ�����
//������������
const int Years_month = 12;

int main(void)
{
	using namespace std;

	int quantity[3][12];
	int sum = 0;

	string month[Years_month] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	cout << "������3����ÿ���µ�������" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "��" << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << month[j] << ":";
			cin >> quantity[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "��" << endl;
		for (int j = 0; j < 12; j++)
		{
			/*if (6 == j)
			{
				cout << endl;

			}*/
			cout << month[j] << ":";
			cout << quantity[i][j];
			cout << "\t";
		}

		cout << endl;
	}

	return 0;
}

//5.����Ҫ����C++ For Foolsһ�顣���дһ����������ȫ����ÿ���µ���������ͼ�����������������۶������
//ͨ��ѭ����ʹ�ó�ʼ��Ϊ�·��ַ�����char*����(��string��������)���½�����ʾ��������������ݴ�����һ��int
//�����С�Ȼ�󣬳�����������и�Ԫ�ص��ܺͣ���������һ������������
//const int Years_month = 12;
//
//int main(void)
//{
//	using namespace std;
//
//	int quantity[Years_month];
//	int sum = 0;
//
//	string month[Years_month] =
//	{
//		"January: ",
//		"February: ",
//		"March: ",
//		"April: ",
//		"May: ",
//		"June: ",
//		"July: ",
//		"August: ",
//		"September: ",
//		"October: ",
//		"November: ",
//		"December: "
//	};
//	/*const char* month[Years_month] =
//	{
//		"January: ",
//		"February: ",
//		"March: ",
//		"April: ",
//		"May: ",
//		"June: ",
//		"July: ",
//		"August: ",
//		"September: ",
//		"October: ",
//		"November: ",
//		"December: "
//	};*/
//
//	cout << "������ÿ���·ݵ�������" << endl;
//	for (int i = 0; i < Years_month; ++i)
//	{
//		cout << month[i];
//		cin >> quantity[i];
//		sum += quantity[i];
//	}
//
//	cout << "ȫ�����������" << sum << endl;
//
//	return 0;
//}

//4.Daphne��10%�ĵ���Ͷ����100��Ԫ��Ҳ����˵��ÿһ���������Ͷ�ʶ��10%����ÿ��10��Ԫ��
//��Ϣ = 0.10 * ԭʼ���
//��Cleo��5%�ĸ���Ͷ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ���(������õ���Ϣ)��5%;
//��Ϣ = 0.05 * ��ǰ���
//Cleo�ڵ�һ��Ͷ��100��Ԫ��ӯ����5%----�õ�105��Ԫ����һ���ӯ����105��Ԫ��5%----��5.2��Ԫ���������ơ���
//��дһ�����򣬼���������Celo��Ͷ�ʼ�ֵ���ܳ���Dapha��Ͷ�ʼ�ֵ������ʾ��ʱ�����˵�Ͷ�ʼ�ֵ��
//const int Principal = 100;
//const double Daphna = 0.1;
//const double Cleo = 0.05;
//
//int main(void)
//{
//	using namespace std;
//
//	int i;
//	double daphna_funds, cleo_funds;
//	daphna_funds = cleo_funds = Principal;
//
//	for (i = 0; daphna_funds >= cleo_funds; ++i)
//	{
//		daphna_funds += Principal * Daphna;
//		cleo_funds += cleo_funds * Cleo;
//	}
//
//	cout << "��" << i << "��" << "Cleo��Ͷ�ʼ�ֵ���ܳ���Daphna" << endl;
//	cout << "Daphna�ʽ�: $" << daphna_funds << endl;
//	cout << "Cleo�ʽ�: $" << cleo_funds << endl;
//
//	return 0;
//}