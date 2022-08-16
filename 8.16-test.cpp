#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>

//第八章编程练习第6题修改
using namespace std;

template <typename T>
T maxn(T arr[], int n);

template<>
string maxn(string arr[], int n);

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	double arr2[4] = { 3.14, 6.14, 9.14, 12.14 };
	/*const char* parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
	/*const char* parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };*/
	/*string parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
	string parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };


	cout << "The max value of int arr: " << maxn(arr1, 6) << endl;
	cout << "The max value of double arr: " << maxn(arr2, 4) << endl;
	cout << "The max value of string: " << maxn(parr, 5) << endl;
	/*int value1 = maxn(arr1, 6);
	cout << "arr1 max value = " << value1 << endl;

	double value2 = maxn(arr2, 4);
	cout << "arr2 max value = " << value2 << endl;

	string ptr = maxn(parr, 5);
	cout << "parr max length = " << ptr << endl;*/

	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

template<> 
string maxn(string arr[], int n)
{
	//方案3.使用string类，且临时变量存储数组第一个下标
	int pos = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[pos].size() < arr[i].size())
			pos = i;
	}

	return arr[pos];

	//方案2.使用string类，且临时变量存储的是字符串数组的第一个成员
	/*string temp = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (temp.size() < arr[i].size())
			temp = arr[i];
	}

	return temp;*/

	//方案1，使用char*, 且临时变量存储的是字符串数组的第一个成员
	//const char* temp = arr[0];

	//for (int i = 1; i < n; i++)
	//{
	//	//返回最长字符串的地址 - 如果
	//	//条件若设置为<=，若字符串长度都相同，则最后会返回最后一个字符串地址,而设置为<,
	//	//则最后会返回第一个字符串的地址
	//	if (strlen(temp) < strlen(arr[i])) 
	//		temp = arr[i];
	//}
	//return temp;
}

//第八章编程练习第5题修改
//using namespace std;
//
//template <typename T>
//T max5(const T arr[]);
//
//int main(void)
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	double arr2[5] = { 10.1, 2.3, 3.5, 4.8, 5.8 };
//
//	//方案1.直接显示返回值
//	cout << "The max value of int arr: " << max5(arr1) << endl;
//	cout << "The max value of double arr: " << max5(arr2) << endl;
//
//	//方案2.创建临时变量存储返回值
//	/*int value1 = max5(arr1);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = max5(arr2);
//	cout << "arr2 max value = " << value2 << endl;*/
//
//	return 0;
//}
//
//template <typename T>
//T max5(const T arr[])
//{
//	T max = arr[0];	//将数组第一个元素设为最大值
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	return max;
//}

//第八章编程练习第4题修改
//using namespace std;
//#include <cstring>	//for strlen(),strcpy()
//
//struct stringy
//{
//	char* str;	//pointer to a string
//	int ct;	//length of string (not counting '\0')
//};
//
//void set(stringy& be, const char te[]);
//void show(const stringy& be, int n = 1);
//void show(const char* ar, int n = 1);
//
////prototypes for set(), show(), and show() go here
//int main(void)
//{
//
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//
//	set(beany, testing);	//first argument is a reference,
//							//allocates space to hold copy of testing,
//							//sets str nmber of beany to point to the
//							//new block, copies testing to new block,
//							//and sets ct member of beany
//	cout << "Beany first display:\n";
//	show(beany);	//prints member string once
//	cout << "Beany second display:\n";
//	show(beany, 2);  //prints member string twice
//	testing[0] = 'D';
//	testing[1] = 'u';
//	cout << "Testing first display:\n";
//	show(testing);	//prints testing string once
//	cout << "Testing seconde display:\n";
//	show(testing, 3);	//prints testing string thrice
//	show("Done!");
//
//	return 0;
//}
//
//void set(stringy& be,const char te[])
//{
//	be.ct = strlen(te) + 1;
//	be.str = new char[be.ct];
//	strcpy(be.str, te);
//
//	/*char* pte = new char;
//	be.str = pte;	
//	strcpy(pte, te);
//	be.ct = strlen(te);*/
//}
//
//void show(const stringy& be, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << "beany str: " << be.str << ", " << be.ct << endl;
//}
//
//void show(const char* ar, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << ar << endl;
//}

//第八章编程练习第3题修改
//using namespace std;
//
//void low_to_up(string& u);
//
//int main(void)
//{
//	string user;
//
//	cout << "Enter a string (q to quit): ";
//	while (getline(cin, user) && user != "q")
//	{
//		low_to_up(user);
//		cout << user << endl;
//		cout << "Next string(q to quit): ";
//	}
//	cout << "Bye.\n";
//
//	return 0;
//
//}
//
//void low_to_up(string& str)
//{
//	//方案1
//	for (int i = 0; i < str.size(); i++)	//str.zize()方法计算字符串的长度
//		str[i] = toupper(str[i]);
//
//	//方案2
//	//int i = 0;
//	//while (isalpha(u[i]) || u[i] == ' ' || isspace(u[i])) //当内容为字符、空格或标点符号时进入循环
//	//{
//	//	if (islower(u[i]))	//如果字符是小写字符，则将之转换为大写字符
//	//		u[i] = toupper(u[i]);
//	//	else
//	//		i++;
//	//}
//}

//第八章编程练习第2题修改
//using namespace std;
//
//struct CandyBar
//{
//	char* name;
//	double weight;
//	int calories;
//};
//
//void set(CandyBar& candybar, const char* str = "Millennium munch", const double w = 2.85, const int c = 350);
//void show(const CandyBar& bar);
//
//int main(void)
//{
//	CandyBar B;
//
//	set(B);	//以默认值形式填充
//	cout << "Display with default parameters:\n";
//	show(B);
//
//	set(B, "Microsoft VS", 3.78, 600); //按给定值填充
//	cout << "custom parameters:\n";
//	show(B);
//
//	return 0;
//}
//
//void set(CandyBar& candybar, const char* str, const double w, const int c)
//{
//	strcpy(candybar.name, str);
//	//candybar.name = str;
//	candybar.weight = w;
//	candybar.calories = c;
//}
//
//void show(const CandyBar& bar)
//{
//	cout << bar.name << endl;
//	cout << bar.weight << endl;
//	cout << bar.calories << endl;
//}

//第八章编程练习第一题修改
//using namespace std;
//
//void display(const char* pt, int n = 0);
//
////int temp = 0;	//定义temp为全局变量，以计算打印函数的调用次数
//
//int main(void)
//{
//	const char* ps = "hello";
//	const char* ptr = "good morning";
//
//	display(ps);
//	cout << "-------------------------\n";
//	display(ptr);
//	cout << "-------------------------\n";
//	display(ps, 3);
//	cout << "-------------------------\n";
//	display(ps, 6);
//	cout << "-------------------------\n";
//	display(ps, 9);
//
//	return 0;
//}
//
//void display(const char* pt, int n)
//{
//	static int temp = 0;	//定义一个静态变量来计算函数调用的次数
//	temp++;
//
//	if (n == 0)
//		cout << pt << endl;
//	else
//	{
//		for (int i = 0; i < temp; i++)
//			cout << pt << endl;
//	}
//}