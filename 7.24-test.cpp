#include <iostream>
#include <climits>
#include <cctype>

int main(void)
{
	using namespace std;

	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int other = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			chars++;
		}
		else if (isspace(ch))
		{
			whitespace++;
		}
		else if (isdigit(ch))
		{
			digits++;
		}
		else if (ispunct(ch))
		{
			punct++;
		}
		else
		{
			other++;
		}

		cin.get(ch);
	}

	cout << chars << " letter, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< other << " others.\n";

	return 0;
}


//逻辑非运算!
//using namespace std;
//
//bool is_int(double);
//
//int main(void)
//{
//	double num;
//
//	cout << "Yo, dude! Enter an integer value: ";
//	cin >> num;
//
//	while (!is_int(num))
//	{
//		cout << "Out of range -- please try again: ";
//		cin >> num;
//	}
//
//	int val = int(num);
//	cout << "You've entered the integer " << val << "\nBye\n";
//
//	return 0;
//}
//
//bool is_int(double x)
//{
//	if (x <= INT_MAX && x >= INT_MIN)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//用&&来设置取值范围
//using namespace std;
//
//const char* qualify[4] =
//{
//	"10,000-meter race.\n",
//	"mud tug-of-war.\n",
//	"masters canoe jousting.\n",
//	"pie-throwing festvial.\n"
//};
//
//int main(void)
//{
//	int age, index;
//
//	cout << "Enter your age in years: ";
//	cin >> age;
//
//	if (age > 17 && age < 35)
//	{
//		index = 0;
//	}
//	else if (age >= 35 && age < 50)
//	{
//		index = 1;
//	}
//	else if (age >= 50 && age < 65)
//	{
//		index = 2;
//	}
//	else
//	{
//		index = 3;
//	}
//
//	cout << "You qualify for the " << qualify[index];
//
//	return 0;
//}

//逻辑与表达式&&
//using namespace std;
//
//const int ArSize = 6;
//
//int main(void)
//{
//	float naaq[ArSize];
//
//	cout << "Enter the nAAqs (New Age Awareness Quotients) "
//		"of\nuour neighbors. Program terminates "
//		"when you make\n" << ArSize << " entries "
//		<< "or enter a negative value.\n";
//
//	int i = 0;
//	float temp;
//
//	cout << "First value: ";
//	cin >> temp;
//
//	while (i < ArSize && temp >= 0)
//	{
//		naaq[i] = temp;
//		++i;
//		if (i < ArSize)
//		{
//			cout << "Next value: ";
//			cin >> temp;
//		}
//	}
//
//	if (0 == i)
//	{
//		cout << "No data--bye\n";
//	}
//	else
//	{
//		cout << "Enter your NAAQ: ";
//		float you;
//		cin >> you;
//		int count = 0;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (naaq[j] > you)
//			{
//				++count;
//			}
//		}
//
//		cout << count;
//		cout << " of your neighbours have greater awarness of\n"
//			<< "the New Age than you do.\n";
//	}
//
//	return 0;
//}

//逻辑或表达式||
//using namespace std;
//
//int main(void)
//{
//	cout << "This program may reformat your hard disk\n"
//		"and destoty all your data.\n"
//		"Do you wish to continue? <y/n> ";
//
//	char ch;
//	cin >> ch;
//
//	if (ch == 'y' || ch == 'Y')
//	{
//		cout << "You were warned!\a\a\n";
//	}
//	else if (ch == 'n' || ch == 'N')
//	{
//		cout << "A wish choice ... bye\n";
//	}
//	else
//	{
//		cout << "That wasn't a y or n! Apparently you "
//			"can't follow\ninstructions, so "
//			"I'll trash your disk anyway.\a\a\a\n";
//	}
//
//	return 0;
//}

//using namespace std;
//
//const int Fave = 27;
//
//int main(void)
//{
//	int n;
//
//	cout << "Enter a number in the range 1-100 to find ";
//	cout << "my favorite number: ";
//
//	do
//	{
//		cin >> n;
//		if (n < Fave)
//		{
//			cout << "Too low -- guess again: ";
//		}
//		else if (n > Fave)
//		{
//			cout << "Too high -- guess again: ";
//		}
//		else
//		{
//			cout << Fave << " is right!\n";
//		}
//	} while (n != Fave);
//
//	return 0;
//}

//
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Type, and I shall repeat.\n";
//	cin.get(ch);
//
//	while (ch != '.')
//	{
//		if (ch == '\n')
//		{
//			cout << ch;
//		}
//		else
//		{
//			cout << ++ch;	//cout << ch + 1; 
//		}
//
//		cin.get(ch);
//	}
//
//	cout << "\nPlease excuse the slight confusion.\n";
//
//	return 0;
//}

//统计空格和字符数
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//	int space = 0;
//	int total = 0;
//
//	cin.get(ch);
//	while (ch != '.')	//输入句点结束
//	{
//		if (ch == ' ')
//		{
//			space++;
//		}
//		++total;
//		cin.get(ch);
//	}
//
//	cout << space << " space, " << total;
//	cout << " characters total in sentence\n";
//
//	return 0;
//}