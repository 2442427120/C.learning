//《C++ Primer Plus》第十六章编程练习第8题修改
//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//	set<string> Mat, Pat, Guest;
//	string name;
//
//	cout << "Enter Mat's friends name (enter quit to quit):\n";
//	while (getline(cin, name) && name != "quit")
//	{
//		Mat.insert(name);
//	}
//
//	cout << "Enter Pat's friends name (enter quit to quit):\n";
//	while (getline(cin, name) && name != "quit")
//	{
//		Pat.insert(name);
//	}
//
//	Guest.insert(Mat.begin(), Mat.end());
//	Guest.insert(Pat.begin(), Pat.end());
//	for (auto pd = Guest.begin(); pd != Guest.end(); pd++)
//		cout << *pd << " ";
//	cout << endl;
//
//	return 0;
//}
