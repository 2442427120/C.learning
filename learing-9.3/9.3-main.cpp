//3.��ɵھ��±����ϰ1����Ҫ����ȷ��golf�������滻����Ĵ��롣�ô����ʲ����Ĺ��캯���滻setgolf(golf &, 
// const char*, int),���ṩ��ʼֵ������setgolf()�Ľ����汾����Ҫ�ù��캯����ʵ���������磬setgolf�Ĵ���Ӧ
// �û�����ݣ������ݴ��ݸ����캯��������һ����ʱ���󣬲����丳�����ö��󣬼�*this����
#include <iostream>
#include "golf.h"

const int Arsize = 4;

int main(void)
{
	int i = 0;
	int count = 0;

	Golf ann = { "Ann Birdfree", 24 };
	ann.showgolf();
	ann.handicap(38);
	ann.showgolf();

	Golf andy;
	andy.setgolf();
	andy.showgolf();

	Golf team[Arsize];
	while (i < Arsize && team[i].setgolf())
	{
		i++;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		team[i].showgolf();
	}
	std::cout << std::endl;

	return 0;
}

//2.������һ���ǳ��򵥵��ඨ��
//class Person
// {
//	private:
//		static const int LIMIT = 25;
//		string lname;	//Person's last name
//		char fname[LIMIT];	//Person's first name
//	public:
//		Person() { lname = ""; fname[0] = '\0'; }	//#1
//		Person(const string& ln, const char *fn = "Heyyou");	//#2
//		//the following methods display lname and fname
//		void show() const;	//firstname lastname format
//		void FormalShow() const; //	lastname, first format
// };
// ��ʹ����һ��string�����һ���ַ����飬�����ܹ��Ƚ����ǵ��÷������ṩδ����ķ����Ĵ��룬�����������
// ʵ�֡��ٱ�дһ��ʹ�������ĳ�����ʹ�������ֿ��ܵĹ��캯�����ã�û�в�����һ�������������������Լ���
// ����ʾ������������һ��ʹ����Щ���캯�����������ӣ�
// Person one;	//use default constructor
// Person two("Smythecraft");	//use #2 with one default argument
// Person three("Dimwiddy", "Sam");	//use #2,no defaults
// one.show();
// cout << endl;
// one.FormalShow();
// etc.for two and three
//#include <iostream>
//#include "Person.h"
//
//int main(void)
//{
//    using std::cout;
//    using std::endl;
//
//	Person one;	//use default constructor
//    Person two("Smythecraft");	//use #2 with one default argument
//    Person three("Dimwiddy", "Sam");	//use #2,no defaults
//
//    one.show();
//    one.FormalShow();
//    cout << endl;
//
//    two.show();
//    two.FormalShow();
//    cout << endl;
//
//    three.show();
//    three.FormalShow();
//    cout << endl;
//
//	return 0;
//}

//1.Ϊ��ϰ��5���������ṩ�������壬����дһ��С��������ʾ���п�����
//#include <iostream>
//#include "BankAccount.h"
//
//int main(void)
//{
//	BankAccount bankaccount = { "xiaoxiao", "12580", 15000};
//	bankaccount.show();
//
//	//���˻��д�Ǯ
//	bankaccount.deposit(10000);
//	bankaccount.show();
//
//	//���˻���ȡǮ
//	bankaccount.withdraw(5000);
//	bankaccount.show();
//
//	return 0;
//}


//����stack�� - �ó���ģ�����ۻ�Ա����Ϊ--ʹ��ջ�ĺ���ȳ���ʽ���ӹ����������濪ʼ�����ﶩ��
//#include <cctype>
//using namespace std;
//
//int main(void)
//{
//	char ch;
//	unsigned long po;
//	Stack st;
//
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO, or Q to quit.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//
//		if (!isalpha(ch))
//		{
//			cout << "\a";
//			continue;
//		}
//
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			cout << "Enter a PO number to add: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "Stack already full\n";
//			else
//				st.push(po);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "Stack already empty\n";
//			else
//			{
//				st.pop(po);
//				cout << "PO #" << po << " popped\n";
//			}
//			break;
//		}
//
//		cout << "Please enter A to add a purchase order,\n"
//			<< "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//
//	return 0;
//}

//�ó���Ը�����Ԫ�ؽ��г�ʼ������ʾ���ǵ����ݣ����ҳ���ЩԪ������ֵ��ߵ�һ��������topval()ÿ��ֵ�������
//������˳���ʹ��forѭ��������������顣���⣬��ʹ��stockָ��������ֵ��ߵ�Ԫ�ء�
//const int STKS = 4;
//
//int main(void)
//{
//	//create an array of initialized objects
//	Stock stocks[STKS] =
//	{
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Bojects", 200, 2.0),
//		Stock("Monolithis Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << "Stock holding:\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//		stocks[st].show();
//
//	//set pointer to first element
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = &top->topval(stocks[st]);
//
//	//now top points to the most valuable holding
//	std::cout << "\nMost valuable holding:\n";
//	top->show();
//
//	return 0;
//}

//thisָ����÷�
//int main(void)
//{
//	Stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	Stock top = stock1.topval(stock2);
//	top.show();
//
//	return 0;
//}