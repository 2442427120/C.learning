#include <iostream>
#include <fstream>
#include <cctype>

//9.完成编程练习6，但从文件中读取所需的信息。该文件的第一项为捐款人数，余下的内容应为成对的行。在每一对
//中，第一行为捐款人姓名，第二行为捐款数额。即该文件类似于下面:
//	4
//	Sam Stone
//	2000
//	Freida Flass
//	100500
//	Tammy Tubbs
//	5000
//	Rich Raptor
//	55000
using namespace std;

int main(void)
{
	ifstream inFile;
	inFile.open("donor.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file ""donor.txt""\n";
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	char ch[100];

	inFile.getline(ch, 100);
	while (inFile.good())
	{
		cout << ch;
		inFile.getline(ch, 100);
	}

	inFile.close();

	return 0;
}

//8.编写一个程序，它打开一个文本文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个
//字符。
//using namespace std;
//
//int main(void)
//{
//	int count = 0;
//	ifstream inFile;	//创建ifstream对象
//
//	inFile.open("character.txt");	//打开相对路径下的文件"character.txt"
//	if (!inFile.is_open())	//判断是否打开成功
//	{
//		cout << "Could not open the file ""character.txt""\n";
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	char character;
//
//	inFile >> character;	//从文件中第一个字符开始读取
//	while (inFile.good())	//直到到达文件末尾停止
//	{
//		if (isalpha(character))
//			++count;
//		inFile >> character;
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unkonwn reason.\n";
//
//	if (0 == count)
//		cout << "Not data process.\n";
//	else
//		cout << count << " characters in total.\n" << endl;
//
//	inFile.close();
//
//	return 0;
//}