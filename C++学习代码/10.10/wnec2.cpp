#include "winec2.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : string(l), years_count(y)
{
	ArrayInt a(yr, y);	//��yr�����е�ǰy��Ԫ����������a��
	ArrayInt b(bot, y);	//��bot�����е�ǰy��Ԫ����������b��
	PairArray::operator=(PairArray(a, b));	
}

Wine::Wine(const char* l, int y) : string(l), years_count(y)
{
	ArrayInt a(y);
	ArrayInt b(y);
	PairArray::operator=(PairArray(a, b));
}

void Wine::GetBottles()
{
	ArrayInt yr(years_count);	//��ʱ�������洢�û��������ݣ�Ԫ�ظ���Ϊ�û��Զ���
	ArrayInt bot(years_count);	//��ʱ�������洢�û������ƿ����Ԫ�ظ���Ϊ�û��Զ���

	cout << "Enter " << (string&)*this << " data for " << years_count << " year(s):\n";
	for (int i = 0; i < years_count; i++)
	{
		cout << "Enter years: ";
		cin >> yr[i];
		cout << "Enter bottles for that year: ";
		cin >> bot[i];
	}

	PairArray::operator=(PairArray(yr, bot)); //���ù��캯��Ϊpa����ֵ
}

string& Wine::Lable()
{
	return (string&)*this;
}

void Wine::Show() const
{
	cout << "Wine: " << (const string&)*this << endl;
	cout << "\tYear\tBottles\n";
	for (int i = 0; i < years_count; i++)
	{
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}

int Wine::sum()
{
	int total = 0;

	for (int i = 0; i < years_count; i++)
	{
		total += PairArray::second()[i];
	}

	return total;
}