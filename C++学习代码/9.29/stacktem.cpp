//��ģ��Ķ���(���뽫����ģ����Ϣ����һ��ͷ�ļ��У�����Ҫʹ����Щģ����ļ��а�����ͷ�ļ�)�Լ����ʵ����
//��ģ��
#include "stacktp.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
	Stack<string> st;
	char ch;
	string po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n');

		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'a':
		case 'A':
			cout << "Enter a PO number of add: ";
			cin >> po;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'p':
		case 'P':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO #" << po << " popped\n";
				break;
			}
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or q to quit.\n";
	}
	cout << "Bye.\n";

	return 0;
}