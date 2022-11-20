//#include <iostream>
//#include <fstream>
//#include <set>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//inline void Out(const string& s) { cout << s << " "; }
//
//int main(void)
//{
//	set<string> Mat, Pat, Guest;
//	string name;
//
//	ifstream fin1;
//	ifstream fin2;
//	fin1.open("mat.dat");
//	fin2.open("pat.dat");
//
//	while (getline(fin1, name) && name.size() > 0)
//		Mat.insert(name);
//	while (getline(fin2, name) && name.size() > 0)
//		Pat.insert(name);
//
//	cout << "Mat's friends:\n";
//	for_each(Mat.begin(), Mat.end(), Out);
//	cout << endl;
//	cout << "Pat's friends:\n";
//	for_each(Pat.begin(), Pat.end(), Out);
//	cout << endl;
//
//	ofstream fout;
//	fout.open("matnpat.dat");
//	Guest.insert(Mat.begin(), Mat.end());
//	Guest.insert(Pat.begin(), Pat.end());
//	for (auto pd = Guest.begin(); pd != Guest.end(); pd++)
//		fout << *pd << endl;
//
//
//	return 0;
//}