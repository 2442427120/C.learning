//4.编写一个程序，它打开两个文本文件进行输入，打开一个文本文件进行输出。该程序将两个输入文件中对应的行并接
//起来，并用空格分隔，然后将结果写入到输出文件。如果一个文件比另一个短，则将较长文件中余下的几行直接复制到
//输出文件中。例如，假设第一个文件的内容如下：
//	eggs kites donuts
//	balloons hammers
//	stones
//而第二个输入文件的内容如下:
//	zero lassitude
//	finance drama
//则得到的文件的内容将如下:
//	eggs kites donuts zero lassitude
//	balloons hammers finance drama
//	stones
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//
//const char* file1 = "temp1.txt";
//const char* file2 = "temp2.txt";
//const char* file3 = "temp3.txt";
//
//int main(void)
//{
//	string str1, str2;
//	ifstream fin1(file1, ios::in);
//	ifstream fin2(file2, ios::in);
//	ofstream fout(file3, ios::out);
//
//	if (!fin1.is_open() && !fin2.is_open() && fout.is_open())
//	{
//		cerr << "Can't open 1 or to or 3 file\n";
//		exit(0);
//	}
//	//在两个输入文本都没达到末尾时，将两个输入文本的内容输出到输出文本中
//	while (getline(fin1, str1) && getline(fin2, str2) && !fin1.eof() && !fin2.eof())
//		fout << str1 << " " << str2 << endl;
//	//若第一个输入文本没达到末尾，即第一个输入文本长于第二个文本，则将第一个输入文本的内容输入到输出文本
//	while (!fin1.eof() && getline(fin1, str1))
//		fout << str1 << endl;
//	//第二个输入文本的内容长于第一个输入文本
//	while (!fin2.eof() && getline(fin2, str2))
//		fout << str2 << endl;
//
//	fin1.close();
//	fin2.close();
//	fout.close();
//
//	return 0;
//}


