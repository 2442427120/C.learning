//����һ��QueueTpģ�壬Ȼ����һ�������ڳ����嵥14.12�ĳ����д���һ��ָ��Worker��ָ�����(�μ������嵥14.10
// �Ķ���)����ʹ�øö�������������
#include <iostream>
#include "queuetp.h"
#include "workermi3.h"

const int SIZE = 5;

int main(void)
{
	QueueTp<Worker*> lolas[SIZE];	//ָ��Worker���ָ��Ķ���
	Worker* temp;	
	/*Worker* lolas[SIZE];*/

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
			<< "w: waiter s: singer t: singing waiter q: quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t or q: ";
			cin >> choice;
		}

		if (choice == 'q')
			break;

		switch (choice)
		{
		case 'w':
			/*lolas[ct] = new Waiter;*/
			temp = new Waiter;
			cin.get();	//choice������ڻ���������һ��'\n'����Ҫ��֮������
			temp->Set();
			lolas[ct].enqueue(temp);
			break;
		case 's':
			/*lolas[ct] = new Singer;*/
			temp = new Singer;
			cin.get();
			temp->Set();
			lolas[ct].enqueue(temp);
			break;
		case 't':
			/*lolas[ct] = new SingingWaiter;*/
			temp = new SingingWaiter;
			cin.get();	
			temp->Set();
			lolas[ct].enqueue(temp);
			break;
		}
		/*cin.get();*/
	}

	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		/*lolas[i]->Show();*/
		lolas[i].enqueue(temp);
		temp->Show();
	}
	//for (i = 0; i < ct; i++)
	//	delete lolas[i];
	cout << "Bye.\n";
	return 0;
}



// workmi.cpp -- multiple inheritance
// compile with workermi3.cpp
//#include <iostream>
//#include <cstring>
//#include "workermi3.h"
//#include"QueueTp.h"
//const int SIZE = 5;
//
//int main()
//{
//    using std::cin;
//    using std::cout;
//    using std::endl;
//    using std::strchr;
//
//    QueueTp<Worker*> lolas(SIZE);
//    Worker* temp;
//    int ct;
//
//    for (ct = 0; ct < SIZE; ct++)
//    {
//        char choice;
//        cout << "Enter the employee category:\n"
//            << "w: waiter  s: singer  "
//            << "t: singing waiter  q: quit\n";
//        cin >> choice;
//        while (strchr("wstq", choice) == NULL)
//        {
//            cout << "Please enter a w, s, t, or q: ";
//            cin >> choice;
//        }
//        if (choice == 'q')
//            break;
//        switch (choice)
//        {
//        case 'w':   temp = new Waiter;
//            temp->Set();
//            lolas.enqueue(temp);
//            break;
//        case 's':   temp = new Singer;
//            temp->Set();
//            lolas.enqueue(temp);
//            break;
//        case 't':   temp = new SingingWaiter;
//            temp->Set();
//            lolas.enqueue(temp);
//            break;
//        }
//        cin.get();
//    }
//
//    cout << "\nHere is your staff:\n";
//    int i;
//    for (i = 0; i < ct; i++)
//    {
//        cout << endl;
//        lolas.dequeue(temp);
//        temp->Show();
//        delete temp;
//    }
//
//    cout << "Bye.\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}
