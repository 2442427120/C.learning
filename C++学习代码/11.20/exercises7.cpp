//7.下面是某个程序的部分代码。该程序将键盘输入读取到一个由string对象组成的vector对象中，将字符串内容（而不
//是string对象）存储到一个文件中，然后该文件的内容复制到另一个由string对象组成的vector中。
//int main(void)
//{
//using namespace std;
//vector<string> vostr;
//string temp;
//
////acquire strings
//cout << "Enter strings (empty line to quit):\n";
//while (getline(cin, temp) && temp[0] != '\0')
//vostr.push_back(temp);
//cout << "Here is your input.\n";
//for_each(vostr.begin(), vostr.end(), ShowStr);
//
////store in a file
//ofstream fout("strings.dat", ios_base::out | ios_base::binary);
//for_each(vostr.begin(), vostr.end(), Store(fout));
//fout.close();
//
////recover file contents
//vector<string> vistr;
//ifstream fin("strings.dat", ios_base::in | ios_base::binary);
//if (fin.is_open())
//{
//	cerr << "Could not open file for input.\n";
//	exit(EXIT_FAILURE);
//}
//GetStrs(fin, vistr);
//cout << "\nHere are the strings read from the file:\n";
//for_each(vistr.begin(), vistr.end(), ShowStr);
//
//return 0;
//}
//该程序以二进制格式打开文件，并使用read()和write()来完成I/O。余下的工作如下所示。
// *编写函数void ShowStr(const string& ),它显示一个string对象，并在显示完后换行。
// *编写函数符Store，它将字符串信息写入到文件中。Store的构造函数应接受一个指定ifstream对象的参数，而重载的
//  operator()(const string&)应指出要写入到文件中的字符串。一种可行的计划是，首先将字符串的长度写入到文件中
//  ，然后将字符串的内容写到文件中。例如，如果len存储了字符串的长度，可以这样做：
//  os.write((char *)&len, sizeof(std::size_t));	//store length
//  os.write(s.data(), len); //store characters
//  成员函数data返回一个指针，该指针指向一个其中存储了字符串中字符的数组。它类似于成员函数c_str()，只是后者
//  在数组末尾加上了一个空字符。
// *编写函数GetStrs()，它根据文件恢复信息。该函数可以使用read()来获得字符串长度，然后使用一个循环从文件中读
//  取相应数量的字符，并将它们附加到一个原来为空的临时string末尾。由于string的数据是私有的，因此必须使用
//  string类的方法来将数据存储到string对象中，而不能直接存储。 

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//
//class Store
//{
//private:
//	std::string str;
//public:
//	Store(std::ofstream& ifs) {}
//	void operator()(const std::string& s);
//	char* data();
//};
//
//void Store::operator()(const std::string& s)
//{
//	int len = s.size();
//	std::ofstream os;
//
//	os.write((char*)&len, sizeof(std::size_t));
//	os.write(s.data(), len);
//}
//
//char* data()
//{
//	return nullptr;
//}
//
//inline void ShowStr(const std::string& s)
//{
//	std::cout << s << std::endl;
//}
//
//int main(void)
//{
//	using namespace std;
//	vector<string> vostr;
//	string temp;
//
//	//acquire strings
//	cout << "Enter strings (empty line to quit):\n";
//	while (getline(cin, temp) && temp[0] != '\0')
//		vostr.push_back(temp);
//	cout << "Here is your input.\n";
//	for_each(vostr.begin(), vostr.end(), ShowStr);
//
//	//store in a file
//	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
//	for_each(vostr.begin(), vostr.end(), Store(fout));
//	fout.close();
//
//	//recover file contents
//	vector<string> vistr;
//	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cerr << "Could not open file for input.\n";
//		exit(EXIT_FAILURE);
//	}
//	GetStrs(fin, vistr);
//	cout << "\nHere are the strings read from the file:\n";
//	for_each(vistr.begin(), vistr.end(), ShowStr);
//
//	return 0;
//}
//
//void GetStrs(std::ifstream& ifs, std::vector<std::string>& vs)
//{
//	
//}
