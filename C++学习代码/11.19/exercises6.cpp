//6.���ǵ�14�µı����ϰ5�е��ඨ�塣������������
// ��дһ��������ʹ�ñ�׼C++ I/O���ļ�I/O�Լ�14�µı����ϰ5�ж����employee��manager��fink��highfink����
// �����ݡ��ó���Ӧ���������嵥17.17�еĴ����У��������û�����������ӵ��ļ��С��ó����״α�����ʱ����Ҫ��
// �û��������ݣ�Ȼ����ʾ���е����ݣ�������Щ��Ϣ���浽һ���ļ��С����ó����ٴα�����ʱ����������ʾ�ļ��е�
// ���ݣ�Ȼ�����û�������ݣ�����ʾ���е����ݡ����֮һ�ǣ�Ӧͨ��һ��ָ��employee���͵�ָ���������������ݡ�
// ������ָ�����ָ��employee����Ҳ����ָ��employee�����������������ֶ����е�����һ�֡�ʹ�����С�����ڼ�
// ��������磬�����ܽ������޶�Ϊ������10��Ԫ�أ�
// const int MAX = 10  // no more than 10 objects
// ...
// employee *pc[MAX];
// Ϊͨ���������룬����Ӧʹ��һ���˵������û�ѡ��Ҫ�����Ķ������͡��˵���ʹ��һ��switch����ʹ��new������ָ
// �����͵Ķ��󣬲������ĵ�ַ����pc�����е�һ��ָ�롣Ȼ��ö������ʹ���麯��setall()����ʾ�û�������Ӧ��
// ���ݣ�
// pc[i]->setall(); //invokes function corresponding type of object
// Ϊ�����ݱ��浽�ļ��У�Ӧ���һ���麯��writeall()��
// for (i = 0; i < index; i++)
//		pc[i]->writeall(fout)	//fout ofstream connected to output file
// ע�⣺�������ϰ��Ӧʹ���ı�I/O�������Ƕ�����I/0(�ź����ǣ���������ָ���麯��ָ����ָ�룬��write()��
// ��������Ϣ���Ƶ��ļ��С�ʹ��read()��ȡ�ļ����ݣ���������ʱ������ָ��ֵΪ���룬���������麯������Ϊ)��
// ��ʹ�û��з����ֶηָ���������������ʱ��������ʶ������ֶΡ�Ҳ����ʹ�ö�����I/O�������ܽ�������Ϊһ����
// ��д�룬��Ӧ���ṩ�ֱ��ÿ�����ԱӦ��write()��read()���෽��������������ֻ����������ݱ��浽�ļ��С�
// �Ƚ��Ѵ���Ĳ�����ʹ���ļ��ָ����ݡ��������ڣ�������β���֪��������Ҫ�ָ�����Ŀ��employee����manager
// ����fink������highfink����һ�ַ����ǣ��ڶ��������д���ļ�ʱ��������ǰ�����һ��ָʾ�������͵�����
// �����������ļ�����ʱ���������Զ�ȡ����������ʹ��switch��䴴��һ���ʵ��Ķ������������ݣ�
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
// Ȼ������ʹ��ָ������麯��getall()����ȡ��Ϣ��
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
//    int size = 0; //��ǰ����
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
