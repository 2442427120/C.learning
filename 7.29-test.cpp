#include <iostream>
#include <fstream>
#include <cctype>

//9.��ɱ����ϰ6�������ļ��ж�ȡ�������Ϣ�����ļ��ĵ�һ��Ϊ������������µ�����ӦΪ�ɶԵ��С���ÿһ��
//�У���һ��Ϊ������������ڶ���Ϊ�����������ļ�����������:
//	4
//	Sam Stone
//	2000
//	Freida Flass
//	100500
//	Tammy Tubbs
//	5000
//	Rich Raptor
//	55000
using namespace std;

int main(void)
{
	ifstream inFile;
	inFile.open("donor.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file ""donor.txt""\n";
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	char ch[100];

	inFile.getline(ch, 100);
	while (inFile.good())
	{
		cout << ch;
		inFile.getline(ch, 100);
	}

	inFile.close();

	return 0;
}

//8.��дһ����������һ���ı��ļ�������ַ��ض�ȡ���ļ���ֱ�������ļ�ĩβ��Ȼ��ָ�����ļ��а������ٸ�
//�ַ���
//using namespace std;
//
//int main(void)
//{
//	int count = 0;
//	ifstream inFile;	//����ifstream����
//
//	inFile.open("character.txt");	//�����·���µ��ļ�"character.txt"
//	if (!inFile.is_open())	//�ж��Ƿ�򿪳ɹ�
//	{
//		cout << "Could not open the file ""character.txt""\n";
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	char character;
//
//	inFile >> character;	//���ļ��е�һ���ַ���ʼ��ȡ
//	while (inFile.good())	//ֱ�������ļ�ĩβֹͣ
//	{
//		if (isalpha(character))
//			++count;
//		inFile >> character;
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unkonwn reason.\n";
//
//	if (0 == count)
//		cout << "Not data process.\n";
//	else
//		cout << count << " characters in total.\n" << endl;
//
//	inFile.close();
//
//	return 0;
//}