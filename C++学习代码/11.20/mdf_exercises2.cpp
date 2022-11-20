//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	char ch;
//	ofstream fout;
//	fout.open(argv[1]);
//
//	if (fout.is_open())
//	{
//		cout << "Enter your data:\n";
//		while (cin.get(ch) && ch != EOF)
//			fout << ch;
//	}
//	else
//	{
//		cerr << "Can't open / create the file.\n";
//		exit(0);
//	}
//
//	fout.close();
//	return 0;
//}