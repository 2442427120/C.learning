//4.��дһ���������������ı��ļ��������룬��һ���ı��ļ�����������ó������������ļ��ж�Ӧ���в���
//���������ÿո�ָ���Ȼ�󽫽��д�뵽����ļ������һ���ļ�����һ���̣��򽫽ϳ��ļ������µļ���ֱ�Ӹ��Ƶ�
//����ļ��С����磬�����һ���ļ����������£�
//	eggs kites donuts
//	balloons hammers
//	stones
//���ڶ��������ļ�����������:
//	zero lassitude
//	finance drama
//��õ����ļ������ݽ�����:
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
//	//�����������ı���û�ﵽĩβʱ�������������ı����������������ı���
//	while (getline(fin1, str1) && getline(fin2, str2) && !fin1.eof() && !fin2.eof())
//		fout << str1 << " " << str2 << endl;
//	//����һ�������ı�û�ﵽĩβ������һ�������ı����ڵڶ����ı����򽫵�һ�������ı����������뵽����ı�
//	while (!fin1.eof() && getline(fin1, str1))
//		fout << str1 << endl;
//	//�ڶ��������ı������ݳ��ڵ�һ�������ı�
//	while (!fin2.eof() && getline(fin2, str2))
//		fout << str2 << endl;
//
//	fin1.close();
//	fin2.close();
//	fout.close();
//
//	return 0;
//}


