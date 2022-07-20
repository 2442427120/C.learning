#include <iostream>
#include <ctime>

int main(void)
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit: \n";
	cin.get(ch);

	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " characters read\n";

	return 0;
}

//int main(void)
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//
//	cout << "Enter characters; enter # to quit: \n";
//	cin.get(ch);
//
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	
//	cout << endl << count << " characters read\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	//double prices[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };
//
//	//for (double x : prices)
//	//{
//	//	cout << x << endl;
//	//}
//	double prices[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };
//
//	for (double& x : prices)
//	{
//		x = x * 0.80;
//	}
//
//	for (double x : prices)
//	{
//		cout << x << endl;
//	}
//
//	for (int x : {3, 5, 2, 8, 6})
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//
//
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int n;
//
//	cout << "Enter numbers in the range 1-10 to find ";
//	cout << "my favorite number\n";
//	do
//	{
//		cin >> n;
//	} while (n != 7);
//	cout << "Yes, 7 is my favorite.\n";
//
//	return 0;
//}

//等待一段时间：编写延时循环(clock()函数)
//int main(void)
//{
//	using namespace std;
//
//	float secs;
//
//	cout << "Enter the delay time, in seconds: ";
//	cin >> secs;
//	clock_t delay = secs * CLOCKS_PER_SEC;
//	cout << "starting\a\n";
//	clock_t start = clock();
//
//	while(clock() - start < delay)
//	{
//		;
//	}
//	cout << "done\a\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	long long  wait = 0;
//
//	cout << "hello world!\n";
//	while (wait < 1000000)
//	{
//		wait++;
//	}
//	cout << "see you tomorrow!\n";
//
//	return 0;
//}