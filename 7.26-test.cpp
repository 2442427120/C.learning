#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <array>

//2.��дһ��������ཫ10��donationֵ����double������(�����Ը�⣬Ҳ����ʹ��ģ����array)����������������
//ʱ���������룬��������Щ���ֵ�ƽ��ֵ�Լ��������ж��ٸ����ִ���ƽ��ֵ��
//int main(void)
//{
//	using namespace std;
//
//	int i = 0;
//	double sum = 0.0;	//�����Ǹ������ܺ�
//	int count = 0;
//	int large_avg = 0;
//	double average = 0.0;
//	array<double, 10> donation;
//
//	cout << "Please enter 10 integer:\n";
//
//	while (cin >> donation[i] && i < 10)
//	{
//		sum += donation[i];
//		++count;
//		++i;
//	}
//
//	average = double(sum / count);
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (donation[i] > average)
//		{
//			++large_avg;
//		}
//	}
//
//	cout << "average = " << average << endl;
//	cout << large_avg << " more than average" << endl;
//
//	return 0;
//}

//1.��дһ�����򣬶�ȡ�������룬ֱ������@����Ϊֹ������������(���ֳ���)��ͬʱ����д�ַ�ת��ΪСд����Сд
//�ַ�ת��Ϊ��д
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Please enter an character(enter @ to quit):\n";
//
//	while ((cin >> ch) && ch != '@')	//����@ʱѭ������
//	{
//		if (isupper(ch))	//isupper - �жϲ����Ƿ��Ǵ�д��ĸ�����򷵻�true
//		{
//			ch = tolower(ch);	//tolower - ����д��ĸת����Сд��ĸ
//			cout << ch << endl;
//		}
//		else
//		{
//			ch = toupper(ch);	//toupper - ��Сд��ĸת���ɴ�д��ĸ
//			cout << ch << endl;
//		}
//
//		cout << "Please enter an character(enter @ to quit):\n";
//	}
//
//	cout << "Done.\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	while (cin >> ch)
//	{
//		switch (ch)
//		{
//		case 'a':
//			cout << "You input a\n";
//			break;
//		case 'b':
//			cout << "You input b\n";
//			break;
//		case 'c':
//			cout << "You input c\n";
//			break;
//		default:
//			cout << "Randon.\n";
//		}
//	}
//
//	return 0;
//}

//��ȡ�ı��ļ�
//using namespace std;
//
//const int Size = 60;
//
//int main(void)
//{
//	char filename[Size];
//	ifstream inFile;
//
//	cout << "Enter name of data file: ";
//	cin.getline(filename, Size);
//
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good())		//���ʹ�õ���windows�Դ��ļ��±����ǵ����������������ݺ�س�һ����
//								//�����ļ���������������һ�����ݡ�
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unkonwn reason.\n";
//
//	if (0 == count)
//		cout << "No data processed.\n";
//	else
//	{
//		cout << "Items read: " << count << endl;
//		cout << "Sum: " << sum << endl;
//		cout << "Average: " << sum / count << endl;
//	}
//
//	inFile.close();
//
//	return 0;
//}

//д�뵽�ı��ļ���
//using namespace std;
//
//int main(void)
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	//����Ļ������ʾ
//	cout << fixed;	//����ͨ��ʽ������ǿ�ѧ������
//	cout.precision(2);	//����2λС���㾫�ȣ��������Ǽ���С�������ͱ�����λ
//	cout.setf(ios_base::showpoint);	//ǿ����ʾ������С������0
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//	//д���ļ���carinfo.txt��
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();
//
//	return 0;
//}