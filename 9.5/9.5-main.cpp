//��ʮ�±����ϰ��8���޸�
#include "list.h"

int main(void)
{
	Item num;
	List list;

	cout << "Please enter ten number.\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number:#" << i + 1 << endl;
		cin >> num;
		list.add(num);
	}
	list.visit(visit_items);

	return 0;
}

//��ʮ�±����ϰ��6���޸�
//#include <iostream>
//#include "Move.h"
//
//int main(void)
//{
//	double x, y;
//	Move move1(11.1, 22.2);
//	Move move2(10.0, 20.0);
//	Move move3;
//
//	move1.showmove();
//	move2.showmove();
//
//	cout << "Enter new x and y:\n";
//	cin >> x >> y;
//	cout << "after reset move1 content:\n";
//	move1.reset(x, y);
//	move1.showmove();
//
//	cout << "move3's content:\n";
//	move3 = move1.add(move2);
//	move3.showmove();
//
//	return 0;
//}

//��ʮ�±����ϰ��4���޸�
//#include "Sales.h"
//
//using namespace std;
//
//int main(void)
//{
//	using SALES::Sales;
//	double arr[8] = { 1.1, 3.3, 7.7, 5.5, 2.2, 4.4, 8.8, 6.6 };
//
//	Sales sales1(arr, 8);
//	Sales sales2;
//
//	cout << "Show sales1 and sales2 content:\n";
//	sales1.showSales(8);
//	sales2.showSales(4);
//
//	return 0;
//}

//��ʮ�±����ϰ��3���޸�
//#include "golf.h"
//
//using namespace std;
//
//int main(void)
//{
//	Golf golf1("NanoSmart", 5);
//	Golf golf2;
//
//	cout << "show golf1 and golf2 content:\n";
//	golf1.showgolf();
//	golf2.showgolf();
//
//	golf2.handicap_golf(15);
//	cout << "\nNow golf2's content:\n";
//	golf2.showgolf();
//
//	return 0;
//}

//��ʮ�±����ϰ��2���޸�
//#include "Person.h"
//
//int main(void)
//{
//	Person one;
//	Person two("Smythecraft");
//	Person three("Dimwiddy", "Sam");
//
//	one.show();
//	one.FormalShow();
//	cout << endl;
//
//	two.show();
//	two.FormalShow();
//	cout << endl;
//
//	three.show();
//	three.FormalShow();
//	cout << endl;
//
//	return 0;
//}

//8.���Խ����б���������������
// * �ɴ洢0����ĳ�����͵��б�
// * �ɴ������б�
// * �����б�����������
// * ��ȷ���б��Ƿ�Ϊ�գ�
// * ��ȷ���б��Ƿ�Ϊ����
// * �ɷ����б���ÿһ�������������ִ��ĳ�ֲ�����
// ���Կ���������б�ȷʵ�򵥣����磬������������ɾ�������
// �����һ��List������ʾ���ֳ������͡���Ӧ�ṩͷ�ļ�list.h��ʵ���ļ�list.cpp��ǰ�߰����ඨ�壬���߰�����
// ��ʵ�ַ���������Ӧ����һ����̵ĳ�����ʹ������ࡣ
// ���б�Ĺ淶�ܼ򵥣�����Ҫּ�ڼ���������ϰ������ѡ��ʹ�������������ʵ�ָ��б������нӿڲ�Ӧ����
// ��������ѡ��Ҳ����˵�����нӿڲ�Ӧ�������������ڵ�ָ��ȡ�Ӧʹ��ͨ�ø�������ﴴ���б����б������
// ������Ȳ��������ڷ����������Լ�ִ�в�����ͨ��Ӧʹ�ý�����ָ����Ϊ�����ĺ���������
//			void visit(void (*pf)(Item &));
// ���У�pfָ��һ����Item������Ϊ�����ĺ��������ǳ�Ա��������Item���б�������������͡�visit()�������ú���
// �����б��е�ÿ��������
//#include <iostream>
//#include "list.h"
//
//using namespace std;
//
//void display(Item& num);
//
//int main(void)
//{
//	List list1;
//	for (int i = 0; i < 16; i++)
//		list1.add(i);
//	if (list1.isfull())
//		cout << "List is already full\n";
//
//	List list2;
//	if (list2.isempty())
//		cout << "List is already empty\n";
//
//	list1.visit(display);
//
//	return 0;
//}
//
//void display(Item& num)
//{
//	cout << num << " ";
//}