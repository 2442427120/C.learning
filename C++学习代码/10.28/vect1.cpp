//该程序创建了两个vector对象----一个是int规范，另一个是string规范，它们都包含5个元素
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//const int NUM = 5;
//
//int main(void)
//{
//	vector<int> ratings(NUM);
//	vector<string> titles(NUM);
//	cout << "You will do ecactly as told. You will enter\n"
//		<< NUM << " book titles and your rating (0-10).\n";
//	
//	int i;
//	for (i = 0; i < NUM; i++)
//	{
//		cout << "Enter title #" << i + 1 << ": ";
//		getline(cin, titles[i]);
//		cout << "Enter your rating (0-10): ";
//		cin >> ratings[i];
//		cin.get();
//	}
//
//	cout << "Thank you. You entered the following:\n"
//		<< "Rating\tBook\n";
//	for (i = 0; i < NUM; i++)
//	{
//		cout << ratings[i] << "\t" << titles[i] << endl;
//	}
//
//
//
//	return 0;
//}