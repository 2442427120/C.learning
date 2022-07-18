#include <iostream>

//修改步长
int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}

	return 0;
}

//const int ArSize = 16;
//
////计算阶乘
//int main(void)
//{
//	using namespace std;
//
//	long long factorials[ArSize];
//
//	factorials[1] = factorials[0] = 1LL;
//	for (int i = 2; i < ArSize ; i++)
//	{
//		factorials[i] = i * factorials[i - 1];
//	}
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "! = " << factorials[i] << endl;
//	}
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int x;
//
//	cout << "The expression x = 100 has the value ";
//	cout << (x = 10) << endl;
//	cout << "Now x = " << x << endl;
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//	cout.setf(ios_base::boolalpha);
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	cout << "Enter the starting countdown value: ";
//	int limit;
//	cin >> limit;
//
//	int i;
//
//	for (i = limit; i; i--)
//	{
//		cout << "i = " << i << endl;
//	}
//	cout << "Done now what i = " << i << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int i;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "C++ knows loops.\n";
//	}
//
//	cout << "i = " << i << endl;
//	cout << "C++ knows when to stop.\n";
//
//	return 0;
//}