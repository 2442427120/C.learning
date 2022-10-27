//演示capacity()和reserve()方法
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string empty;
	string small = "bit";
	string larger = "Elephants are a girl's best friend";

	cout << "Size:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;

	cout << "Capacities:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;

	empty.reserve(50);
	cout << "Capacities after empty.reserve(50): " << empty.capacity() << endl;

	return 0;
}