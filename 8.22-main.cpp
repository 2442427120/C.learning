//�����ϰ4
//���������������ƿռ��дһ����3���ļ���ɵĳ���
//namespace SALES
// {
//		const int QUARTERS = 4;
//		struct Sales
//		{
//			double sales[QUARTERS];
//			double average;
//			double max;
//			double min;
//		};
// 
// //copies the lesser of 4 or n items from the array ar to the sales member of s and computers and 
// //stores the average, maximum, and miximum values of the entered items;remaining elements of sales
// //, if any, set to 0
// void setSales(Sales &s, const double ar[], int n);
// //gathers sales for 4 quarters interactively, stores them in the sales member of s and computers 
// //and stores the average, maximum, and miximum values  
// void setSales(Sales &s)
// //display all information in structure s
// void showSales(const Sales &s);
// }
// ��һ���ļ���һ��ͷ�ļ������а������ƿռ䣻�ڶ����ļ���һ��Դ�����ļ�������������ƿռ������չ������
// �������������Ķ��壻�������ļ���������Sales���󣬲�ʹ��setSales()�Ľ���ʽ�汾Ϊһ���ṹ�ṩֵ��Ȼ��
// ʹ��setSales()�ķǽ���ʽ�汾Ϊ��һ���ṹ���ṩֵ����������ʹ��showSales()����ʾ�������ṹ�������
//


//�����ϰ3
//������һ���ṹ����
// struct chaff
// {
//		char dross[20]; 
//		int slag;
// }
// ��дһ������ʹ�ö�λnew�������һ�������������ֽṹ���������һ���������С�Ȼ�󣬸��ṹ���Ա��ֵ��
// ����char���飬ʹ�ú���strcpy()������ʹ��һ��ѭ������ʾ���ݡ�һ�ַ�����������嵥9.10������һ����̬��
// ������������������һ�ַ�����ʹ�ó���new����������仺������
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int BUF = 512;
//
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//chaff buffer[2];
//
//void setchaff(chaff* pd, int n);
//void show(const chaff* pd, int n);
//
//int main(void)
//{
//	chaff* cpd = new(buffer) chaff[2];
//	setchaff(cpd, 2);
//	show(cpd, 2);
//
//	return 0;
//}
//
//void setchaff(chaff* pd, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Please enter string:";
//		cin.getline(pd[i].dross, 20);
//		cout << "Please enter a nubmer:";
//		cin >> pd[i].slag;
//		cin.get();
//		/*strcpy(pd[i].dross, "hello");
//		pd[i].slag = i + 1;*/
//	}
//}
//
//void show(const chaff* pd, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << pd[i].dross << ": " << pd[i].slag << endl;
//}

//�����ϰ2
//�޸ĳ����嵥9.9����string��������ַ����顣�������ó��򽫲�����Ҫ���������ַ����Ƿ������ͬʱ���Խ�
//�����ַ���ͬ�ַ����������бȽϣ����ж��Ƿ�Ϊ����
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int ArSize = 10;
//
//void strcount(const string str);
//
//int main(void)
//{
//	/*char input[ArSize];*/
//	string input;
//	char next;
//
//	cout << "Enter a line:\n";
//	//cin.get(input, ArSize);
//	getline(cin, input);
//	while (cin)
//	{
//		/*cin.get(next);*/
//		//�ڳ���ǰ�棬���next�ǻ��з�����˵��cin.get(input, ArSize)��ȡ�����У�����˵�����л����ַ�û�б�
//		//��ȡ���������ʹ��һ��ѭ�����������µ��ַ���
//		/*while (next != '\n')
//			cin.get(next);*/
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		/*cin.get(input, ArSize);*/
//		getline(cin, input);
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}
//
//void strcount(const string str)
//{
//	static int total = 0;
//
//	cout << "\"" << str << "\" contains ";
//	total += str.size();
//
//	cout << str.size() << " characters\n";
//	cout << total << " characters total\n";
//}

//�����ϰ1
//������һ��ͷ�ļ���
////golf.h -- for pe9-1.cpp

//const int Len = 40;
//struct golf
//{
// char fullname[Len];
// int handicap;
// };
// 
// //non-interactive version:
// //function sets golf structure to provided name, handicap using values passed as arguments to the 
// //function 
// void setgolf(golf& g, const char* name, int hc);
// 
// //interactive version:
// //function solicits name and handicap from user and sets the mumber of g to the values entered return 1
// // if name is entered, 0 if name is empty string
// int setgolf(golf &g);
// 
// //function resets handicap to new value
// void handicap(golf& g, int hc);
// 
// //function display contents of golf structurs
// void showgolf(const golf &g);
// ע�⵽setgolf()���������أ���������ʹ�õ�һ���汾��
// golf ann
// setgolf(ann, "Ann Birdfree", 24);
// �������������ṩ�˴洢��ann�ṹ�е���Ϣ����������ʹ����ڶ����汾��
// golf andy
// setgolf(andy);
// ������������ʾ�û����������͵ȼ����������Ǵ洢��andy�ṹ�С�����������ԣ����ǲ�һ�����룩���ڲ�ʹ�õ�һ
// ���汾��
// �������ͷ�ļ�������һ�����ļ��������е�һ���ļ���Ϊgolf.cpp�����ṩ����ͷ�ļ��е�ԭ��ƥ��ĺ�������
// ����һ���ļ�Ӧ����main()������ʾԭ�ͺ������������ԡ����磬����һ�����û������ѭ������ʹ�������������
// ���һ����golf�ṹ��ɵ����飬���鱻�������û����߶���ѡ�ֵ���������Ϊ���ַ���ʱ��ѭ����������main()��
// ��ֻʹ��ͷ�ļ���ԭ�ͻ��ĺ���������golf�ṹ��
//#define _CRT_SECURE_NO_WARNINGS
//#include "golf822.h"
//
//using namespace std;
//
//int main(void)
//{
//	int flag = 1;
//	int count = 0;
//	golf ann;
//	golf andy;
//	golf info[10];
//
//	setgolf(ann, "Ann Birdfree", 24);
//	handicap(ann, 25);
//
//	while (flag != 0 && count < 10)
//	{
//		std::cout << "Please enter related content(enter enpty string to quit):\n";
//		flag = setgolf(andy);
//		strcpy(info[count].fullname, andy.fullname);
//		info[count].handicap = andy.handicap;
//		count++;
//	}
//
//	std::cout << endl;
//	showgolf(ann);
//
//	return 0;
//}

//���ƿռ��ʾ������ʾ��˵�������ƿռ��һЩ���ԡ�
//#include <iostream>
//#include "main822.h"
//
//void other(void);
//void another(void);
//
//int main(void)
//{
//	using debts::Debt;
//	using debts::showDebt;
//
//	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
//	showDebt(golf);
//	other();
//	another();
//
//	return 0;
//}
//
//void other(void)
//{
//	using std::cout;
//	using std::endl;
//	using namespace debts;
//
//	Person dg = { "Doodles", "Glister" };
//	showPerson(dg);
//	cout << endl;
//	Debt zippy[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		getDebt(zippy[i]);
//
//	for (i = 0; i < 3; i++)
//		showDebt(zippy[i]);
//	cout << "Total debt: $" << sumDebt(zippy, 3) << endl;
//
//	return;
//}
//
//void another(void)
//{
//	using pers::Person;
//
//	Person collector = { "Milo", "Rightshift" };
//	pers::showPerson(collector);
//	std::cout << std::endl;
//}