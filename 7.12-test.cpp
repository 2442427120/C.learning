#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
	using namespace std;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

	return 0;
}

//string类的赋值，拼接，附加操作
//int main(void)
//{
//	using namespace std;
//
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "You can assign one string objict to another: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "You can assign a C-style string to a string object.\n";
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "You can contatenate strings: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "You can append strings.\n";
//	s1 += s2;
//	cout << "s1 += s2 yields s1 = " << s1 << endl;
//	s2 += " for a day";
//	cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	cout << "Enter a kind of feline: ";
//	cin >> charr1;
//	cout << "Enter another kind of feline: ";
//	cin >> str1;
//	cout << "Here are some feline:\n";
//	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//
//	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
//	cout << "The thind letter in " << str2 << " is " << str2[2] << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	cout << "What's year was your house built?\n";
//	int year;
//	(cin >> year).get();
//	//cin.get();	//将cin输入的换行符读取掉
//
//	cout << "What is its streets address?\n";
//	char address[80];
//	cin.getline(address, 80);
//	cout << "Year built: " << year << endl;
//	cout << "Address: " << address << endl;
//	cout << "Done！\n";
//
//	return 0;
//}

//get()成员函数的用法
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.get(name, ArSize);
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);
//
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << " .\n";
//
//	return 0;
//}


//getline成员函数的用法
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);
//	
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << " .\n";
//
//	return 0;
//}