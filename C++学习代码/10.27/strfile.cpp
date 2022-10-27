////2.此程序是从文件中读取字符串的简短示例，它假设文件中包含用冒号字符分隔的字符串，并使用指定分界符的getline()
////方法。然后，显示字符串并给它们编号，每个字符串占一行。
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//
//int main(void)
//{
//	using namespace std;
//	ifstream fin;
//	fin.open("tobuy.txt");
//	if (fin.is_open() == false)
//	{
//		cerr << "Can't open file.Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	string item;
//	int count = 0;
//	getline(fin, item, ':');
//	while (fin)
//	{
//		++count;
//		cout << count << ": " << item << endl;
//		getline(fin, item, ':');
//	}
//	cout << "Done!\n";
//
//	return 0;
//}