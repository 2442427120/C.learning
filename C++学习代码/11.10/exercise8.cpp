//8.Mat��Patϣ���������ǵ��������μ��ɶԡ�����Ҫ��дһ������������������
//* ��Mat���������ѵ������б������洢��һ�������У�Ȼ�����к��˳����ʾ������
//* ��Pat���������ѵ������б������洢����һ�������У�Ȼ�����к��˳����ʾ������
//* �����������������������б�ϲ���ɾ���ظ��Ĳ��֣�����ʾ������������ݡ�
//#include <iostream>
//#include <vector>
//#include <iterator>
//#include <algorithm>
//#include <string>
//#include <set>
//
//using namespace std;
//
//void Out(const string& v);
//
//int main(void)
//{
//	set<string> name;
//	vector<string> mat_friend;
//	vector<string> pat_friend;
//	string temp1, temp2;
//
//	cout << "Mat, please enter your friends's name (quit to quit):\n";
//	while (getline(cin, temp1) && temp1 != "quit")
//	{
//		if (temp1 == " " || temp1 == "\n")
//		{
//			cout << "Invalid name, please enter again (quit to quit): ";
//			continue;
//		}
//		mat_friend.push_back(temp1);
//	}
//
//	cout << "Pat, please enter your friends's name (quit to quit):\n";
//	while (getline(cin, temp2) && temp2 != "quit")
//	{
//		if (temp2 == " " || temp2 == "\n")
//		{
//			cout << "Invalid name, please enter again (quit to quit): ";
//			continue;
//		}
//		pat_friend.push_back(temp2);
//	}
//
//	cout << "Mat's friend:\n";
//	sort(mat_friend.begin(), mat_friend.end());
//	for_each(mat_friend.begin(), mat_friend.end(), Out);
//	cout << endl;
//
//	cout << "Pat's friend:\n";
//	sort(pat_friend.begin(), pat_friend.end());
//	for_each(pat_friend.begin(), pat_friend.end(), Out);
//	cout << endl;
//
//	cout << "Uinon friend:\n";
//	set_union(mat_friend.begin(), mat_friend.end(), pat_friend.begin(), pat_friend.end(),
//		insert_iterator<set<string>>(name, name.begin()));
//	for_each(name.begin(), name.end(), Out);
//
//	return 0;
//}
//
//void Out(const string& v)
//{
//	cout << v << "\n";
//}