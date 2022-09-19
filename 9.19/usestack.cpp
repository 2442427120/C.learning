// 4.�뿴��������嵥10.10�����Stock��ı���
// //stack.h -- class declaration for the stack ADT
// typedef unsigned long Item;
// class Stack
// {
//	private:
//		enum {MAX = 10}; //	constant specific to class
//		Item* pitems;	//holds stack items
//		int size;		//number of elements in stack
//		int top;		// index for top stack item
//	public:
//		Stack(int n = MAX);
//		Stack(const Stack& st);
//		~Stack();
//		bool isempty() const;
//		bool isfull() const;
//		//push() return false if stack already is full, true otherwise
//		bool push(const Item& item);
//		//pop() return false if stack already is empty, true otherwise
//		bool pop(Item& item);
//		Stack& operator=(const Stack& st);
// }
// ����˽�г�Ա�����ģ������ʹ�ö�̬�ڴ���������������ջ���������±�д����������Ӧ�����µı�ʾ�������
// дһ����������ʾ���еķ������������ƹ��캯���͸�ֵ�������
//#include "stack.h"
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	Item temp;
//	char ch;
//	Stack stacks(8);
//
//	cout << "���롮A����ջ������'P'��ջ������'Q'ֹͣ:";
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			if (stacks.isfull())
//				cout << "ջ��\n";
//			else
//			{
//				cout << "������Ҫ��ӵ�Ԫ��:";
//				cin >> temp;
//				stacks.push(temp);
//			}
//			break;
//		case 'p':
//		case 'P':
//			if (stacks.isempty())
//				cout << "ջ��\n";
//			else
//			{
//				stacks.pop(temp);
//				cout << "��ջ��Ԫ����:" << temp << endl;
//			}
//			break;
//		default:
//			cout << "�밴�涨����\n";
//		}
//		cout << "���롮A����ջ������'P'��ջ������'Q'ֹͣ:";
//	}
//
//	cout << "��ջ��Ԫ�ؿ�������һ��ջ������:\n";
//	Stack stacks1 = stacks;
//	while (!stacks1.isempty())
//	{
//		stacks1.pop(temp);
//		cout << "��ջ��Ԫ���ǣ�" << temp << endl;
//	}
//	cout << "Bye\n";
//
//	return 0;
//}