//3.编写一个程序，将一个文件复制到另一个文件中。让程序通过命令行获取文件名。如果文件无法打开，程序将指出这
//一点
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//
//
//int main(void)
//{
//	string filename1, filename2;
//	//打开要复制的文件
//	ifstream fin;
//	cout << "Enter the name of the file to be copied; ";
//	cin >> filename1;
//	fin.open(filename1);
//	if (!fin.is_open())
//	{
//		cerr << "Can't open " << filename1 << " flie\n";
//		exit(0);
//	}
//	//打开要复制到的文件
//	ofstream fout;
//	cout << "Enter the name of the file to copy to: ";
//	cin >> filename2;
//	fout.open(filename2);
//	if (!fout.is_open())
//	{
//		cerr << "Can't open " << filename2 << " flie\n";
//		exit(0);
//	}
//	//将第一个文件大的内容复制到第二个文件中
//	char ch;
//	while (fin.get(ch))
//		fout << ch;
//	fin.close();
//	fout.close();
//
//	return 0;
//}