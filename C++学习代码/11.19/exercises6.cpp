//6.考虑第14章的编程练习5中的类定义。完成下面的任务。
// 编写一个程序，它使用标准C++ I/O，文件I/O以及14章的编程练习5中定义的employee、manager、fink和highfink类型
// 的数据。该程序应包含程序清单17.17中的代码行，即允许用户将新数据添加到文件中。该程序首次被运行时，将要求
// 用户输入数据，然后显示所有的数据，并将这些信息保存到一个文件中。当该程序再次被运行时，将首先显示文件中的
// 数据，然后让用户添加数据，并显示所有的数据。差别之一是，应通过一个指向employee类型的指针数组来处理数据。
// 这样，指针可以指向employee对象，也可以指向employee派生出来的其他三种对象中的任意一种。使数组减小有助于检
// 查程序，例如，您可能将数据限定为最多包含10个元素：
// const int MAX = 10  // no more than 10 objects
// ...
// employee *pc[MAX];
// 为通过键盘输入，程序应使用一个菜单，让用户选择要创建的对象类型。菜单将使用一个switch，以使用new来创建指
// 定类型的对象，并将它的地址赋给pc数组中的一个指针。然后该对象可以使用虚函数setall()来提示用户输入相应的
// 数据：
// pc[i]->setall(); //invokes function corresponding type of object
// 为将数据保存到文件中，应设计一个虚函数writeall()：
// for (i = 0; i < index; i++)
//		pc[i]->writeall(fout)	//fout ofstream connected to output file
// 注意：对这个练习，应使用文本I/O，而不是二进制I/0(遗憾的是，虚对象包含指向虚函数指针表的指针，而write()将
// 把这种信息复制到文件中。使用read()读取文件内容，以填充对象时，函数指针值为乱码，这样扰乱虚函数的行为)。
// 可使用换行符将字段分隔开，这样在输入时将很容易识别各个字段。也可以使用二进制I/O，但不能将对象作为一个整
// 体写入，而应该提供分别对每个类成员应用write()和read()的类方法。这样，程序将只把所需的数据保存到文件中。
// 比较难处理的部分是使用文件恢复数据。问题在于：程序如何才能知道接下来要恢复的项目是employee对象、manager
// 对象、fink对象还是highfink对象？一种方法是，在对象的数据写入文件时，在数据前面加上一个指示对象类型的整数
// 。这样，在文件输入时，程序便可以读取该整数，并使用switch语句创建一个适当的对象来接收数据：
//	enum classkind {Employee, Manager, Fink, Highfink};	//in class header
//	...
//	int classtype;
//	while ((fin >> classtype).get(ch))	//newline separates in from data
//	{
//		switch(classtype)
//		{
//		case Employee : 
//					pc[i] = new employee;
//					: break;
// 然后便可以使用指针调用虚函数getall()来读取信息：
 //pc[i++]->getall();
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "abstr_emp.h"

using namespace std;

const int MAX = 10;
const char* file = "exercises6.txt";

int main(void)
{
	abstr_emp* pc[MAX];
	char ch;
	ifstream fin;
	fin.open(file, ios::in);
	int classtype;
	int size = 0;

	if (!fin.is_open())
	{
		exit(0);
	}

	cout << "Here are the current content of the " << file << " file:\n";
	while (fin >> classtype && size < MAX)
	{
		fin.get();
		switch (classtype)
		{
		case Employee:
			pc[size] = new employee;
			break;
		case Manager:
			pc[size] = new manager;
			break;
		case Fink:
			pc[size] = new fink;
			break;
		case Highfink:
			pc[size] = new highfink;
			break;
		default:
			cerr << "Error\n";
			break;
		}
		pc[size]->GetAll(fin);
		pc[size]->ShowAll();
		size++;
	}
	fin.close();

	ofstream fout;
	fout.open(file, ios::out | ios::app);
	if (!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output.\n";
		exit(0);
	}

	char choice;
	size = 0;
	cout << "Enter your choice:\n";
	cout << "e: created employee object; m: created manager object;\n"
		<< "f: created fink object; h: created highfink object;\n"
		<< "q: quit\n";
	while (cin >> choice && size < MAX && choice != 'q')
	{
		switch (choice)
		{
		case 'e':
			pc[size] = new employee;
			break;
		case 'm':
			pc[size] = new manager;
			break;
		case 'f':
			pc[size] = new fink;
			break;
		case 'h':
			pc[size] = new highfink;
			break;
		default:
			cerr << "Error";
		}
		cin.get();
		pc[size]->SetAll();
		size++;
		cout << "Enter your choice:\n";
	}


	for (int i = 0; i < size; i++)
		pc[i]->writeall(fout);
	fout.close();

	fin.clear();
	fin.open(file);
	if (!fin.is_open())
	{
		exit(0);
	}
	cout << "Here are the current content of the " << file << " file:\n";
	while (fin >> classtype && size < MAX)
	{
		fin.get();
		switch (classtype)
		{
		case Employee:
			pc[size] = new employee;
			break;
		case Manager:
			pc[size] = new manager;
			break;
		case Fink:
			pc[size] = new fink;
			break;
		case Highfink:
			pc[size] = new highfink;
			break;
		default:
			cerr << "Error\n";
			break;
		}
		pc[size]->GetAll(fin);
		pc[size]->ShowAll();
		size++;
	}
	fin.close();

	return 0;
}


