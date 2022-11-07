//1.演示STL中的算法next_permutation()和sort()
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	string letter;
//
//	cout << "Enter the letter grouping (enter quit to quit): ";
//	while (cin >> letter && letter != "quit")
//	{
//		cout << "Permutaion of: " << letter << endl;
//		sort(letter.begin(), letter.end());
//		cout << letter << endl;
//		while (next_permutation(letter.begin(), letter.end()))
//			cout << letter << endl;
//
//		cout << "Enter next sequence (quit to quit): ";
//	}
//
//	return 0;
//}