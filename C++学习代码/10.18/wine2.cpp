#include "winec2.h"

//˽�м̳У���ʹ�û�������������Ķ�����г�ʼ��
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
	: string(l), years_count(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
	//ArrayInt a(yr, y);	//��yr�����е�ǰy��Ԫ����������a��
	//ArrayInt b(bot, y);	//��bot�����е�ǰy��Ԫ����������b��
	//pa = PairArray(a, b);	//����Pair��Ĺ��캯��Ϊpa��ʼ��
}

Wine::Wine(const char* l, int y) : string(l), years_count(y), PairArray(ArrayInt(y), ArrayInt(y))
{
	/*ArrayInt a(y);
	ArrayInt b(y);
	pa = PairArray(a, b);*/
}

void Wine::GetBottles()
{
	//ArrayInt yr(years_count);	//��ʱ�������洢�û��������ݣ�Ԫ�ظ���Ϊ�û��Զ���
	//ArrayInt bot(years_count);	//��ʱ�������洢�û������ƿ����Ԫ�ظ���Ϊ�û��Զ���
	cout << "Enter " << (const string&)*this << " data for " << years_count << " year(s):\n";
	for (int i = 0; i < years_count; i++)
	{
		cout << "Enter years: ";
		cin >> PairArray::first()[i];	//Ϊ����a������ѾƵ����
		/*cin >> yr[i];*/
		cout << "Enter bottles for that year: ";
		cin >> PairArray::second()[i];	//Ϊ����b������ѾƵ�ƿ��
		/*cin >> bot[i];*/
	}

	//pa = PairArray(yr, bot); //���ù��캯��Ϊpa����ֵ
}

const string&Wine::Lable()
{
	return (const string&)*this;	//ʹ��ǿ������ת�������ʻ����еĶ���
}

void Wine::Show() const
{
	cout << "Wine: " << (const string&) *this << endl;
	cout << "\tYear\tBottles\n";
	for (int i = 0; i < years_count; i++)
	{
		//ʹ���������������������ʻ����еĳ�Ա����
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}

int Wine::sum()
{
	/*int total = 0;

	for (int i = 0; i < years_count; i++)
	{
		total += pa.second()[i];
	}*/

	return PairArray::second().sum();	//����valarray�⺯�����sun()��������������ܺ�
}