//1.Wine����һ��string������Ա(�μ�������)��һ��Pair����(�μ�����)������ǰ�����ڴ洢���ѾƵ����ƣ���������
// ����valarray<int>����(�μ�����)��������valarray<int>����ֱ𱣴������ѾƵ�������ݺ͸���������ƿ�������磬
// Pair�ĵ�1��valarray<int>�������Ϊ1988��1992��1996�꣬��2��valarray<int>�������Ϊ24��48��144ƿ��Wine���
// ��1��int��Ա���ڴ洢���������⣬һЩtypedef���������ڼ򻯱�̹�����
//	typedef std::valarray<int> ArrayInt;
//	typedef Pair<ArrayInt, ArrayInt> PairArray;
// ������PairArray��ʾ��������Pair<std::valarray<int>, std::valarray<int>>��ʹ�ð�����ʵ��Wine�࣬����һ����
// ���ĳ��������в��ԡ�Wine��Ӧ����һ��Ĭ�Ϲ��캯���Լ����µĹ��캯��:
// //initialize label to l, number of year to y, vintage years to yr[], bottles to bot[]
// Wine(const char* l, int y, const int yr[], const int bot[]);
// //initialize lable to l, number of years to y, create array objects of length y
// Wine(const char* l, int y);
// Wine��Ӧ����һ��GetBottles()������������Wine�����ܹ��洢�������(y)����ʾ�û�������ݺ�ƿ��������Lable()
// ����һ��ָ�����Ѿ����Ƶ����á�sum()��������Pair�����еڶ���valarray<int>������ƿ�����ܺ͡�
// ���Գ���Ӧ��ʾ�û��������Ѿ����ơ�Ԫ�ظ����Լ�ÿ��Ԫ�ش洢����ݺ�ƿ������Ϣ������ʹ����Щ����������һ
// ��Wine����Ȼ����ʾ�����б������Ϣ��
// ������һ���򵥵Ĳ��Գ���
// //pe14-1.cpp -- using Wine class with containment
// #include <iostream>
// #include "winec.h"
// 
// int main(void)
// {
//		using std::cin;
//		using std::cout;
//		using std::endl;
// 
//		cout << "Enter name of wine: ";
//		char lab[50];
//		cin.getline(lab, 50);
//		cout << "Enter number of year: ";
//		int yrs;
//		cin >> yrs;
//		
//		Wine holding(lab, yrs); //store lable, years, give arrays yrs elements
//		holding.GetBottles();   //solicit input for year, bottle count
//		holding.Show();			//display object contents
// 
//		const int YRS = 3;
//		int y[YRS] = { 1993, 1995, 1998 };
//		int b[YRS] = { 48, 60, 72 };
//		//create new object, initialize using data in arrays y and b
//		Wine more("Gushing Grape Red", YRS, y, b);
//		more.Show();
//		cout << "Total bottles for " << more.Lable() //use Lable() method
//			<< ": " << more.sum() << endl;			 //use sum() method
//		cout << "Bye.\n";
// 
//		return 0;
// }
// �����Ǹó�������������
// Enter name of wine: Gully Wash
// Enter number of years: 4
// Enter Gually Wash data for 4 year(s):
// Enter year:1988
// Enter bottles for that year: 42
// Enter year:1994
// Enter bottles for that year: 58
// Enter year : 1998
// Enter bottles for that year: 122
// Enter year : 2001
// Enter bottles for that year: 144
// Wine: Gully Wash
//			Year	Bottles
//			1988	42
//			1994	58
//			1998	122
//			2001	144
// Wine: Gushing Grape Red
//			Year	Bottles
//			1993	48
//			1995	60
//			1998	72
// Total bottles for Gushing Grape Red: 180
// Bye

//#include "winec.h"
//
// int main(void)
// {
//		using std::cin;
//		using std::cout;
//		using std::endl;
// 
//		cout << "Enter name of wine: ";
//		char lab[50];
//		cin.getline(lab, 50);
//		cout << "Enter number of year: ";
//		int yrs;
//		cin >> yrs;
//		
//		Wine holding(lab, yrs); //store lable, years, give arrays yrs elements
//		holding.GetBottles();   //solicit input for year, bottle count
//		holding.Show();			//display object contents
// 
//		const int YRS = 3;
//		int y[YRS] = { 1993, 1995, 1998 };
//		int b[YRS] = { 48, 60, 72 };
//		//create new object, initialize using data in arrays y and b
//		Wine more("Gushing Grape Red", YRS, y, b);
//		more.Show();
//		cout << "Total bottles for " << more.Lable() //use Lable() method
//			<< ": " << more.sum() << endl;			 //use sum() method
//		cout << "Bye.\n";
// 
//		return 0;
// }