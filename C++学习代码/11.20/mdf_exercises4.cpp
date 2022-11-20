//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//	string str;
//	ifstream fin1("exercise4_file1.dat", ios::in);
//	ifstream fin2("exercise4_file2.dat", ios::in);
//	ofstream fout("exercise4_file3.dat", ios::out);
//
//	while (!fin1.eof() || !fin2.eof())
//	{
//		if (getline(fin1, str) && str.size() > 0)
//			fout << str;
//		fout << " ";
//		if (getline(fin2, str) && str.size() > 0)
//			fout << str;
//		fout << endl;
//	}
//
//	fin1.close();
//	fin2.close();
//	fout.close();
//
//	return 0;
//}