//1.演示C++11之前规定的7个string的构造函数
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//	string one("Lottery Winner!");
//	cout << one << endl;	//overload <<
//	string two(20, '$');
//	cout << two << endl;
//	string three(one);
//	cout << three << endl;
//	one += "Oops";
//	cout << one << endl;
//	two = "Sorry! That was ";
//	three[0] = 'p';
//	string four;
//	four = two + three;
//	cout << four << endl;
//	char alls[] = "All's well that ends well";
//	string five(alls, 20);
//	cout << five << endl;
//	string six(alls + 6, alls + 10);
//	cout << six << ", ";
//	string seven(&five[6], &five[10]);
//	cout << seven << "...\n";
//	string eight(four, 7, 16);
//	cout << eight << " in motion!" << endl;
//
//	return 0;
//}