#include <iostream>
#include <fstream>

//写入到文本文件中
using namespace std;

int main(void)
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();

	return 0;
}

//用户输入非数字输入，程序将拒绝，并要求用户重新继续输入数字
//const int Max = 5;
//
//int main(void)
//{
//	using namespace std;
//
//	int golf[Max];
//
//	cout << "Please enter your golf scores.\n";
//	cout << "You must enter " << Max << " rounds.\n";
//
//	int i;
//	for (i = 0; i < Max; i++)
//	{
//		cout << "round #" << i + 1 << ": ";
//
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//
//			cout << "Please enter a number: ";
//		}
//	}
//
//	double total = 0.0;
//	for (i = 0; i < Max; i++)
//	{
//		total += golf[i];
//	}
//
//	cout << total / Max << " = average score " << Max << " rounds\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int num1, num2;
//
//	cout << "First number: ";
//	cin >> num1;
//
//	cin.clear();
//	while (cin.get() != '\n');	//这里想让循环产生的作用：循环读取用户输入的非数字，
//	                            //以便第一个cin后面的cin能正常使用,实际情况以运行为主
//	cout << "Last number: ";
//	cin >> num2;
//
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	return 0;
//}

//读取数字的循环
//using namespace std;
//
//const int Max = 5;
//
//int main(void)
//{
//	double fish[Max];
//	double total = 0.0;
//
//	cout << "Please enter the weights of you fish.\n";
//	cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
//	cout << "fish #1: ";
//
//	int i = 0;
//	while (i < Max && cin >> fish[i])
//	{
//		if (++i < Max)
//		{
//			cout << "fish #" << i + 1 << ": ";
//		}
//	}
//
//	for (int j = 0; j < i; j++)
//	{
//		total += fish[j];
//	}
//
//	//int num;
//	//cin >> num;
//	//cout << "num = " << num << endl;
//
//	if (i == 0)
//	{
//		cout << "No fish\n";
//	}
//	else
//	{
//		cout << total / i << " = average weight of " << i << " fish\n";
//	}
//
//	cout << "Done.\n";
//
//	return 0;
//}

//continue 和 break语句
//using namespace std;
//
//const int ArSize = 80;
//
//int main(void)
//{
//	char line[ArSize];
//	int spaces = 0;
//
//	cout << "Enter a line of test:\n";
//	cin.get(line, ArSize);
//	cout << "Complete line:\n" << line << endl;
//	cout << "Line through first period:\n";
//
//	for (int i = 0; line[i] != '\0'; i++)
//	{
//		cout << line[i];
//		if (line[i] == '.')
//		{
//			break;
//		}
//		if (line[i] != ' ')
//		{
//			continue;
//		}
//
//		spaces++;
//	}
//
//	cout << "\n" << spaces << " spaces\n";
//	cout << "Done.\n";
//
//	return 0;
//}

//将枚举量用作标签
//using namespace std;
//
//enum {red, orange, yellow, green, blue, violet, indigo};
//
//int main(void)
//{
//	cout << "Enter color code (0-6): ";
//
//	int code;
//	cin >> code;
//
//	while (code >= red && code <= indigo)
//	{
//		switch (code)
//		{
//		case red: 
//			cout << "Her lips were red.\n";
//			break;
//		case orange:
//			cout << "Her hair was orange.\n";
//			break;
//		case yellow:
//			cout << "Her shoes were yellow.\n";
//			break;
//		case green:
//			cout << "Her nails were green.\n";
//			break;
//		case blue:
//			cout << "Her sweatsuit was blue.\n";
//			break;
//		case violet:
//			cout << "Her eyes were violet.\n";
//			break;
//		case indigo:
//			cout << "Her mood was indigo.\n";
//			break;
//		}
//
//		cout << "Enter color code (0-6): ";
//		cin >> code;
//	}
//
//	cout << "Bye!\n";
//
//	return 0;
//}

//switch 语句
//using namespace std;
//
//void showmenu();
//void report();
//void comfort();
//
//int main(void)
//{
//	showmenu();
//
//	int choice;
//
//	cin >> choice;
//
//	while (choice != 5)
//	{
//		switch (choice)
//		{
//
//		case 1:
//			cout << "\a\n";
//			break;
//		case 2:
//			report();
//			break;
//		case 3:
//			cout << "The boos was in all day.\n";
//			break;
//		case 4:
//			comfort();
//			break;
//		default:
//			cout << "That's not a choice.\n";
//		}
//
//		showmenu();
//		cin >> choice;
//	}
//
//	cout << "Bye!\n";
//
//	return 0;
//}
//
//void showmenu()
//{
//	cout << "Please enter 1, 2, 3, 4, or 5:\n"
//		"1) alarm           2) report\n"
//		"3) albit           4) comfort\n"
//		"5) quit\n";
//}
//
//void report()
//{
//	cout << "It's been an excellent week for business.\n"
//		"Sales are up 120%. Expense are down 35%.\n";
//}
//
//void comfort()
//{
//	cout << "Your employees thinks you are the finest CEO\n"
//		"in the industry. The board of directors think\n"
//		"you are the finest CEO in the industry.\n";
//}

//?:运算符(求两数中的大数)
//using namespace std;
//
//int main(void)
//{
//	int a, b;
//
//	cout << "Enter two integer: ";
//	cin >> a >> b;
//	cout << "The larger of " << a << " and " << b;
//	int c = a > b ? a : b;
//	cout << " is " << c << endl;
//
//	return 0;
//}