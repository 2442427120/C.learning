//7.������ĳ������Ĳ��ִ��롣�ó��򽫼��������ȡ��һ����string������ɵ�vector�����У����ַ������ݣ�����
//��string���󣩴洢��һ���ļ��У�Ȼ����ļ������ݸ��Ƶ���һ����string������ɵ�vector�С�
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
//�ó����Զ����Ƹ�ʽ���ļ�����ʹ��read()��write()�����I/O�����µĹ���������ʾ��
// *��д����void ShowStr(const string& ),����ʾһ��string���󣬲�����ʾ����С�
// *��д������Store�������ַ�����Ϣд�뵽�ļ��С�Store�Ĺ��캯��Ӧ����һ��ָ��ifstream����Ĳ����������ص�
//  operator()(const string&)Ӧָ��Ҫд�뵽�ļ��е��ַ�����һ�ֿ��еļƻ��ǣ����Ƚ��ַ����ĳ���д�뵽�ļ���
//  ��Ȼ���ַ���������д���ļ��С����磬���len�洢���ַ����ĳ��ȣ�������������
//  os.write((char *)&len, sizeof(std::size_t));	//store length
//  os.write(s.data(), len); //store characters
//  ��Ա����data����һ��ָ�룬��ָ��ָ��һ�����д洢���ַ������ַ������顣�������ڳ�Ա����c_str()��ֻ�Ǻ���
//  ������ĩβ������һ�����ַ���
// *��д����GetStrs()���������ļ��ָ���Ϣ���ú�������ʹ��read()������ַ������ȣ�Ȼ��ʹ��һ��ѭ�����ļ��ж�
//  ȡ��Ӧ�������ַ����������Ǹ��ӵ�һ��ԭ��Ϊ�յ���ʱstringĩβ������string��������˽�еģ���˱���ʹ��
//  string��ķ����������ݴ洢��string�����У�������ֱ�Ӵ洢�� 

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
