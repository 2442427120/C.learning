#include <iostream>
#include <string>
#include <cstring>

const int ArSize = 20;
int main(void)
{
	using namespace std;

	int i = 0;
	char name[ArSize];

	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";

	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}

	return 0;
}

//string类创建word数组
//int main(void)
//{
//	using namespace std;
//
//	string word = "?ate";
//
//	for (char ch = 'a'; word != "mate"; ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//
//	return 0;
//}

//strcmp函数的用法
//int main(void)
//{
//	using namespace std;
//
//	char word[5] = "?ate";
//
//	for (char ch = 'a'; strcmp(word, "mate"); ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//
//	return 0;
//}

//赋值运算符(=)、等于运算符(==)可能犯的错误
//int main(void)
//{
//	using namespace std;
//
//	//正确运用赋值运算符
//	int quizscores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
//	cout << "Doing it right:\n";
//	int i;
//	for (i = 0; quizscores[i] == 20; i++)
//	{
//		cout << "quiz " << i << "is a 20\n";
//	}
//
//	//错误示范
//	cout << "Doing it dangerously wrong:\n";
//	for (i = 0; quizscores[i] = 20; i++)
//	{
//		cout << "quiz " << i << " is a 20\n";
//	}
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	cout << "Enter a word: ";
//	string word;
//	cin >> word;
//
//	char temp;
//	int i, j;
//
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//
//	cout << word << "\nDone\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int x = 20;	//original x
//
//	{	//block starts 
//		cout << x << endl;	//use original x
//		int x = 100;	//new x
//		cout << x << endl;	//use new x
//	}	//block ends
//	cout << x << endl;	//use original x
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int x = 20;
//
//	{
//		int y = 100;
//		cout << x << endl;
//		cout << y << endl;
//	}
//
//	cout << x << endl;
//	cout << y << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	cout << "The Amazing Accounto will sum and average ";
//	cout << "five number for you.\n";
//	cout << "Please enter five values:\n";
//
//	double number;
//	double sum = 0.0;
//
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << "Value " << i << ": ";
//		cin >> number;
//		sum += number;
//	}
//
//	cout << "Five exquisite choices indeed! ";
//	cout << "They sum to " << sum << endl;
//	cout << "and average to " << sum / 5 << ".\n";
//	cout << "The Amazing Accounto bids you adieu!\n";
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	double arr[5] = { 12.1, 32.8, 23.4, 45.2, 37.4 };
//	double* pt = arr;
//
//	cout << "*++pt = " << *++pt << endl;
//	cout << "++*pt = " << ++ * pt << endl;
//	cout << "*(pt)++ = " << (*pt)++ << endl;
//	cout << "*pt = " << *pt << endl;
//	cout << "*pt++ = " << *pt++ << endl;
//	cout << "*pt = " << *pt << endl;
//
//	return 0;
//}

//递增运算符（++）和递减运算符（--）
//int main(void)
//{
//	using namespace std;
//
//	int a = 20;
//	int b = 20;
//
//	cout << "a = " << a << ": b = " << b << endl;
//	cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
//	cout << "a = " << a << ": b = " << b << endl;
//
//	return 0;
//}

//使用for循环访问字符串
//int main(void)
//{
//	using namespace std;
//
//	cout << "Enter a world: ";
//	string word;
//	cin >> word;
//
//	//display letter in reverse order
//	for (int i = word.size() - 1; i >= 0; i--)
//	{
//		cout << word[i];
//	}
//	cout << "\nBye.\n";
//
//	return 0;
//}