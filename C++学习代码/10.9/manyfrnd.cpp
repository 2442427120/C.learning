//ģ����ķ�Լ��ģ����Ԫ���� - ͨ�������ڲ�����ģ�壬���Դ�����Լ����Ԫ��������ÿ���������廯����ÿ�������
//������Ԫ
//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//class ManyFriend
//{
//private:
//	T item;
//public:
//	ManyFriend(const T& i) : item(i) {}
//	template <typename C, typename D> friend void show2(C& c, D& d);
//};
//
//template <typename C, typename D>
//void show2(C& c, D& d)
//{
//	cout << c.item << ", " << d.item << endl;
//}
//
//int main(void)
//{
//	ManyFriend<int> hfi1(10);
//	ManyFriend<int> hfi2(20);
//	ManyFriend<double> hfdb(3.14);
//
//	cout << "hfi1, hfi2 content:\n";
//	show2(hfi1, hfi2);
//
//	cout << "hfdb, hfi2 content:\n";
//	show2(hfdb, hfi2);
//
//	return 0;
//}