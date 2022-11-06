//1.演示关联容器set的set_union, set_intersection, set_difference, lower_bound, upper_bound方法
//#include <iostream>
//#include <string>
//#include <iterator>
//#include <algorithm>
//#include <set>
//
//int main(void)
//{
//	using namespace std;
//	const int N = 6;
//	string s1[N] = { "buffon", "thinkers", "for", "heavy", "can", "for" };
//	string s2[N] = { "metal", "any", "food", "elegent", "deliver", "for" };
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "Set A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "Set B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Union of A and B:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Intersection of A and B:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Difference of A and B:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	set<string> C;
//	cout << "Set C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(),
//		insert_iterator<set<string>>(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "Set C after insertion:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "Showing a range:\n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
//	cout << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//	string s1[4] = { "about", "hello", "blue", "heavy" };
//	string s2[4] = { "king", "prince", "cube", "mercy" };
//
//	set<string> A(s1, s1 + 4);
//	set<string> B(s2, s2 + 4);
//	set<string> C;
//
//	ostream_iterator<string, char> out(cout, " ");
//	set_union(A.begin(), A.end(), B.begin(), B.end(), 
//		insert_iterator<set<string>>(C, C.begin()));
//	cout << "Set C:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//	cout << "Showing a range:\n";
//	copy(C.lower_bound("book"), C.upper_bound("knight"), out);
//	cout << endl;
//	
//	return 0;
//}