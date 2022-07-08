#include <iostream>

//求模运算符
int main(void)
{
	using namespace std;

	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;	//whole stone - 英石
	int pounds = lbs % Lbs_per_stn;	//remainder in pounds - 剩余的磅数
	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";

	return 0;
}

//+，-，*，/运算符
//int main(void)
//{
//	using namespace std;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//
//	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
//	cout << "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 <<endl;
//	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
//	cout << "double constants: 1e7/9.0 = " << 1.e7 / 9.0 << endl;
//	cout << "float constants: 1e7f/9.0 = " << 1.e7f / 9.0f << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	float hats, heads;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Enter a number: ";
//	cin >> hats;
//	cout << "Enter another number: ";
//	cin >> heads;
//
//	cout << "hats = " << hats << " , heads = " << heads << endl;
//	cout << "hats + heads = " << hats + heads << endl;
//	cout << "hats - heads = " << hats - heads << endl;
//	cout << "hats * heads = " << hats * heads << endl;
//	cout << "hats / heads = " << hats / heads << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	float a = 2.34E+22f;
//	float b = a + 1.0f;
//
//	cout << "a = " << a << endl;
//	cout << "b - a = " << b - a << endl;
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	float tub = 10.0 / 3.0;
//	double mint = 10.0 / 3.0;
//	const float million = 1.0e6;
//
//	cout << "tub = " << tub;
//	cout << ", a million tubs = " << million * tub;
//	cout << ",\nand ten million tubs = ";
//	cout << 10 * million * tub << endl;
//
//	cout << "mint = " << mint << " and a million mints = ";
//	cout << million * mint << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	cout << "\aOpeation \"HyperHype\" is now activated!\n";
//	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
//	long code;
//	cin >> code;
//	cout << "\aYou entered " << code << "...\n";
//	cout << "\aCode verified! Proceed with Plan 23!\n";
//
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char ch = 'M';
//	int i = ch;
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	cout << "Add one to the character code:" << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	//using the cout.put() member function to display a char
//	cout << "Display char ch using cout.put(ch):";
//	cout.put(ch);
//
//	//using cout.put() to display a char constant
//	cout.put('!');
//
//	cout << endl << "Done" << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Enter a character: " << endl;
//	cin >> ch;
//	cout << "Hola! ";
//	cout << "Thank you for the " << ch << " character." << endl;
//
//	return 0;
//}