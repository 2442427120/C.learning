#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

//8.��дһ����������һ���ı��ļ�������ַ��ض�ȡ���ļ���ֱ�������ļ�ĩβ��Ȼ��ָ�����ļ��а������ٸ�
//�ַ���
using namespace std;

int main(void)
{
	ifstream inFile;
	inFile.open("alpha.txt");

	if (!inFile.is_open())
	{
		cout << "Could not open the file ""alpha.txt""\n" ;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	return 0;
}

//7.��дһ��������ÿ�ζ�ȡһ�����ʣ�ֱ���û�ֻ����q��Ȼ�󣬸ó���ָ���ж��ٸ�������Ԫ����ͷ���ж��ٵ���
//�Ը�����ͷ�����ж��ٸ����ʲ����������ࡣΪ�ˣ�����֮һ�ǣ�ʹ��isalpha()����������ĸ�������ַ���ͷ�ĵ��ʣ�
//Ȼ�����ͨ��isalpha()���Եĵ��ʣ�ʹ��if��switch�����ȷ����Щ��Ԫ����ͷ���ó�������������£�
//	The words (q to quit):
//	The 12 awesome oxen ambled
//  quietly across 15 meters of lawn. q
//	5 words beginning with vowels
//	4 words beginning with consonants
//  2 others
//using namespace std;
//
//int main(void)
//{
//	int vowels_number = 0;	//Ԫ��
//	int consonants_number = 0;	//����
//	int others = 0;
//	string words;
//
//	cout << "The words (q to quit): \n";
//
//	while (cin >> words && words != "q")
//	{
//		if (isalpha(words[0]))
//		{
//			if ((words[0] == 'a') || (words[0] == 'e') || (words[0] == 'i') || (words[0] == 'o') || words[0] == 'u'
//				|| (words[0] == 'A') || (words[0] == 'E') || (words[0] == 'I') || (words[0] == 'O') || words[0] == 'U')
//				vowels_number++;
//			else
//				consonants_number++;
//
//		}
//		else
//			others++;
//	}
//
//	cout << vowels_number << " words beginning with vowels" << endl;
//	cout << consonants_number << " words beginning with consonants" << endl;
//	cout << others << " others" << endl;
//
//	return 0;
//}

//6.��дһ�����򣬼�¼��������ά���Ϸ�Ȩ���Ŷӡ����ʽ𡣸ó���Ҫ���û������������Ŀ��Ȼ��Ҫ���û�����ÿһ
//�������ߵ������Ϳ����Щ��Ϣ��������һ����̬����Ľṹ�����С�ÿ���ṹ��������Ա�������洢�������ַ���
//��(��string����)�������洢�����double��Ա����ȡ���е����ݺ󣬳�����ʾ���о���10000�ľ���ߵ�����
//�����������б�ǰӦ����һ�����⣬ָ������ľ������һ����Ҫ�����(Grand Patrons)��Ȼ�󣬳����г���
//���ľ���ߣ����б�Ҫ��Patrons��ͷ�����ĳ�����û�о���ߣ�������ӡ���ʡ�none�����ó���ֻ��ʾ��������
//��������������
//using namespace std;
//
//struct donor
//{
//	string name;
//	double amount;
//};
//
//int main(void)
//{
//	int gpa = 0;
//	int pa = 0;
//	int donor_number;
//
//	cout << "Please enter the number of donor: ";
//	cin >> donor_number;
//	cin.get();
//
//	donor* donor_information = new donor[donor_number];
//	for (int i = 0; i < donor_number; ++i)
//	{
//		cout << "donor #" << i + 1 << endl;
//		cout << "Please enter donor name: ";
//		getline(cin, donor_information[i].name);
//		cout << "Please enter donor amount: ";
//		cin >> donor_information[i].amount;
//		cin.get();
//	}
//
//	cout << "\nGrand Patrons:\n";
//	for (int i = 0; i < donor_number; ++i)
//	{
//		if (donor_information[i].amount >= 10000)
//		{
//			cout << "donor name: " << donor_information[i].name << "\n";
//			cout << "donor amount: " << donor_information[i].amount << endl;
//			gpa++;
//		}
//	}
//	if (0 == gpa)
//		cout << "none" << endl;
//
//	cout << "\nPatrons:\n";
//	for (int i = 0; i < donor_number; ++i)
//	{
//		if (donor_information[i].amount < 10000)
//		{
//			cout << "donor name: " << donor_information[i].name << endl;
//			pa++;
//		}
//	}
//	if (0 == pa)
//		cout << "none" << endl;
//
//	delete []donor_information;
// 
//	return 0;
//}