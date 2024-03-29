//比较函数指针、函数符和Lambda函数
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//const long Size1 = 39;
//const long Size2 = 100 * Size1;
//const long Size3 = 100 * Size2;
//
//bool f3(int x) { return x % 3 == 0; }
//bool f13(int x) { return x % 13 == 0; }
//
//int main(void)
//{
//	vector<int> numbers(Size1);
//	srand(time(0));
//	generate(numbers.begin(), numbers.end(), rand);
//
//	//using function pointers
//	cout << "Sample size = " << Size1 << "\n";
//	int count3 = count_if(numbers.begin(), numbers.end(), f3);
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	int count13 = count_if(numbers.begin(), numbers.end(), f13);
//	cout << "Count of numbers divisible by 13: " << count13 << endl;
//
//	//incress number of numbers
//	numbers.resize(Size2);
//	generate(numbers.begin(), numbers.end(), rand);
//	cout << "Sample size = " << Size2 << endl;
//	// using a functor 
//	class f_mod
//	{
//	private:
//		int dv;
//	public:
//		f_mod(int d = 1) : dv(d) {}
//		bool operator()(int x) { return x % dv == 0; }
//	};
//	count3 = count_if(numbers.begin(), numbers.end(), f_mod(3));
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	count13 = count_if(numbers.begin(), numbers.end(), f_mod(13));
//	cout << "Count of numbers divisible by 13: " << count13 << endl;
//
//	//increase number of numbers again
//	numbers.resize(Size3);
//	generate(numbers.begin(), numbers.end(), rand);
//	cout << "Ssmple size = " << Size3 << endl;
//	//using lambda
//	count3 = count_if(numbers.begin(), numbers.end(), [](int x) { return x % 3 == 0; });
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	count13 = count_if(numbers.begin(), numbers.end(), [](int x) { return x % 13 == 0; });
//	cout << "Count of numbers divisible by 13: " << count13 << endl;
//
//	return 0;
//}