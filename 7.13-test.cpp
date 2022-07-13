#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	using namespace std;

	inflatable guests[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";

	return 0;
}

//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	inflatable bouquet =
//	{
//		"sunflowers",
//		0.20,
//		12.49
//	};
//
//	inflatable choice;
//	cout << "bouquet: " << bouquet.name << " for $";
//	cout << bouquet.price << endl;
//
//	choice = bouquet;
//	cout << "choice: " << choice.name << " for $";
//	cout << choice.price << endl;
//
//	return 0;
//}

//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	inflatable guest =
//	{
//		"Glorious Gloria",
//		1.88,
//		29.99
//	};
//
//	inflatable pal =
//	{
//		"Audacious Arthur",
//		3.12,
//		32.99
//	};
//
//	cout << "Expand your guest list with " << guest.name;
//	cout << " and " << pal.name << "!\n";
//
//	cout << "You can have both for $";
//	cout << guest.price + pal.price  << "!\n";
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char charr[20];
//	string str;
//
//	cout << "Length of string in charr before input: " << strlen(charr) << endl;
//	cout << "Length of string in str before input: " << str.size() << endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 20);
//	cout << "You entered: " << charr << endl;
//	cout << "Enter another line of text:\n";
//	getline(cin, str);	//不是iostream类的一个方法，就是一个函数 - 从cin中读取放到str中
//	cout << "You entered: " << str << endl;
//	cout << "Length of string in charr after input: " << strlen(charr) << endl;
//	cout << "Length of string in str after input: " << str.size() <<endl;
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
//	str1 = str2;
//	strcpy(charr1, charr2);
//
//	str1 += " paste";
//	strcat(charr1, " juice");
//
//	int len1 = str1.size();
//	int len2 = strlen(charr1);
//
//	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
//	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
//
//	return 0;
//}