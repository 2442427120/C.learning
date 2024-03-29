//2.multimap是如何创建对象的，演示count()方法和equal_range()方法
//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//typedef int KeyType;
//typedef pair<const KeyType, string> Pair;
//typedef multimap<KeyType, string> MapCode;
//
//int main(void)
//{
//	MapCode codes;
//
//	codes.insert(Pair(415, "San Francisco"));
//	codes.insert(Pair(510, "Oakland"));
//	codes.insert(Pair(718, "Brooklyn"));
//	codes.insert(Pair(718, "Staten Island"));
//	codes.insert(Pair(415, "San Rafael"));
//	codes.insert(Pair(510, "Berkeley"));
//
//	cout << "Number of cities with area code 415: " << codes.count(415) << endl;
//	cout << "Number of cities with area code 718: " << codes.count(718) << endl;
//	cout << "Number of cities with area code 510: " << codes.count(510) << endl;
//
//	cout << "Area Code City:\n";
//	MapCode::iterator it;
//	for (it = codes.begin(); it != codes.end(); it++)
//		cout << " " << (*it).first << " " << (*it).second << endl;
//
//	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
//	cout << "Cities with area code 718:\n";
//	for (it = range.first; it != range.second; it++)
//		cout << (*it).second << endl;
//
//	return 0;
//}