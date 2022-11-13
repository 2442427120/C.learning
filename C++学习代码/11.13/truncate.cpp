//10.使用peek()来确定是否读取了整行。如果一行中只有部分内容被加入到输入数组中，程序将删除余下内容。
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