#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

//7.修改程序清单8.14，使其使用两个名为SumArray()的模板函数来返回数组元素的总和，而不是显示数组的内容。程序
//应显示thing的总和以及所有debt的总和
using namespace std;

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{"Rock", 2400.0},
		{"Jack", 1300.0},
		{"Rose", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "things total:";
	int value1 = SumArray(things, 6);
	cout << value1 << endl;
	cout << "Mr.E's debts total:";
	double value2 = SumArray(pd, 3);
	cout << value2 << endl;

	return 0;
}
//完全匹配
template <typename T>
T SumArray(T arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}
//最佳匹配
template <typename T>
T SumArray(T* arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}

//6.编写函数模板maxn()，它将由一个T类型元素组成的数组和一个表示数组元素数目的整数作为参数，并返回数组中最
//大的元素。在程序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个double元素的数组来调用该函
//数。该程序还包含一个具体化，它将char指针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如果有
//多个这样的字符串，则返回其中第一个字符串的地址。使用由5个字符串指针组成的数组来测试该具体化。
//using namespace std;
//
//template <typename T>
//T maxn(T arr[], int n);
//
//template<> const char* maxn(const char* arr[], int n);
//
//int main(void)
//{
//	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
//	double arr2[4] = { 3.14, 6.14, 9.14, 12.14 };
//	/*const char* parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
//	const char* parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };
//
//	int value1 = maxn(arr1, 6);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = maxn(arr2, 4);
//	cout << "arr2 max value = " << value2 << endl;
//
//	const char* ptr = maxn(parr, 5);
//	cout << "parr max length = " << ptr << endl;
//
//	return 0;
//}
//
//template <typename T>
//T maxn(T arr[], int n)
//{
//	T max = arr[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	return max;
//}
//
//template<> const char* maxn(const char* arr[], int n)
//{
//	const char* temp = arr[0];
//
//	//返回最长字符串的地址 - 如果
//	for (int i = 1; i < n; i++)
//	{
//		//条件若设置为<=，若字符串长度都相同，则最后会返回最后一个字符串地址,而设置为<,
//		//则最后会返回第一个字符串的地址
//		if (strlen(temp) < strlen(arr[i])) 
//			temp = arr[i];
//	}
//
//	return temp;
//}

//5.编写模板函数max5()，它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素(由于长度固定，因此
// 可以在循环中使用硬编码，而不必通过参数来传递)。在一个程序中使用该函数，将T替换为一个包含5个int值的数组
// 和一个包含5个double值的数组，以测试该函数
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
//	int value1 = max5(arr1);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = max5(arr2);
//	cout << "arr2 max value = " << value2 << endl;
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

//4.请提供其中描述的函数和原型，从而完成该程序。注意，应有两个show()函数，每个都使用默认参数。请尽可能使用
//const参数。set()使用new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实现类时使用相似。(可能还
//必须修改头文件的名称，删除using编译指令，这取决于所用的编译器)
//using namespace std;
//#include <cstring>	//for strlen(),strcpy()
//
//struct stringy
//{
//	char* str;	//pointer to a string
//	int ct;	//length of string (not counting '\0')
//};
//
//char* set(stringy& be, const char te[]);
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
//	char*p = set(beany, testing);	//first argument is a reference,
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
//char* set(stringy& be,const char te[])
//{
//	char* pte = new char;
//	be.str = pte;	
//	strcpy(pte, te);
//	be.ct = strlen(te);
//
//	return pte;
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