#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;

	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (decimal)\n";

	cout << hex;	//����������ʮ��������ʾ
	cout << "waist = " << waist << " (in hex)\n";

	cout << oct;	//���������԰˽�����ʾ
	cout << "inseam = " << inseam << " (in octal)\n";

	return 0;
}

//#define ZERO 0
//
//int main(void)
//{
//	using namespace std;
//
//	short sam = SHRT_MAX;
//	unsigned short sue = sam;
//
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited." << endl
//		<< "Add $1 to each account." << endl << "Now ";
//	sam = sam + 1;
//	sue = sue + 1;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited.\nPoor Sam!" << endl;
//	sam = ZERO;
//	sue = ZERO;
//	cout <<"Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited. " << endl;
//	cout << "Take $1 from each account." << endl << "Now ";
//	sam = sam -1;
//	sue = sue -1;
//	cout << "Sam has " << sam << " dollars and sue has " << sue;
//	cout << " dollars desposited." << endl << "Lucky Sue!" << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int n_int = INT_MAX;
//	short n_short = SHRT_MAX;
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//
//	cout << "int is " << sizeof(int) << " bytes." << endl;
//	cout << "short is " << sizeof n_short << " bytes." << endl;
//	cout << "long is " << sizeof n_long << " bytes." << endl;
//	cout << "long long is " << sizeof n_llong << " bytes." << endl;
//	cout << endl;
//
//	cout << "Maximum values:" << endl;
//	cout << "int: " << n_int << endl;
//	cout << "short: " << n_short << endl;
//	cout << "long: " << n_long << endl;
//	cout << "long long: " << n_llong << endl << endl;
//
//	cout << "Minimum int value = " << INT_MIN << endl;
//	cout << "Bits per byte = " << CHAR_BIT <<endl;
//
//	return 0;
//}

//��дһ������Ҫ���û�����Сʱ���ͷ���������main()�����У���������ֵ���ݸ�һ��void��������������������
//�ĸ�ʽ��ʾ������ֵ:
//	Enter the number of hours: 9
//	Enter the number of minutes: 28
//	Time: 9:28
//void Time(int hours, int minutes);
//
//using namespace std;
//
//int main(void)
//{
//	int hours, minutes;	//Сʱ������
//	cout << "Enter the number of hours: ";
//	cin >> hours;
//	cout << "Enter the number of minutes: ";
//	cin >> minutes;
//	Time(hours, minutes);
//
//	return 0;
//}

//�����û������Сʱ�ͷ�����ʾʱ�亯��
//void Time(int hours, int minutes)
//{
//	cout << "Time: " << hours << ":" << minutes << endl;
//}

//��дһ��������main()����һ���û�����ĺ���(�Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ)���ó�������ĸ�
//ʽҪ���û��������ֵ������ʾ���:
//	Enter the number of light years: 4.2
//	4.2 light years = 265608 astronomical units.
//	���ĵ�λ�Ǵӵ���̫����ƽ������(Լ150000000�����93000000Ӣ��)�������ǹ�һ���ߵľ���(Լ10���ڹ����
//6����Ӣ��)(��̫���⣬����ĺ��Ǵ�Լ�����4.2����)����ʹ��double���ͣ�ת����ʽΪ:
//							1���� = 63040���ĵ�λ
//void Transform(double light);
//
//using namespace std;
//
//int main(void)
//{
//	double light;	//����
//
//	cout << "Enter the number of light years: ";
//	cin >> light;
//	Transform(light);
//
//
//	return 0;
//}
//
////����ת��Ϊ���ĵ�λ����
//void Transform(double light)
//{
//	cout << light << " light years = " << light * 63240 << " astronomical units." << endl;
//}

//��дһ���������е�main()����һ���û�����ĺ������������¶�ֵΪ��������������Ӧ�Ļ����¶�ֵ�����ó���
//������ĸ�ʽҪ���û����������¶�ֵ������ʾ���:
//Please enter a Celsius valus: 20
//20 degrees Celsius is 68 degrees Fahrenheit.
//������ת����ʽ��
//					�����¶� = 1.8 * �����¶� + 32.0
//void tr_tmp(double tmp);
//
//using namespace std;
//
//int main(void)
//{
//	double tmp;	//�����¶�
//
//	cout << "Please enter a Celsius value: ";
//	cin >> tmp;
//	tr_tmp(tmp);
//
//	return 0;
//}
//
////�����¶�ת���ɻ����¶Ⱥ���
//void tr_tmp(double tmp)
//{
//	cout << tmp << " degrees Celsius is " << 1.8 * tmp + 32.0 << " degrees Fahrenheit." << endl;
//}

//��дһ���������û����������䣬Ȼ����ʾ������������ٸ��£�������ʾ��
//Enter your age: 29
//You age in month is 348.
//int main(void)
//{
//	using namespace std;
//
//	int age;	//����
//
//	cout << "Enter your age: ";
//	cin >> age;
//	cout << "You age in month is " << age * 12 << "." <<endl;
//
//	return 0;
//}

//��дһ��C++������ʹ��3���û�����ĺ���(����main())����������������
//There blind mice
//There blind mice
//See how they run
//See how they run
//����һ������Ҫ�������Σ��ú�������ǰ���У���һ������Ҳ���������Σ����������������
//void Print1(void);
//void Print2(void);
//
//using namespace std;
//
//int main(void)
//{
//	Print1();
//	Print1();
//	Print2();
//	Print2();
//
//	return 0;
//}
//
//void Print1(void)
//{
//	cout << "There blid mice" << endl;
//}
//
//void Print2(void)
//{
//	cout << "See how they run" << endl;
//}

//��дһ��C++������Ҫ���û�����һ����longΪ��λ�ľ��룬Ȼ����ת��Ϊ��(һlong����220��)
//int main(void)
//{
//	using namespace std;
//
//	int distance;
//
//	cout << "������һ����longΪ��λ�ľ���: ";
//	cin >> distance;
//	cout << distance << " long�ľ������" << distance * 220 << " ��" << endl;
//
//	return 0;
//}

//��дһ��C++��������ʾ���������͵�ַ
//int main(void)
//{
//	using namespace std;
//
//	cout << "���������" << endl;
//	cout << "��ַ������" << endl;
//
//	return 0;
//}