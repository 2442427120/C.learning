//3.��дһ�����򣬽�һ���ļ����Ƶ���һ���ļ��С��ó���ͨ�������л�ȡ�ļ���������ļ��޷��򿪣�����ָ����
//һ��
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
//	//��Ҫ���Ƶ��ļ�
//	ifstream fin;
//	cout << "Enter the name of the file to be copied; ";
//	cin >> filename1;
//	fin.open(filename1);
//	if (!fin.is_open())
//	{
//		cerr << "Can't open " << filename1 << " flie\n";
//		exit(0);
//	}
//	//��Ҫ���Ƶ����ļ�
//	ofstream fout;
//	cout << "Enter the name of the file to copy to: ";
//	cin >> filename2;
//	fout.open(filename2);
//	if (!fout.is_open())
//	{
//		cerr << "Can't open " << filename2 << " flie\n";
//		exit(0);
//	}
//	//����һ���ļ�������ݸ��Ƶ��ڶ����ļ���
//	char ch;
//	while (fin.get(ch))
//		fout << ch;
//	fin.close();
//	fout.close();
//
//	return 0;
//}