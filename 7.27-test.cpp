#include <iostream>
#include <string>

//5.��Neutronia���������ҵ�λ��tvarp,��������˰�ļ��㷽ʽ���£�
//5000 tvarps: ����˰
//5000 - 15000 tvarps: 10%
//15001 - 35000 tvarps: 15%
//35000 tvarps����: 20%
//���磬����Ϊ38000 tvarpsʱ������˰Ϊ5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20����4600
//tvarps�����дһ������ʹ��ѭ����Ҫ���û��������룬����������˰�����û����븺���������ʱ��ѭ��������
//using namespace std;
//
//const double Rate1 = 0.0;
//const double Rate2 = 0.10;
//const double Rate3 = 0.15;
//const double Rate4 = 0.20;
//
//
//const int Break1 = 5000;
//const int Break2 = 15000;
//const int Break3 = 35000;
//
//const double Base1 = 5000 * Rate1;
//const double Base2 = (Base1 + ((Break2 - Break1) * Rate2));
//const double Base3 = (Base2 + ((Break3 - Break2) * Rate3));
//
//
//int main(void)
//{
//	int income;
//
//	cout << "Please enter income: ";
//
//	while (cin >> income)
//	{
//		if (income <= Break1)
//			cout << "income tax: " << Base1 << endl;
//		else if (income > Break1 && income <= Break2)
//			cout << "income tax: " << (income - Break1) * Rate2 << endl;
//		else if (income > Break2 && income <= Break3)
//			cout << "income tax: " << (Base2 + (income - Break2) * Rate3) << endl;
//		else
//			cout << "income tax: " << (Base3 + ((income - Break3) * Rate4)) << endl;
//
//		cout << "Please enter income(enter q to quit): ";
//
//	}
//
//	return 0;
//}

//4.����Benevolent Order of Programmer����BOP����ϣ����Ǳ����ͨ�������ߵ���ʵ������ͷ�λ�����BOP����
//���˽���(��)�����дһ�����򣬿���ʹ����ʵ������ͷ�Ρ������������Աƫ�����г���Ա����д�ó���ʱ����ʹ
//������Ľṹ��
//	//Benevolent Order of Programmers name structure
//	struct bop
//	{
//		char fullname[strsize];	
//		char title[strsize];	
//		char bopname[strsize];
//		int preference;
//	}
//�ó��򴴽�һ���������ṹ��ɵ�С�����飬�������ʼ��Ϊ�ʵ���ֵ�����⣬�ó���ʹ��һ��ѭ�������û�������
//��ѡ���н���ѡ��
//	a. display by name		b. display by title
//	c. display by bopname	d. display by preference
//	q. quit
//ע�⣬"display by preference"������ζ����ʾ��Ա��ƫ�ã�������ζ�Ÿ��ݳ�Ա��ƫ�����г���Ա�����磬���ƫ
//�ú�Ϊ1����ѡ��d����ʾ����Ա��ͷ�Ρ��ó��������������£�
//	Benevolent Order of Programmer Report
//	a. display by name		b. display by title
//	c. display by bopname	d. display by preference
//	q. quit
//	Enter your choice: a
//	Wimp Macho
//	Raki Rhodes
//	Celia Laiter
//	Hoppy Hipman
//	Pat Hand
//	Next choice: d
//	Wimp Macho
//	Junior Programmer
//	MIPS
//	Analyst Trainee
//	LOOPY
//	Next choice: q
//	Bye!
//using namespace std;
//
//const int strsize = 50;
//
//struct bop
//{
//	char fullname[strsize];	//real name
//	char title[strsize];	//job title
//	char bopname[strsize];	//secret BOP name
//	int preference;	// 0 = fullname, 1 = title, 2 = bopname 
//};
//
//int main(void)
//{
//	char ch;
//
//	bop bop_info[5] =
//	{
//		{"Wimp Macho", "doctor", "DR", 0},
//		{"Raki Rhodes", "Junior Programmer", "JP", 1},
//		{"Celia Laiter", "college", "MIPS", 2},
//		{"Hoppy Hipman", "Analyst", "AN", 1},
//		{"Pat Hand", "teacher", "LOOPY", 2}
//	};
//
//	cout << "Benvolen Order of Programmers Report\n";
//	cout << "a. display by name		b. display by title\n";
//	cout << "c. display by bopname  d. display by preference\n";
//	cout << "q. quit\n";
//
//	cout << "Enter your choice: ";
//	do
//	{
//		ch = cin.get();
//		cin.get();
//
//		switch (ch)
//		{
//		case 'a':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].fullname << endl;
//			break;
//		case 'b':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].title << endl;
//			break;
//		case 'c':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].bopname << endl;
//			break;
//		case 'd':
//			for (int i = 0; i < 5; i++)
//			{
//				switch (bop_info[i].preference)
//				{
//				case 0:
//					cout << bop_info[i].fullname << endl;
//					break;
//				case 1:
//					cout << bop_info[i].title << endl;
//					break;
//				case 2:
//					cout << bop_info[i].bopname << endl;
//					break;
//				}
//			}
//			break;
//		default:
//			cout << "error.\n";
//			
//		}
//
//		cout << "Next choice: ";
//
//	} while (ch != 'q');
//
//	return 0;
//}

//3.��дһ���˵���������ĳ��Ρ��ó�����ʾһ���ṩ4��ѡ��Ĳ˵�----ÿ��ѡ����һ����ĸ��ǡ�����û�ʹ����Ч
//ѡ��֮�����ĸ������Ӧ��������ʾ�û�����һ����Ч����ĸ��ֱ���û�������Ϊֹ��Ȼ�󣬸ó���ʹ��һ��switch
//��䣬�����û���ѡ��ִ��һ���򵥲������ó�������������£�
//	Please enter one of the following choices:
//	c) carnivore p) pianist
//	t) tree g) game
//	f
//	Please enter a c, p, t, or g: q
//	Please enter a c,p,t, or g: t
//	A mapple is a tree.
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Please enter one of the following choices:\n";
//	cout << "c) carnivore p) pianist\n";
//	cout << "t) tree g) game\n";
//
//	do
//	{
//		cin >> ch;
//
//		switch (ch)
//		{
//		case 'c':
//			cout << "A maple is a tree.\n";
//			break;
//		case 'p':
//			cout << "A mapple is a pianist.\n";
//			break;
//		case 't':
//			cout << "A mapple is a tree.\n";
//			break;
//		case 'g':
//			cout << "A mapple is a game.\n";
//		default:
//			cout << "Please enter a c, p, t, or, g: ";
//		}
//	} while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g');
//
//	return 0;
//}