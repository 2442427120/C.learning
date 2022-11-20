//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	if (argc != 3)
//	{
//		cerr << "Files not enough!\n";
//		exit(0);
//	}
//
//	char ch;
//	ifstream fin(argv[1], ios_base::in);
//	ofstream fout(argv[2], ios_base::out);
//
//	if (!fin.is_open())
//	{
//		cerr << "Can't open " << argv[1] << "!\n";
//		exit(0);
//	}
//	if (!fout.is_open())
//	{
//		cerr << "Can't create " << argv[2] << "!\n";
//		exit(0);
//	}
//
//	while (fin.get(ch))
//		fout << ch;
//
//	fin.close();
//	fout.close();
//
//	return 0;
//}