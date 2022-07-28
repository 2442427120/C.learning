#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

//8.编写一个程序，它打开一个文本文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个
//字符。
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

//7.编写一个程序，它每次读取一个单词，直到用户只输入q。然后，该程序指出有多少个单词以元音打头，有多少单词
//以辅音打头，还有多少个单词不属于这两类。为此，方法之一是，使用isalpha()来区分以字母和其他字符打头的单词，
//然后对于通过isalpha()测试的单词，使用if或switch语句来确定哪些以元音打头。该程序运行情况如下：
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
//	int vowels_number = 0;	//元音
//	int consonants_number = 0;	//辅音
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

//6.编写一个程序，记录捐助给“维护合法权利团队”的资金。该程序要求用户输入捐献者数目，然后要求用户输入每一
//个捐献者的姓名和款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来存储姓名的字符数
//组(或string对象)和用来存储款项的double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐款者的姓名
//及捐款数额。该列表前应包含一个标题，指出下面的捐款者是一个重要捐款人(Grand Patrons)。然后，程序将列出其
//他的捐款者，该列表要以Patrons开头。如果某种类别没有捐款者，则程序打印单词“none”。该程序只显示这两种类
//，而不进行排序。
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