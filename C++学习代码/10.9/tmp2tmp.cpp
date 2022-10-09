//ģ�����Լ��ģ����Ԫ���� - �޸�ǰһ�����ӣ�ʹ��Ԫ���������Ϊģ�塣�����˵��ΪԼ��ģ����Ԫ��׼������ʹ��
//��ÿһ�����廯�����һ������Ԫƥ��ľ��廯��
#include <iostream>

using namespace std;

template <typename T> void counts();
template <typename T> void report(T&);

template<typename TT>
class HasFriendT
{
private:
	TT item;
	static int ct;
public:
	HasFriendT(const TT& i) : item(i) { ct++; }
	~HasFriendT() { ct--; }
	friend void counts<TT>();
	friend void report<>(HasFriendT<TT>&);
};

template<typename T>
int HasFriendT<T>::ct = 0;

template<typename T>
void counts()
{
	cout << "template counts: " << HasFriendT<T>::ct << endl;
}

template<typename T>
void report(T& hf)
{
	cout << hf.item << endl;
}

int main(void)
{
	cout << "No object declared: ";
	counts<int>();

	HasFriendT<int> hfi1(10);
	cout << "After hfi1 declared: ";
	counts<int>();
	report(hfi1);

	HasFriendT<int> hfi2(20);
	cout << "After hfi2 declared: ";
	counts<int>();
	report(hfi2);

	HasFriendT<double> hfdb(3.14);
	cout << "After hfdb declared: ";
	counts<double>();
	report(hfdb);

	return 0;
}