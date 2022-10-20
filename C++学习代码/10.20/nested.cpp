//2.嵌套循环的演示，使用队列模板，将原来队列里的结构体改为类
#include <iostream>
#include <string>
#include "queuetp.h"

using namespace std;

int main(void)
{
	QueueTp<string> cs(5);
	string temp;

	while (!cs.isfull())
	{
		cout << "Please enter your name. You will be served in the order of arrival.\n"
			"name:";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "The queue is full. Processing begins!\n";

	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << "Now processing " << temp << "...\n";
	}

	return 0;
}