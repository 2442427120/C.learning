//const��Ա����
#include <iostream>
#include "main902.h"

int main(void)
{
	const Stock land = Stock("Kludgehorn Properties");
	land.show();

	return 0;
}

//�ó�����ʾ�˹��캯������������
//#include <iostream>
//#include "main902.h"
//
//int main(void)
//{
//	{
//		using std::cout;
//		cout << "Using constructors to create new object\n";
//		Stock stock1("NanoSmart", 12, 20.0);
//		stock1.show();
//		Stock stock2 = Stock("Boffo objects", 2, 2.0);
//		stock2.show();
//
//		cout << "Assgning stock1 to stock2:\n";
//		stock2 = stock1;
//		cout << "Listing stock1 and stock2:\n";
//		stock1.show();
//		stock2.show();
//
//		cout << "Using a constructor to reset an object\n";
//		stock1 = Stock("Nifty Foods", 10, 50.0);
//		cout << "Revised stock1:\n";
//		stock1.show();
//		cout << "Done\n";
//	}
//		return 0;
//}

//���캯������ʽ����ʽʹ��
//���ַ�ʽ���幹�캯����1.����������Ϊ�βθ���Ĭ��ֵ  2.���صķ�ʽ���幹�캯����
//#include <iostream>
//#include "main902.h"
//
//int main(void)
//{
//	Stock fluffy_the_cat;
//	//Stock fluffy_the_cat = Stock("NanoSmart", 20, 12.5);	//��ʽʹ�ù��캯��
//	fluffy_the_cat.show();
//
//	//Stock garment("Furry Mason", 50, 2.5);	//��ʽʹ�ù��캯��
//	//garment.show();
//
//	return 0;
//}

//��ʾ���������ʵ�����Ա�����Լ�ʹ����
//#include <iostream>
//#include "main902.h"

//int main(void)
//{
	//Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.sell(400, 20.00);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.buy(30000, 40.125);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.sell(30000, 0.125);
//	fluffy_the_cat.show();
//
//	return 0;
//}