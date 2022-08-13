#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cctype>
//4.请提供其中描述的函数和原型，从而完成该程序。注意，应有两个show()函数，每个都使用默认参数。请尽可能使用
//const参数。set()使用new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实现类时使用相似。(可能还
//必须修改头文件的名称，删除using编译指令，这取决于所用的编译器)
using namespace std;
#include <cstring>	//for strlen(),strcpy()

struct stringy
{
	char* str;	//pointer to a string
	int ct;	//length of string (not counting '\0')
};

void set(stringy& be, const char te[]);
void show(const stringy& be, int n = 1);
void show(const char* ar, int n = 1);

//prototypes for set(), show(), and show() go here
int main(void)
{

	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);	//first argument is a reference,
							//allocates space to hold copy of testing,
							//sets str nmber of beany to point to the
							//new block, copies testing to new block,
							//and sets ct member of beany
	show(beany);	//prints member string once
	show(beany, 2);  //prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);	//prints testing string once
	show(testing, 3);	//prints testing string thrice
	show("Done!");

	return 0;
}

void set(stringy& be,const char te[])
{
	char* test = new char;
	test = be.str;
	strcpy(test, te);
	be.ct = strlen(test);
}

void show(const stringy& be, int n)
{
	for (int i = 0; i < n; i++)
		cout << be.str << endl;
}

void show(const char* ar, int n)
{
	for (int i = 0; i < n; i++)
		cout << ar << endl;
}

//3.编写一个函数，它接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，为此可以使用表
//6.4描述的函数toupper()。然后编写一个程序，它通过使用一个循环让您能够用不同的输入来测试这个函数，该程序的
//运行情况如下：
//	Enter a string (q to quit): go away
//	GO AWAY
//	Next string (q to quit): good grief!
//	GOOD GRIEF!
//	Next string (q to quit): q
//	Bye.
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
//void low_to_up(string& u)
//{
//	int i = 0;
//	while (isalpha(u[i]) || u[i] == ' ' || isspace(u[i])) //当内容为字符、空格或标点符号时进入循环
//	{
//		if (islower(u[i]))	//如果字符是小写字符，则将之转换为大写字符
//			u[i] = toupper(u[i]);
//		else
//			i++;
//	}
//}

//2.CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名称；第二个成员存储candy bar的重量(可能有小数)；
//第三个成员存储candy bar的热量(整数)。请编写一个程序，它使用一个这样的函数，即将CandyBar的引用、char指针、
//double和int作为参数，并用最后3个值设置相应的结构成员。最后3个参数的默认值分别为"Millennium Munch"、2.85
//和350。另外，该程序还包含一个以CandyBar的引用为参数，并显示结构内容的函数。请尽可能使用const。
//using namespace std;
//
//struct CandyBar
//{
//	const char* name;
//	double weight;
//	int calories;
//};
//
//void show(CandyBar& bar, const char* name = "Millennium munch", double w = 2.85, int cr = 350);
//
//int main(void)
//{
//	CandyBar B;
//
//	cout << "Display with default parameters:\n";
//	show(B);
//	cout << "custom parameters:\n";
//	show(B, "Microsoft VS", 3.78, 600);
//
//	return 0;
//}
//
//void show(CandyBar& bar, const char* name, double w, int cr)
//{
//	bar.name = name;
//	cout << bar.name << endl;
//	bar.weight = w;
//	cout << bar.weight << endl;
//	bar.calories = cr;
//	cout << bar.calories << endl;
//}

//1.编写通常接受一个参数(字符串的地址)，并打印该字符串的函数。然而，如果提供了第二个参数(int类型)，且该参数
//不为0，则该函数打印字符串的次数为该函数的被调用次数(注意，字符串的打印次数不等于第二个参数的值，而等于函
//数被调用的次数)。是的，这是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一个简单的程序中使用
//该函数，以演示该函数是如何工作的。
//using namespace std;
//
//void display(const char* pt, int n = 1);
//
//int temp = 0;	//定义temp为全局变量，以计算打印函数的调用次数
//
//int main(void)
//{
//	const char* ps = "hello";
//
//	display(ps);
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
//	if (n == 0)
//		cout << "Error" << endl;
//	else
//	{
//		temp++;
//		for (int i = 0; i < temp; i++)
//			cout << pt << endl;
//	}
//}