//非模板友元的演示
//#include <iostream>
//
//using namespace std;
//
//template<typename T>
//class HasFriend
//{
//private:
//	T item;
//	static int ct;
//public:
//	HasFriend(const T& i) : item(i) { ct++; }
//	~HasFriend() { ct--; }
//	friend void counts();
//	friend void reports(HasFriend<T>&);
//};
//
//template<typename T>
//int HasFriend<T>::ct = 0;
//
//void counts()
//{
//	cout << "int count: " << HasFriend<int>::ct << "; ";
//	cout << "double count: " << HasFriend<double>::ct << endl;
//}
//
//void reports(HasFriend<int>& hf)
//{
//	cout << "HasFriend<int>: " << hf.item << endl;
//}
//
//void reports(HasFriend<double>& hf)
//{
//	cout << "HasFriend<double>: " << hf.item << endl;
//}
//
//int main(void)
//{
//	cout << "No object declared: ";
//	counts();
//
//	HasFriend<int> hfi1(10);
//	cout << "After hfi1 declared: ";
//	counts();
//	reports(hfi1);
//
//	HasFriend<int> hfi2(20);
//	cout << "After hfi2 declaeed: ";
//	counts();
//	reports(hfi2);
//
//	HasFriend<double> hfdb(3.14);
//	cout << "After hfdb declared: ";
//	counts();
//	reports(hfdb);
//
//	return 0;
//}