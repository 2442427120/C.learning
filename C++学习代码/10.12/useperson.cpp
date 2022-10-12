//4.Person类保存人的名和姓。除构造函数外，它还有Show()方法，用于显式名和姓。Gunslinger类以Person类为虚基类
//派生而来，它包含一个Draw()成员，该方法返回一个double值，表示抢手的拔枪时间。这个类还包含一个int成员，表示
//枪手枪上的刻痕数。最后，这个类还包含一个Show()函数，用于显示所有这些信息。
//PokerPlayer类似以Person类为虚基类派生而来，它包含一个Draw()成员，该函数返回一个1-52的随机数，用于表示扑克
//牌的值(也可以定义一个Card类，其中包含花色和面值成员，然后让Draw()返回一个Card()对象)。PokerPlayer类使用
//Person类的Show()函数。BadDude类从Gunlinger和PokerPlayer类公有派生而。它包含Gdraw()成员(返回坏蛋拔枪时间)
//和Ccard()成员(返回下一张扑克牌)，另外还有一个合适的Show()函数。请定义这些类和方法以及其他必要的方法(用于
//设置对象的值的方法)，并使用一个类似于程序清单14.12的简单程序对它们进行测试。
#include "person.h"

const int SIZE = 5;

int main(void)
{
	srand((unsigned int)time(0));

	Person* lolas[SIZE];
	int ct;

	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter your choice:\n";
		cout << "g: Gunslinger	p: PokerPlayer	b: BadDude	q: quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter g, p, b or q: ";
			cin >> choice;
		}

		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'g':
			lolas[ct] = new Gunslinger;
			break;
		case 'p':
			lolas[ct] = new PokerPlayer;
			break;
		case 'b':
			lolas[ct] = new BadDude;
			break;
		}

		cin.get();
		lolas[ct]->Set();
	}

	cout << "\nHere is information:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	cout << "Bye.\n";

	BadDude temp("wu", "hao", 5, 6.6);
	temp.Show();
	cout << "Card number: " << temp.Ccard();

	return 0;
}