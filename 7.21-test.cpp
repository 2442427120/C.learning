#include <iostream>
#include <string>
#include <array>

//3.��дһ��Ҫ���û��������ֵĳ���ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۼƺ͡����û�����0ʱ��
//���������
//int main(void)
//{
//	using namespace std;
//
//	int input;
//	long sum = 0;
//	
//	cout << "������һ������: ";
//	cin >> input;
//	while (input != 0)
//	{
//		sum += input;
//
//		cout << "��ǰ������ۼƺ�: " << sum << endl;
//		cout << "������һ������������0ʱֹͣ��: ";
//		cin >> input;
//	}
//
//	return 0;
//}

//2.ʹ��array����(����������)��long double(������long long)���±�д�����嵥5.4��������100����ֵ��
//const int ArSize = 101;
//int main(void)
//{
//	using namespace std;
//
//	array<long double, ArSize> factorial;
//	//0�Ľ׳˺�1�Ľ׳����⴦��
//	factorial[0] = factorial[1] = 1;
//
//	//��2-100�Ľ׳˴���������
//	for (int i = 2; i < ArSize; i++)
//	{
//		factorial[i] = i * factorial[i - 1];
//	}
//	//��ӡ��������
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "! = " << factorial[i] << endl;
//	}
//
//	return 0;
//}

//1.��дһ��Ҫ���û��������������ĳ��򡣸ó��򽫼��㲢�������������֮��(��������������)���������ĺ͡�����
//�����������С�����������磬����û��������2��9�������ָ��2-9֮�����������ĺ�Ϊ44��
//int main(void)
//{
//	using namespace std;
//
//	int sum = 0;
//	int lower_limit, up_limit;
//	cout << "��������������: ";
//	cin >> lower_limit;
//	cout << "��������������: ";
//	cin >> up_limit;
//
//	for (int i = lower_limit; i <= up_limit; i++)
//	{
//		sum += i;
//	}
//
//	cout << "����ֵΪ: " << lower_limit << ", ����ֵΪ: " << up_limit << endl;
//	cout << "���޵����޵���֮�ͣ�" << sum << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	string arr[5];
//
//	return 0;
//}

//const int Cities = 5;
//const int Years = 4;
//
//int main(void)
//{
//	using namespace std;
//
//	const char* cities[Cities] =
//	{
//		"Gribble City",
//		"Gribbletown",
//		"New Gribble",
//		"San Gribble",
//		"Gribble Vista"
//	};
//
//	int maxtemps[Years][Cities] =
//	{
//		{96, 100, 87, 101, 105},
//		{96, 98, 91, 107, 104},
//		{97, 101, 93, 108, 107},
//		{98, 103, 95, 109, 108}
//	};
//
//	cout << "Maximum temperatures for 2008 - 2011\n\n";
//	for (int city = 0; city < Cities; ++city)
//	{
//		cout << cities[city] << ":\t";
//		for (int year = 0; year < Years; ++year)
//		{
//			cout << maxtemps[year][city] << "\t";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}