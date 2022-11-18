//1.内核格式化
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstdlib>
//#include <sstream>
//
//using namespace std;
//
//int main(void)
//{
//	const char* filename = "record.txt";
//
//	ifstream fin;
//	fin.open(filename);
//	if (!fin.is_open())
//	{
//		cout << "Can't open " << filename << " file.\n";
//		exit(0);
//	}
//
//	char ch;
//	int sum = 0;
//	int n;
//	stringstream str;
//	//将文件中的内容存入到str中
//	while (fin.get(ch))
//		str << ch;
//	//读取str中的内容，并将里面的数字相加
//	while (str >> n)
//		sum += n;
//	cout << "sum = " << sum << endl;
//	fin.close();
//
//	return 0;
//}
