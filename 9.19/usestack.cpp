// 4.请看下面程序清单10.10定义的Stock类的变量
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
// 正如私有成员表明的，这个类使用动态内存分配的数组来保存栈顶。请重新编写方法，以适应这种新的表示法，请编
// 写一个程序来演示所有的方法，包括复制构造函数和赋值运算符。
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
//	cout << "输入‘A’入栈，输入'P'出栈，输入'Q'停止:";
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			if (stacks.isfull())
//				cout << "栈满\n";
//			else
//			{
//				cout << "请输入要入队的元素:";
//				cin >> temp;
//				stacks.push(temp);
//			}
//			break;
//		case 'p':
//		case 'P':
//			if (stacks.isempty())
//				cout << "栈空\n";
//			else
//			{
//				stacks.pop(temp);
//				cout << "出栈的元素是:" << temp << endl;
//			}
//			break;
//		default:
//			cout << "请按规定输入\n";
//		}
//		cout << "输入‘A’入栈，输入'P'出栈，输入'Q'停止:";
//	}
//
//	cout << "将栈中元素拷贝到另一个栈对象中:\n";
//	Stack stacks1 = stacks;
//	while (!stacks1.isempty())
//	{
//		stacks1.pop(temp);
//		cout << "出栈的元素是：" << temp << endl;
//	}
//	cout << "Bye\n";
//
//	return 0;
//}