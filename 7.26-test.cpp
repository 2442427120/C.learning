#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <array>

//2.编写一个程序，最多将10个donation值读入double数组中(如果您愿意，也可以使用模板类array)。程序遇到非数字
//时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
//int main(void)
//{
//	using namespace std;
//
//	int i = 0;
//	double sum = 0.0;	//计算是个数的总和
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

//1.编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入(数字除外)，同时将大写字符转换为小写，将小写
//字符转换为大写
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Please enter an character(enter @ to quit):\n";
//
//	while ((cin >> ch) && ch != '@')	//输入@时循环结束
//	{
//		if (isupper(ch))	//isupper - 判断参数是否是大写字母，是则返回true
//		{
//			ch = tolower(ch);	//tolower - 将大写字母转换成小写字母
//			cout << ch << endl;
//		}
//		else
//		{
//			ch = toupper(ch);	//toupper - 将小写字母转换成大写字母
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

//读取文本文件
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
//	while (inFile.good())		//如果使用的是windows自带的记事本，记得在输入完所有数据后回车一下再
//								//保存文件，否则会少算最后一项数据。
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

//写入到文本文件中
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
//	//在屏幕当中显示
//	cout << fixed;	//以普通方式输出，非科学计数法
//	cout.precision(2);	//保留2位小数点精度，括号里是几，小数点后面就保留几位
//	cout.setf(ios_base::showpoint);	//强制显示浮点数小数点后的0
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//	//写入文件夹carinfo.txt中
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