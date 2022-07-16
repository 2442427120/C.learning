#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>

//William Wingate从事披萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
//*披萨饼公司的名称，可以有多个单词组成
//*披萨饼的直径
//披萨饼的重量
//请设计一个能存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示
//这些信息。请使用cin（或它的方法）和cout。
//struct Pizza
//{
//	char company[20];
//	int diamater;
//	double weight;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	Pizza info;
//
//	cout << "Enter Pizza company: " << endl;
//	cin.getline(info.company, 20);
//	cout << "Enter Pizza diamater: " << endl;
//	cin >> info.diamater;
//	cout << "Enter Pizza weight: " << endl;
//	cin >> info.weight;
//	cout << endl;
//
//	cout << "Pizza information" << endl;
//	cout << "Company: " << info.company << endl;
//	cout << "Diamater: " << info.diamater << endl;
//	cout << "Weight: " << info.weight << endl;
//
//	return 0;
//
//}

//结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初
//始化为所选择的值，然后显示每个结构的内容。
//struct CandyBar
//{
//	char brand[20];
//	double weight;
//	int calories;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	CandyBar snack[3] = 
//	{ 
//		{"棒棒糖", 2.3, 350},
//		{"棉花糖", 0.5, 200},
//		{"软糖", 3.14, 520}
//	};
//
//	cout << "第一种" << endl;
//	cout << "糖的品牌：" << snack[0].brand << endl;
//	cout << "糖的重量：" << snack[0].weight << endl;
//	cout << "糖的卡路里：" << snack[0].calories << endl << endl;
//
//	cout << "第二种" << endl;
//	cout << "糖的品牌：" << snack[1].brand << endl;
//	cout << "糖的重量：" << snack[1].weight << endl;
//	cout << "糖的卡路里：" << snack[1].calories << endl << endl;
//
//	cout << "第三种" << endl;
//	cout << "糖的品牌：" << snack[2].brand << endl;
//	cout << "糖的重量：" << snack[2].weight << endl;
//	cout << "糖的卡路里：" << snack[2].calories << endl << endl;
//
//	return 0;
//}

//结构CandyBar包含3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量(可以有小数);第三个成员存
//储了糖块的卡路里含量(整数)。请编写一个程序，声明这个结构，创建一个名为snack的CandyBar变量，并将其成员分
//别初始化为"Mocha Munch", 2.3和350.初始化应在声明snack时进行。最后，程序显示snack变量的内存
//struct CandyBar
//{
//	char brand[20];	//品牌
//	double weight;	//重量
//	int calories;	//卡路里
//};
//
//int main(void)
//{
//	using namespace std;
//
//	CandyBar snack = {"棒棒糖", 2.3, 350};
//
//	cout << "糖块的品牌：" << snack.brand << endl;
//	cout << "糖块的重量：" << snack.weight << endl;
//	cout << "糖块的卡路里： " << snack.calories << endl;
//
//	return 0;
//}

//编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储
//和显示组合结果。请使用string对象和头文件string中的函数。下面是该程序运行时的情形：
//		Enter your first name: Filp
//		Enter your last name: Fleming
//		Here's the information in a single sting: Fleming, Filp
//int main(void)
//{
//	using namespace std;
//
//	string str_first_name;
//	string str_last_name;
//	string str_tmp;	//临时变量，用于存储组合的字符串
//
//	cout << "Enter your first name: ";
//	getline(cin, str_first_name);
//	cout << "Enter your last name: ";
//	getline(cin, str_last_name);
//
//	str_tmp = str_first_name;
//	str_tmp += ", ";
//	str_tmp += str_last_name;
//
//	cout << "Here's the information in a single string: " << str_tmp;
//
//	return 0;
//}


//编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储
//和显示组合结果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
//		Enter your first name: Filp
//		Enter your last name: Fleming
//		Here's the information in a single sting: Fleming, Filp
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char first_name[ArSize];
//	char last_name[ArSize];
//	char tmp[ArSize];
//
//	cout << "Enter your first name: ";
//	cin.getline(first_name, ArSize);
//	cout << "Enter your last name: ";
//	cin.getline(last_name, ArSize);
//	strcpy(tmp, last_name);
//	strcat(tmp, ", ");
//	strcat(tmp, first_name);
//	cout << "Here's the information in a single string: " << tmp;
//
//	return 0;
//}

//2.修改程序清单4.4，使用C++ string类而不是char数组
//int main(void)
//{
//	using namespace std;
//
//	string str1, str2;
//
//	cout << "Enter your name: " << endl;
//	/*getline(cin, str1);*/
//	getline(cin, str1);
//	cout << "Enter your favorite dessert: " << endl;
//	getline(cin, str2);
//
//	cout << "I have some delicious " << str2 << " for you, " << str1;
//
//	return 0;
//}

//1.编写一个C++程序，如下述输出示例所示的那样请求显示信息
//What is your first name? Betty Sue
//What is your last name? Yewe
//What letter grade do you deserve? B
//What is your age? 22
//Name: Yewe, Betty Sue
//Grade: C
//Age: 22
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char first_name[ArSize];
//	char last_name[ArSize];
//	char grade;
//	int age;
//
//	cout << "What is your first name? ";
//	cin.getline(first_name, ArSize);
//
//	cout << "What is your last name? ";
//	cin.getline(last_name, ArSize);
//
//	cout << "What letter grade do you deserve? ";
//	cin >> grade;
//
//	cout << "What is your age? ";
//	cin >> age;
//
//	cout << "Name: " << last_name << ", " << first_name << endl;
//	cout << "Grade: " << (char)(grade + 1) << endl;
//	cout << "Age: " << age;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	//C, 原版C++
//	double a1[4] = {1.2, 2.4, 3.6, 4.8};
//	//C++98 STL
//	vector<double> a2(4);	//创建包含四个元素的vector对象
//
//	//在 C98 中没有简单的初始化方法
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//
//	//C11 - 创建并初始化数组对象
//	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
//	array<double, 4> a4;
//	a4 = a3;  //对相同大小的数组对象有效
//
//	//使用数组表示法
//	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//
//	//不当行为
//	//a1[-2] = 20.2;
//	//cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
//	a2.at(-2) = 20.2;
//	cout << "a2[-2] = " << a2[-2] << " at " << &a2[-2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//
//
//	return 0;
//}