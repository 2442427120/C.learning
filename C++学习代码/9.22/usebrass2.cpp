//usebrass1z�У�������ͨ�����󣨶�����ָ������ã����õģ�û��ʹ���鷽�������ԡ����³���ʹ�����鷽��������
//Ҫͬʱ����Brass��BrassPlus�˻��������ʹ��ͬһ������������Brass��BrassPlus���󣬽����а����������ǲ�����
//�ġ�����������Ԫ�����ͱ�����ͬ����Brass��BrassPlus�ǲ�ͬ�����͡�Ȼ�������Դ���ָ��Brass��ָ�����顣������
//ÿ��Ԫ�ص����Ͷ���ͬ��������ʹ�õ��ǹ��м̳�ģ�ͣ���ˣ�Brassָ��ȿ���ָ��Brass����Ҳ����ָ��BrassPlus
//������ˣ�����ʹ��һ����������ʾ�������͵Ķ�������Ƕ�̬�ԣ����������ʾ��������ӣ�
#include "brass.h"

const int CLIENTS = 4;

int main(void)
{
	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter client's name: ";
		getline(cin, temp);
		cout << "Enter client's account number: ";
		cin >> tempnum;
		cout << "Enter opening balance: $";
		cin >> tempbal;

		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "Enter either 1 or 2: ";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "Enter the overdraft limit: $";
			cin >> tmax;
			cout << "Enter the interest rate as a decimal fraction: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}
	cout << "Done.\n";

	return 0;
}