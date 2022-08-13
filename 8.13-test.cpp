#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cctype>
//4.���ṩ���������ĺ�����ԭ�ͣ��Ӷ���ɸó���ע�⣬Ӧ������show()������ÿ����ʹ��Ĭ�ϲ������뾡����ʹ��
//const������set()ʹ��new�����㹻�Ŀռ����洢ָ�����ַ���������ʹ�õļ�������ƺ�ʵ����ʱʹ�����ơ�(���ܻ�
//�����޸�ͷ�ļ������ƣ�ɾ��using����ָ���ȡ�������õı�����)
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

//3.��дһ��������������һ��ָ��string�����������Ϊ������������string���������ת��Ϊ��д��Ϊ�˿���ʹ�ñ�
//6.4�����ĺ���toupper()��Ȼ���дһ��������ͨ��ʹ��һ��ѭ�������ܹ��ò�ͬ����������������������ó����
//����������£�
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
//	while (isalpha(u[i]) || u[i] == ' ' || isspace(u[i])) //������Ϊ�ַ����ո�������ʱ����ѭ��
//	{
//		if (islower(u[i]))	//����ַ���Сд�ַ�����֮ת��Ϊ��д�ַ�
//			u[i] = toupper(u[i]);
//		else
//			i++;
//	}
//}

//2.CandyBar�ṹ����3����Ա����һ����Ա�洢candy bar��Ʒ�����ƣ��ڶ�����Ա�洢candy bar������(������С��)��
//��������Ա�洢candy bar������(����)�����дһ��������ʹ��һ�������ĺ���������CandyBar�����á�charָ�롢
//double��int��Ϊ�������������3��ֵ������Ӧ�Ľṹ��Ա�����3��������Ĭ��ֵ�ֱ�Ϊ"Millennium Munch"��2.85
//��350�����⣬�ó��򻹰���һ����CandyBar������Ϊ����������ʾ�ṹ���ݵĺ������뾡����ʹ��const��
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

//1.��дͨ������һ������(�ַ����ĵ�ַ)������ӡ���ַ����ĺ�����Ȼ��������ṩ�˵ڶ�������(int����)���Ҹò���
//��Ϊ0����ú�����ӡ�ַ����Ĵ���Ϊ�ú����ı����ô���(ע�⣬�ַ����Ĵ�ӡ���������ڵڶ���������ֵ�������ں�
//�������õĴ���)���ǵģ�����һ���ǳ���Ц�ĺ��������������ܹ�ʹ�ñ��½��ܵ�һЩ��������һ���򵥵ĳ�����ʹ��
//�ú���������ʾ�ú�������ι����ġ�
//using namespace std;
//
//void display(const char* pt, int n = 1);
//
//int temp = 0;	//����tempΪȫ�ֱ������Լ����ӡ�����ĵ��ô���
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