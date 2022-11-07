//5.该程序演示了vector和valarray的一些区别
//#include <iostream>
//#include <vector>
//#include <valarray>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	vector<double> data;
//	double temp;
//
//	cout << "Enter numbers (<=0 to quit):\n";
//	while (cin >> temp && temp > 0)
//		data.push_back(temp);
//	sort(data.begin(), data.end());
//	int size = data.size();
//	valarray<double> numbers(size);
//	int i;
//	for (i = 0; i < size; i++)
//		numbers[i] = data[i];
//
//	valarray<double> sq_rts(size);
//	sq_rts = sqrt(numbers);
//	valarray<double> result(size);
//	result = numbers + 2 * sq_rts;
//	cout.setf(ios_base::fixed);
//	cout.precision(4);
//	for (i = 0; i < size; i++)
//	{
//		cout.width(8);
//		cout << numbers[i] << ": ";
//		cout.width(8);
//		cout << result[i] << endl;
//	}
//	cout << "Done.\n";
//
//	return 0;
//}