//1.在文件尾追加数据。
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//
//const char* file = "gusets.txt";
//
//int main(void)
//{
//	ifstream fin;
//	char ch;
//	fin.open(file);
//	if (fin.is_open()) 
//	{
//		cout << "Here are the current contents of the " << file << " file:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out | ios_base::app);
//	if (!fout.is_open())
//	{
//		cerr << "Can't open " << file << " file for output.\n";
//		exit(0);
//	}
//	cout << "Enter guest name (enter a blank line to quit):\n";
//	string name;
//	while (getline(cin, name) && name.size() > 0)
//	{
//		fout << name << endl;
//	}
//	fout.close();
//
//	fin.clear();
//	fin.open(file);
//	if (fin.is_open())
//	{
//		cout << "Here are the new contents of the " << file << " file:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	return 0;
//}