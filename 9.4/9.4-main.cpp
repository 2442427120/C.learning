//8.���Խ����б���������������
// * �ɴ洢0����ĳ�����͵��б�
// * �ɴ������б�
// * �����б�����������
// * ��ȷ���б��Ƿ�Ϊ�գ�
// * ��ȷ���б��Ƿ�Ϊ����
// * �ɷ����б���ÿһ�������������ִ��ĳ�ֲ�����
// ���Կ���������б�ȷʵ�򵥣����磬������������ɾ�������
// �����һ��List������ʾ���ֳ������͡���Ӧ�ṩͷ�ļ�list.h��ʵ���ļ�list.cpp��ǰ�߰����ඨ�壬���߰�����
// ��ʵ�ַ���������Ӧ����һ����̵ĳ�����ʹ������ࡣ
// ���б�Ĺ淶�ܼ򵥣�����Ҫּ�ڼ���������ϰ������ѡ��ʹ�������������ʵ�ָ��б������нӿڲ�Ӧ����
// ��������ѡ��Ҳ����˵�����нӿڲ�Ӧ�������������ڵ�ָ��ȡ�Ӧʹ��ͨ�ø�������ﴴ���б����б������
// ������Ȳ��������ڷ����������Լ�ִ�в�����ͨ��Ӧʹ�ý�����ָ����Ϊ�����ĺ���������
//			void visit(void (*pf)(Item &));
// ���У�pfָ��һ����Item������Ϊ�����ĺ��������ǳ�Ա��������Item���б�������������͡�visit()�������ú���
// �����б��е�ÿ��������


//7.Betelgeusean plorg����Щ����
// ���ݣ�
// * plorg�����Ʋ�����19���ַ���
// * plorg������ָ����CI��������һ��������
// ������
// * �µ�plorg�������ƣ���CIֵΪ50��
// * plorg��CI�����޸ģ�
// * plorg���Ա��������ƺ�CI;
// * plorg��Ĭ������Ϊ��Plorg����
// ���дһ��Plorg���������������ݳ�Ա�ͳ�Ա����ԭ�ͣ�����ʾplorg������д��Ա�����ĺ������塣Ȼ���дһ��
// С��������ʾPlorg�������������
//#include <iostream>
//#include "Plorg.h"
//
//using namespace std;
//
//int main(void)
//{
//	Plorg plorg1;
//	plorg1.show_plorg();
//
//	Plorg plorg2("Nanosmart", 100);
//	plorg2.show_plorg();
//
//	plorg2.revise_ci(120);
//	plorg2.show_plorg();
//
//	return 0;
//}

//6.������һ����������
// class Move
// {
//	private:
//		double x;
//		double y;
//  public:
//		Move(double a = 0, double b = 0);	//set x, y to a, b
//		void showmove() const;	//show current x, y values
//		//This function add x of m to x of invoking object to get new x, adds y of m to y of invoking
//		//object to get new y, creates a new move object initialized to new x, y values and returns it
//		Move add(const Move &m) const;
//		void reset(double a = 0, double b = 0); //reset x, y to a, b
// };
//���ṩ��Ա�����Ķ���Ͳ��������ĳ���
//#include <iostream>
//#include "Move.h"
//
//using namespace std;
//
//int main(void)
//{
//	Move m1;
//	m1.showmove();
//	cout << endl;
//	Move m2(3.0, 4.0);
//	m2.showmove();
//	cout << endl;
//
//	m1.add(m2).showmove();
//	m1.add(m2).add(m2).showmove();
//	cout << endl;
//
//	m2.reset();
//	m2.showmove();
//	m2.reset(1.1, 2.2);
//	m2.showmove();
//	cout << endl;
//
//	return 0;
//}

//5.��������Ľṹ������
// struct customer
// {
//		char fullname[35];
//		double payment;
// };
//��дһ����������ջ����Ӻ�ɾ��customer�ṹ(ջ��Stack��������ʾ)��ÿ��customer�ṹ��ɾ��ʱ����payment
// ��ֵ������ӵ������У�������������ע�⣺Ӧ�ÿ���ֱ��ʹ��Stack��������޸ģ�ֻ���޸�typedef������ʹItem
// ������Ϊcustomer��������unsigned long���ɡ� 
//#include <iostream>
//#include "Stack.h"
//#include <cctype>
//
//using namespace std;
//
//int main(void)
//{
//	char ch;
//	Stack st;
//	customer cu;
//	double total = 0;
//
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO, or Q to quit.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << "\a";
//			continue;
//		}
//
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			cout << "Please enter fullname:\n";
//			cin.getline(cu.fullname, 50);
//			cout << "Please enter payment: ";
//			cin >> cu.payment;
//			cin.get();
//			if (st.isfull())
//				cout << "stack already full\n";
//			else
//				st.push(cu);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "stack already empty\n";
//			else
//			{
//				st.pop(cu);
//				total += cu.payment;
//				cout << "PO #:\n";
//				cout << "fullname: " << cu.fullname << endl;
//				cout << "payment: " << cu.payment << endl;
//				cout << "total: " << total << endl;
//			}
//			break;
//		}
//
//		cout << "Please enter A to add a purchase order,\n"
//			<< "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//
//	return 0;
//}


//4.��ɵھ��µı����ϰ4������Sales�ṹ����صĺ���ת��Ϊһ���༰�������ù��캯���滻setSales(sale&��
// double [], int )�������ù��캯��ʵ��setSales(Sales &)�����Ľ����汾�����ౣ�������ƿռ�SALS�С�
//#include <iostream>
//#include "Sales.h"
//
//int main(void)
//{
//	using SALES::Sales;
//
//	double arr1[8] = { 1.1, 3.3, 7.7, 5.5, 2.2, 4.4, 8.8, 6.6 };
//	double arr2[3] = { 3.3, 7.7, 5.5 };
//
//	Sales sa1(arr1, 8);
//	sa1.showSales(8);
//
//	Sales sa2(arr2, 3);
//	sa2.showSales(3);
//
//	sa1.setSales();
//	sa1.showSales(4);
//
//	return 0;
//}