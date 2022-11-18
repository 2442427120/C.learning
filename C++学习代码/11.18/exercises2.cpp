//2.编写一个程序，将键盘输入（直到模拟的文件尾）复制到通过命令行指定的文件中。
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
//int main(void)
//{
//	string filename;
//	cout << "Enter file name: ";
//	cin >> filename;
//
//	ofstream fout;
//	fout.open(filename);
//	if (!fout.is_open())
//	{
//		cout << "Can't open " << filename << " file.\n";
//		exit(0);
//	}
//
//	fout<< "for your eyes only!\n";
//	double secret;
//	cout << "Enter your secret number: ";
//	cin >> secret;
//	fout << "Your secret number is " << secret << endl;
//
//	fout.close();
//
//	return 0;
//}