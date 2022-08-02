#include <iostream>

//使用数组区间的函数 - 将指向数组起始处的指针作为一个参数，将数组长度作为第二个参数
using namespace std;

const int ArSize = 8;

int sum_arr(const int* begin, const int* end);

int main(void)
{
	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };

	int sum = sum_arr(cookies, cookies + 8);
	//等价于int sum = sum_arr(cookies, &cookies[8]);
	cout << "Total cookies eaten: " << sum << endl;

	sum = sum_arr(cookies, cookies + 3);
	//等价于sum = sum_arr(cookies, &cookies[3]);	//数组前三个元素的总和
	cout << "First three eaters ate " << sum << " cookies.\n";

	sum = sum_arr(cookies + 4, cookies + 8);
	//等价于sum = sum_arr(cookies + 4, &cookies[8]);	//数组后四个元素的总和
	cout << "Last four eaters ate " << sum << " cookies.\n";

	return 0;
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total += *pt;

	return total;
}

//const的第二种用法 - 将指针本身声明为常量，这样可以防止改变指针的位置。
//int main(void)
//{
//	using namespace std;
//
//	int n = 10;
//	int m = 100;
//	int* const pt = &n;
//
//	cout << "1)n = " << n << endl;
//	*pt = 20;
//	cout << "2)n = " << n << endl;
//
//	pt = &m;
//
//	return 0;
//}

//const的第一种用法 - 让指针指向一个常量对象，这样可以防止使用该指针来修改所指向的值
//int main(void)
//{
//	using namespace std;
//
//	int n = 10;
//	int m = 100;
//	const int* pt;
//	pt = &n;
//
//	cout << "1)n = " << n << endl;
//	/**pt = 20;*/
//	/*cout << "2)n = " << n << endl;*/
//	pt = &m;
//	cout << "*pt = " << *pt << endl;
//} 

//考虑要对房地产数组执行操作。两个基本操作分别是，将值读入到数组中和显示数组内容，再添加一个操作为：重新
//评估每种房地产的值。
//using namespace std;
//
//const int Max = 5;
//
//int fill_array(double arr[], int limit);
//void show_array(const double arr[], int n);
//void revalue(double r, double arr[], int n);
//
//int main(void)
//{
//	double properties[Max];
//
//	int size = fill_array(properties, Max);
//	show_array(properties, size);
//
//	if (size > 0)
//	{
//		cout << "Enter revalution factor: ";
//		double factor;
//
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//		}
//
//		revalue(factor, properties, size);
//		show_array(properties, size);
//	}
//
//	cout << "Done.\n";
//	cin.get();
//	cin.get();
//
//	return 0;
//}
//
//int fill_array(double arr[], int limit)
//{
//	double temp;
//	int i;
//
//	for (i = 0; i < limit; i++)
//	{
//		cout << "Enter value #" << i + 1 << ": ";
//		cin >> temp;
//
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		else
//			arr[i] = temp;
//	}
//
//	return i;
//}
//
//void show_array(const double arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Propertoes #" << i + 1 << ": $";
//		cout << arr[i] << endl;
//	}
//}
//
//void revalue(double r, double arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//		arr[i] *= r;
//}

//using namespace std;
//
//int main(void)
//{
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//		continue;
//
//	cout << i;
//
//	return 0;
//}

//将数组作为参数
//函数调用sum_arr(cookies, ArSize)将cookies数组第一个元素的地址和数组中的元素数目传递给sun_arr()函数。
//sum_arr()函数将cookies的地址赋给指针变量arr。
//using namespace std;
//
//const int ArSize = 8;
//
//int sum_arr(int arr[], int n);
//
//int main(void)
//{
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//
//	cout << "cookies address = " << cookies << endl;
//	cout << "size of cookies = " << sizeof(cookies) << endl;
//
//	int sum = sum_arr(cookies, ArSize);
//
//	cout << "Total cookies eaten: " << sum << endl;
//
//	sum = sum_arr(cookies, 3);	//数组前三个元素的总和
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, 4);	//数组后四个元素的总和
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//
//	return 0;
//}
//
//int sum_arr(int arr[], int n)
//{
//	cout << "arr address = " << arr << endl;
//	cout << "size of arr = " << sizeof(arr) << endl;
//
//	int total = 0;
//
//	for (int i = 0; i < n; i++)
//		total += arr[i];
//
//	return total;
//}

//函数和数组
//using namespace std;
//
//const int ArSize = 8;
//
//int sum_arr(int arr[], int n);
//
//int main(void)
//{
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//
//	int sum = sum_arr(cookies, ArSize);
//
//	cout << "Total cookies eaten: " << sum << endl;
//
//	return 0;
//}
//
//int sum_arr(int arr[], int n)
//{
//	int total = 0;
//
//	for (int i = 0; i < n; i++)
//		total += arr[i];
//
//	return total;
//}

//计算彩票的中奖概率
//using namespace std;
//
//long double probability(unsigned numbers, unsigned picks);
//
//int main(void)
//{
//	double total, choices;
//
//	cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";
//
//	while ((cin >> total >> choices) && choices <= total)
//	{
//		cout << "You have one chance in " << probability(total, choices) << " of winning.\n";
//		cout << "Next two numbers (q to quit): ";
//	}
//
//	cout << "Bye\n";
//
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for (n = numbers, p = picks; p > 0; n--, p--)
//		result = result * (n / p);
//
//	return result;
//}

//函数中修改形参的值不会影响调用程序中的数据
//using namespace std;
//
//void n_chars(char c, int n);
//
//int main(void)
//{
//	int times = 0;
//	char ch;
//
//	cout << "Enter a  character: ";
//	cin >> ch;
//	while (ch != 'q')
//	{
//		cout << "Enter an integer: ";
//		cin >> times;
//		n_chars(ch, times);
//		cout << "\nEnter another character or press the q-key to quit: ";
//		cin >> ch;
//	}
//
//	cout << "The value of time is " << times << ".\n";
//	cout << "Bye\n";
//
//	return 0;
//}
//
//void n_chars(char c, int n)
//{
//	while (n-- > 0)
//		cout << c;
//}