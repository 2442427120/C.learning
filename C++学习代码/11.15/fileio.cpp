//�ó���Ҫ�������ļ�����Ȼ�󴴽�һ����Ϊ���������ļ�����һЩ��Ϣд�뵽���ļ��У�Ȼ��ر��ļ����ر��ļ���ˢ
//�»��������Ӷ�ȷ���ļ������¡�Ȼ�󣬳���򿪸��ļ�����ȡ����ʾ�����ݡ�
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