//#include<iostream>
//#include <fstream>
//#include <cstdlib>
//#include<string>
//#include"abstr_emp.h"
//using namespace std;
//
//const int MAX = 10;
//const string file = "exercises6.txt";
//
//int main()
//{
//    abstr_emp* pc[MAX];
//    int kind;
//    int size = 0; //当前个数
//    char choice;
//    ifstream ifs(file, ios::in);
//
//    if (!ifs.is_open())
//    {
//        cout << "Can't open the file " << file << "!\n";
//        exit(EXIT_FAILURE);
//    }
//    cout << "Here are the contents in file " << file << ":\n";
//    while (ifs >> kind && size < MAX)
//    {
//        ifs.get();
//        switch (kind)
//        {
//        case Employee:
//            pc[size] = new employee;
//            break;
//        case Manager:
//            pc[size] = new manager;
//            break;
//        case Fink:
//            pc[size] = new fink;
//            break;
//        case Highfink:
//            pc[size] = new highfink;
//            break;
//        default:
//            cout << "Error!\n";
//            break;
//        }
//        pc[size]->GetAll(ifs);
//        pc[size]->ShowAll();
//        size++;
//    }
//    ifs.close();
//    cout << "-----------------------------\n";
//
//    size = 0;
//    ofstream ofs(file, ios::out | ios::app);
//    if (!ofs.is_open())
//    {
//        cout << "Can't open the file " << file << "!\n";
//        exit(EXIT_FAILURE);
//    }
//    cout << "Choice the type of object to create(q to quit):\n"
//        << "a.employee \t b.manager\t c.fink \t d.highfink\n";
//    while (cin >> choice && choice != 'q' && size < MAX)
//    {
//        cin.get();
//        switch (choice)
//        {
//        case 'a':
//            pc[size] = new employee;
//            break;
//        case 'b':
//            pc[size] = new manager;
//            break;
//        case 'c':
//            pc[size] = new fink;
//            break;
//        case 'd':
//            pc[size] = new highfink;
//            break;
//        default:
//            cout << "Error!\n";
//            break;
//        }
//        pc[size]->SetAll();
//        cout << "Choice the type of object to create(q to quit):\n"
//            << "a.employee \t b.manager\t c.fink \t d.highfink\n";
//        size++;
//    }
//
//    for (int i = 0; i < size; i++)
//        pc[i]->WriteAll(ofs);
//    ofs.close();
//    cout << "-----------------------------\n";
//
//    ifs.clear();
//    ifs.open(file, ios::in);
//    if (!ifs.is_open())
//    {
//        cout << "Can't open the file " << file << "!\n";
//        exit(EXIT_FAILURE);
//    }
//    cout << "Here are the contents in file " << file << ":\n";
//    size = 0;
//    kind = 0;
//    while (ifs >> kind && size < MAX)
//    {
//        ifs.get();
//        switch (kind)
//        {
//        case Employee:
//            pc[size] = new employee;
//            break;
//        case Manager:
//            pc[size] = new manager;
//            break;
//        case Fink:
//            pc[size] = new fink;
//            break;
//        case Highfink:
//            pc[size] = new highfink;
//            break;
//        default:
//            cout << "Error!\n";
//            break;
//        }
//        pc[size]->GetAll(ifs);
//        pc[size]->ShowAll();
//        size++;
//    }
//    ifs.close();
//
//    return 0;
//}
