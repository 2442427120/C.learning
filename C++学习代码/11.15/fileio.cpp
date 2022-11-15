//该程序要求输入文件名，然后创建一个名为输入名的文件，将一些信息写入到该文件中，然后关闭文件。关闭文件将刷
//新缓冲区，从而确保文件被更新。然后，程序打开该文件，读取并显示其内容。
//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main(void)
//{
//	using namespace std;
//	string filename;
//
//	cout << "Enter name for new file: ";
//	cin >> filename;
//	ofstream fout;
//	fout.open(filename.c_str());
//	fout << "For your eyes only:\n";
//	cout << "Enter your secret number: ";
//	float secret;
//	cin >> secret;
//	fout << "Your secret number is " << secret << endl;
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << "Here are the contents of " << filename << ":\n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << endl;
//	fin.close();
//
//	return 0;
//}