#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

long long  function(long long n);

int main(void)
{
	long long n = 20;

	long long sum = function(n);

	cout << "sum = " << sum << endl;

	return 0;
}

long long function(long long n)
{
	
	if (n == 1)
		return 1;
	else
		return n * function(n - 1);
}

//������array����
//using namespace std;
//
//const int Seasons = 4;
//const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
//
//void fill(array<double, Seasons>* pa);
//void show(array<double, Seasons> da);
//
//int main(void)
//{
//	array<double, Seasons> expenses;
//
//	fill(&expenses);
//	show(expenses);
//
//	return 0;
//}
//
//void fill(array<double, Seasons>* pa)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << "Enter " << Snames[i] << " expenses";
//		cin >> (* pa)[i];	//pa[i];
//	}
//}
//
//void show(array<double, Seasons> da)
//{
//	double total = 0.0;
//	cout << "\nEXPENSES\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Snames[i] << ": $" << da[i] << endl;
//		total += da[i];
//	}
//
//	cout << "Total Expenses: $" << total << endl;
//}

//ģ����array����������� - array������д�������Ϊʵ�δ���(���������뺯���е�ַ��ͬ)��
//��������󴫲��Ǵ�����Ԫ�ص�ַ(���������뺯���е�ַ��ͬ)��
//using namespace std;
//
//void fill(array<int, 4> count);
//void show(array<int, 4> da);
//
//int main(void)
//{
//	array<int, 4> arr;
//	/*int arr[4];*/
//	cout << "arr address = " << &arr << endl;
//	fill(arr);
//	show(arr);
//
//	cout << endl;
//
//	return 0;
//}
//
//void fill(array<int, 4> count)
//{
//	cout << "count address = " << &count << endl;
//
//	for (int i = 0; i < 4; i++)
//		cin >> count[i];
//}
//
//void show(array<int, 4> da)
//{
//	for (int i = 0; i < 4; i++)
//		cout << da[i] << " ";
//}

//����һ��string�������飬���������鴫�ݸ�һ����������ʾ������
//using namespace std;
//
//const int Size = 5;
//
//void display(string sa[], int n);
//
//int main(void)
//{
//	string list[Size];
//	cout << "Enter your " << Size << " favorite stronomical sights:\n";
//
//	for (int i = 0; i < Size; i++)
//	{
//		cout << i + 1 << ": ";
//		getline(cin, list[i]);
//	}
//
//	cout << "Your list:\n";
//	display(list, Size);
//}
//
//void display(string sa[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << i + 1 << ": " << sa[i] << endl;
//}

//���ݽṹ��ĵ�ַ
//using namespace std;
//
//struct polar
//{
//	double distance;
//	double angle;
//};
//
//struct rect
//{
//	double x;
//	double y;
//};
//
//void rect_to_polar(const rect* pxy, polar* pda);
//void show_polar(const polar* pda);
//
//int main(void)
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		cout << "Next two number (q to quit): ";
//	}
//
//	cout << "Done\n";
//
//	return 0;
//}
//
//void rect_to_polar(const rect* pxy, polar* pda)
//{
//	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//
//void show_polar(const polar* pda)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << pda->distance << ", angle = " << pda->angle * Rad_to_deg << endl;
//}