//演示STL提供的一些预定义的迭代器。copy()算法，ostream_iterator模板，reverse_iterator
//#include <iostream>
//#include <iterator>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	int casts[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	vector<int> dice(10);
//
//	cout << "Let the dice be cats!\n";
//	copy(casts, casts + 10, dice.begin());
//	ostream_iterator<int, char> out_iter(cout, " ");
//	copy(dice.begin(), dice.end(), out_iter);
//	cout << endl;
//
//	cout << "Inplicit use of reverse iterator.\n";
//	copy(dice.rbegin(), dice.rend(), out_iter);
//	cout << endl;
//
//	cout << "Explicit use of reverse iterator.\n";
//	vector<int>::reverse_iterator ri;
//	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
//		cout << *ri << ' ';
//	cout << endl;
//
//	return 0;
//}