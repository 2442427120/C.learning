//5.Mat和Pat想邀请他们的朋友来参加派对，就像第16章编程练习8那样，但现在他们希望程序使用文件。他们请您编写一
//个完成下述任务的程序。
//	* 从文本文件mat.dat中读取Mat朋友的姓名名单，其中每行为一个朋友。姓名将被存储在容器，然后按顺序显示出来。
//	* 从文本文件pat.dat中读取Pat朋友的姓名名单，其中每行为一个朋友。姓名将被存储在容器，然后按顺序显示出来。
//	* 合并两个清单，删除重复的条目，并将结果保存在文件matnpat.dat中，其中每行为一个朋友。
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <set>
//#include <string>
//
//using namespace std;
//
//const char* filemat = "mat.dat";
//const char* filepat = "pat.dat";
//const char* filematnpat = "matnpat.dat";
//
//int main(void)
//{
//	ifstream fmat(filemat, ios::in);
//	ifstream fpat(filepat, ios::in);
//	ofstream fmnp(filematnpat, ios::out);
//	set<string> Mat, Pat, Guest;
//	string name;
//	//从mat.dat中读取内容，并按顺序显示
//	cout << "Mat's friend:\n";
//	while (getline(fmat, name))
//		Mat.insert(name);
//	for (auto pm = Mat.begin(); pm != Mat.end(); pm++)
//		cout << *pm << endl;
//	//从pat.dat中读取内容，按顺序显示
//	cout << "Pat's friend:\n";
//	while (getline(fpat, name))
//		Pat.insert(name);
//	for (auto pd = Pat.begin(); pd != Pat.end(); pd++)
//		cout << *pd << endl;
//
//	Guest.insert(Mat.begin(), Mat.end());
//	Guest.insert(Pat.begin(), Pat.end());
//	for (auto pg = Guest.begin(); pg != Guest.end(); pg++)
//		fmnp << *pg << endl;
//
//	return 0;
//}