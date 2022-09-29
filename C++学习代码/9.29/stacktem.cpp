//类模板的定义(必须将所有模板信息放在一个头文件中，并在要使用这些模板的文件中包含该头文件)以及如何实例化
//类模板
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