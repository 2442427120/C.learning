//3.�ó������û����뵥�ʡ�ϣ�����õ�һ��������˳�����еĵ����б�һ������ĸ˳�����еĵĵ����б�(���Դ�С
//д)������¼ÿ�����ʱ�����Ĵ��������ڼ򻯵�Ŀ�ģ����������в��������ֺͱ����š�
//#include <iostream>
//#include <string>
//#include <set>
//#include <vector>
//#include <map>
//#include <iterator>
//#include <algorithm>
//#include <cctype>
//
//using namespace std;
//
//void display(const string& s);
//string& ToLower(string& st);
//char toLower(char ch) { return tolower(ch); }
//
//int main(void)
//{
//	vector<string> words;
//	cout << "Enter words (enter quit to quit):\n";
//	string input;
//	while (cin >> input && input != "quit")
//		words.push_back(input);
//
//	cout << "You entered the following words:\n";
//	for_each(words.begin(), words.end(), display);
//	cout << endl;
//
//	set<string> wordset;
//	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
//	cout << "\nAlphabetic list of words:\n";
//	for_each(wordset.begin(), wordset.end(), display);
//	cout << endl;
//
//	map<string, int> wordmap;
//	set<string>::iterator si;
//	for (si = wordset.begin(); si != wordset.end(); si++)
//		wordmap[*si] = count(words.begin(), words.end(), *si);
//
//	cout << "\nWord frequency:\n";
//	for (si = wordset.begin(); si != wordset.end(); si++)
//		cout << *si << ": " << wordmap[*si] << endl;
//
//	return 0;
//}
//
//void display(const string& s)
//{
//	cout << s << " ";
//}
//
//string& ToLower(string& st)
//{
//	transform(st.begin(), st.end(), st.begin(), toLower);
//	return st;
//}