//10.ʹ��peek()��ȷ���Ƿ��ȡ�����С����һ����ֻ�в������ݱ����뵽���������У�����ɾ���������ݡ�
#include <iostream>

const int SLEN = 10;

inline void eatline() { while (std::cin.get() != '\n') continue; }

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	char name[SLEN];
	char title[SLEN];
	cout << "Enter your name: ";
	cin.get(name, SLEN);
	if (cin.peek() != '\n')
		cout << "Sorry we only have enough room for " << name << endl;
	eatline();
	cout << "Dear " << name << ", enter your title.\n";
	cin.get(title, SLEN);
	if (cin.peek() != '\n')
		cout << "We were forced to truncate your title.\n";
	eatline();
	cout << "Name: " << name
		<< "\nTitle: " << title << endl;

	return 0;
}