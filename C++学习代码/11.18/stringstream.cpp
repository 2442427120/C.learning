//1.�ں˸�ʽ��
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
//	//���ļ��е����ݴ��뵽str��
//	while (fin.get(ch))
//		str << ch;
//	//��ȡstr�е����ݣ�����������������
//	while (str >> n)
//		sum += n;
//	cout << "sum = " << sum << endl;
//	fin.close();
//
//	return 0;
//}
