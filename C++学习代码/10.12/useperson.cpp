//4.Person�ౣ���˵������ա������캯���⣬������Show()������������ʽ�����ա�Gunslinger����Person��Ϊ�����
//����������������һ��Draw()��Ա���÷�������һ��doubleֵ����ʾ���ֵİ�ǹʱ�䡣����໹����һ��int��Ա����ʾ
//ǹ��ǹ�ϵĿ̺������������໹����һ��Show()������������ʾ������Щ��Ϣ��
//PokerPlayer������Person��Ϊ���������������������һ��Draw()��Ա���ú�������һ��1-52������������ڱ�ʾ�˿�
//�Ƶ�ֵ(Ҳ���Զ���һ��Card�࣬���а�����ɫ����ֵ��Ա��Ȼ����Draw()����һ��Card()����)��PokerPlayer��ʹ��
//Person���Show()������BadDude���Gunlinger��PokerPlayer�๫����������������Gdraw()��Ա(���ػ�����ǹʱ��)
//��Ccard()��Ա(������һ���˿���)�����⻹��һ�����ʵ�Show()�������붨����Щ��ͷ����Լ�������Ҫ�ķ���(����
//���ö����ֵ�ķ���)����ʹ��һ�������ڳ����嵥14.12�ļ򵥳�������ǽ��в��ԡ�
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