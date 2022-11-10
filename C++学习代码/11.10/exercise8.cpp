//8.Mat和Pat希望邀请他们的朋友来参加派对。他们要编写一个程序完成下面的任务。
//* 让Mat输入他朋友的姓名列表。姓名存储在一个容器中，然后按排列后的顺序显示出来。
//* 让Pat输入她朋友的姓名列表。姓名存储在另一个容器中，然后按排列后的顺序显示出来。
//* 创建第三个容器，将两个列表合并，删除重复的部分，并显示这个容器的内容。
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